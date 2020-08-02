    #include <iostream>
    #include "Find.h"
    #include "../Assignment I/Case.h"

    size_t Find(const std::string &source, const std::string &search_string, Case searchCase, size_t offset) 
    {   
        int index{};

        std::cout << "Case: " << (searchCase == Case::INSENSITIVE ? "Insensitive" : "Sensitive") << std::endl;
        std::cout << ">> " << search_string << ", offset: " << offset << std::endl;
        for (int i = 0; i < offset; i++)
        {
            std::cout << " ";
        }
        std::cout << "!" << std::endl;

        if (searchCase == Case::SENSITIVE)
        {
            index = source.find(search_string, offset);
            
            std::cout << source << std::endl;
            for (int i = 0; i < index; i++)
            {
                std::cout << " ";
            }
            std::cout << "^" << std::endl << std::endl;
            
            return index;
        }
        else
        {
            std::string LowerCaseSource{ ToLower(source) };
            index =  LowerCaseSource.find(search_string, offset);
            
            std::cout << source << std::endl;
            for (int i = 0; i < index; i++)
            {
                std::cout << " ";
            }
            std::cout << "^" << std::endl << std::endl;
            
            return index;
        }
    }