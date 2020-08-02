#include <iostream>
#include <fstream>
#include <filesystem>
#include <iostream>

struct Record {
	int id;
	char name[10];
};

void Generate(int records, const std::filesystem::path& dst) {
	std::ofstream output{ dst, std::ios::binary | std::ios::out };
	Record r{};

	if (!output) throw std::runtime_error("Could not generate file!");

	strcpy_s(r.name, 3, "Ed");
	try {
		for (int i = 0; i < records; ++i) {
			r.id = i;
			if (!output.write((const char*)&r, sizeof(Record))) {
				throw std::runtime_error("Could not write to generated file!");
			}
		}
		output.close();
	}
	catch (...) {
		throw;
	}
}

void Copy(const std::filesystem::path &src, const std::filesystem::path &dest) {
	using namespace std::filesystem;
	std::ifstream ibinstream{ src, std::ios::binary | std::ios::in };
	std::ofstream obinstream{ dest, std::ios::binary | std::ios::out };

	if (!obinstream	) {
		throw std::runtime_error("Could not create src file!");
	}
	if (!ibinstream) {
		throw std::runtime_error("Could not create dst file!");
	}

	auto fsize = file_size(src);
	const unsigned int BUFF_SIZE{ 512 };
	char buffer[BUFF_SIZE]{};

	if (fsize < BUFF_SIZE) {
		if (!ibinstream.read((char*)buffer, fsize)) {
			throw std::runtime_error("Could not read input binary file");
		}
		if (!obinstream.write((const char*)buffer, fsize)) {
			throw std::runtime_error("Could not wirte output binary file");
		}
	}
	else {
		auto chunks{ fsize / BUFF_SIZE };
		int remaining{ fsize % BUFF_SIZE };
		int progress{}, oldprogress{};

		for (int i = 0; i < chunks; ++i) {
			if (!ibinstream.read((char*)buffer, BUFF_SIZE)) {
				throw std::runtime_error("Could not read input binary file");
			}
			if (!obinstream.write((const char*)buffer, BUFF_SIZE)) {
				throw std::runtime_error("Could not wirte output binary file");
			}

			progress = static_cast<int>(10 * static_cast<float>(i) / chunks);
			if (progress != oldprogress) {
				std::cout << ".";
				oldprogress = progress;
			}
		}

		memset(buffer, '\0', BUFF_SIZE);

		if (remaining > 0) {
			if (!ibinstream.read((char*)buffer, remaining)) {
				throw std::runtime_error("Could not read input binary file");
			}
			if (!obinstream.write((const char*)buffer, remaining)) {
				throw std::runtime_error("Could not wirte output binary file");
			}

			std::cout << ".";
		}
	}

	std::cout << "Done!\n";

	ibinstream.close();
	obinstream.close();
}

int main(int argc, char **argv) {
	using namespace std::filesystem;

	if (argc != 3) {
		std::cout << "Specify src and dest!" << std::endl;
		return 0;
	}

	path src{ argv[1] };
	path dst{ argv[2] };

	std::cout << "Copying " << src;
	
	if (is_directory(src)) {
		if (!exists(dst)) {
			std::cout << "Creating dst folder\n";
			create_directory(dst);
		}
		for (auto& i : directory_iterator(src)) {
			path new_file{ dst };
			new_file /= i.path().filename();
			Copy(i.path(), new_file);
		}
	}
	else {
		Copy(src, dst);
	}

	return 0;
}