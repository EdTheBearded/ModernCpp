#include <iostream>
#include <vector>
#include "PrettyPrinter.h"

template<>
void PrettyPrinter<std::vector<int>>::Print()
{
    std::cout << "{";
    for (int i = 0; i < (*m_pData).size() - 1; i++)
    {
        std::cout << (*m_pData)[i] << ", ";
    }
    std::cout << (*m_pData)[(*m_pData).size() - 1];
    std::cout << "}" << std::endl;
}

template<>
void PrettyPrinter<std::vector<std::vector<int>>>::Print()
{
    // Print all elements but last, in order to put ',' separator
    std::cout << "{";
    for (int i = 0; i < (*m_pData).size() - 1; i++)
    {
        std::cout << "\n    {";
        for (int j = 0; j < (*m_pData)[i].size() - 1; j++)
        {
            std::cout << (*m_pData)[i][j] << ", ";
            
        }
        std::cout << (*m_pData)[i][(*m_pData)[i].size() - 1];
        std::cout << "},";    
    }

    // Print last
    std::cout << "\n    {";
    size_t last{ (*m_pData).size() - 1 };
    for (int j = 0; j < (*m_pData)[last].size() - 1; j++)
    {
        std::cout << (*m_pData)[last][j] << ", ";
        
    }
    std::cout << (*m_pData)[last][(*m_pData)[last].size() - 1];
    std::cout << "}" << std::endl << "}" << std::endl;    
}

int main()
{

    std::vector<int> pVec{ 1, 2, 3, 4, 5 };
    PrettyPrinter<std::vector<int>> ppVec(&pVec);

    ppVec.Print();

    std::vector<std::vector<int>> pVVec
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    PrettyPrinter<std::vector<std::vector<int>>> ppVVec (&pVVec);

    ppVVec.Print();

    return 0;
}