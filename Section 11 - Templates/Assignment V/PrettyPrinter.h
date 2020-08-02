#include <stdio.h>

template<typename T>
class PrettyPrinter
{
    T *m_pData;

public:
    PrettyPrinter(T *data);

    void Print();

    T* GetData();
};

template<typename T>
PrettyPrinter<T>::PrettyPrinter(T *data) : m_pData(data){}

template<typename T>
void PrettyPrinter<T>::Print()
{
    std::cout << "{" << *m_pData << "}" << std::endl;
}

template<typename T>
T* PrettyPrinter<T>::GetData()
{
    return m_pData;
}