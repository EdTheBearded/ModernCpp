#include <string>
#include <vector>

enum class Case{SENSITIVE, INSENSITIVE};
     
std::vector<int> FindAll(const std::string &source, const std::string &search_string, Case searchCase = Case::INSENSITIVE, size_t offset = 0);