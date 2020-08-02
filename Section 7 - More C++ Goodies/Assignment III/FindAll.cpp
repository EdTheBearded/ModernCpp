    #include <iostream>
    #include "FindAll.h"
    #include "Case.h"

    std::vector<int> FindAll(const std::string &source, const std::string &search_string, Case searchCase, size_t offset) 
    {   
        std::vector<int> FoundPositions{};
        int Index{};
        int SearchOffset{ static_cast<int>(offset) };

        std::cout << "Case: " << (searchCase == Case::INSENSITIVE ? "Insensitive" : "Sensitive") << std::endl;
        std::cout << ">> " << search_string << std::endl;
        for (int i = 0; i < offset; i++)
        {
            std::cout << " ";
        }
        std::cout << "!" << std::endl;
        

        if (searchCase == Case::SENSITIVE)
        {
            while((Index = source.find(search_string, SearchOffset)) != std::string::npos)
            {
                FoundPositions.push_back(Index);
                SearchOffset = Index + 1;
            }
        }
        else
        {
            std::string LowerCaseSource{ ToLower(source) };
            while((Index = LowerCaseSource.find(search_string, SearchOffset)) != std::string::npos)
            {
                FoundPositions.push_back(Index);
                SearchOffset = Index + 1;
            }
        }

        std::cout << source << std::endl;
        if (FoundPositions.size() == 0)
        {
            std::cout << "No Substring!" << std::endl;
            return FoundPositions;
        }
        
        for (int i = 0, j = 0; j < FoundPositions.size(); i++)
        {
            if (i == FoundPositions[j])
            {
                std::cout << "^";
                j++;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl << std::endl;

        return FoundPositions;
    }