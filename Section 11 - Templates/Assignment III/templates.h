#pragma once

#include <utility>

template<typename T>
T Add(const T x, const T y)
{
    return x + y;
}

template<typename T, int size>
T ArraySum(const T (&pArr)[size], const int &arrSize)
{
    T sum{ 0 };

    for (int i = 0; i < arrSize; ++i)
    {
        sum += pArr[i];
    }
    
    return sum;
}

template<typename T, int size>
T Max(const T (&pArr)[size], const int &arrSize)
{
    if(arrSize == 0) return T();
    T max{ pArr[0] };

    for (int i = 0; i < arrSize; ++i)
    {
        if (max < pArr[i])
        {
            max = pArr[i];
        }
    }

    return max;
}

template<typename T, int size>
std::pair<T,T> MinMax(const T (&pArr)[size], const int &arrSize)
{
    if(arrSize == 0) return std::pair<T,T>();
    T min{ pArr[0] };
    T max{ pArr[0] };

    for (int i = 0; i < arrSize; ++i)
    {
        if (max < pArr[i])
        {
            max = pArr[i];
        }
        if (min > pArr[i])
        {
            min = pArr[i];
        }
    }

    return std::pair<T,T>(min, max);
}