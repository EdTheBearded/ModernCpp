#pragma once

#include <vector>
#include <utility>
#include <cstring>
#include "templates.h"

template<> const char * Add(const char *x, const char *y)
{
    size_t len{ strlen(x) + strlen(y) + 1 };

    char *Added = new char[len];
    std::strncpy(Added, x, len);
    std::strncpy(Added, y, len);

    return Added;
}

template<> std::vector<int> Add(std::vector<int> x, std::vector<int> y)
{
    std::vector<int> Sum{};
    std::vector<int> Adder{};
    if(x.size() > y.size())
    {
        Sum = x;
        Adder = y;
    }
    else
    {
        Sum = y;
        Adder = x;
    }
    for (int i = 0; i < Adder.size(); i++)
    {
        Sum[i] += Adder[i];
    }
    
    return Sum;
}

template<int size> const char * ArraySum(const char* (&pArr)[size])
{
    size_t len{};

    for (size_t i = 0; i < size; i++)
    {
        len += strlen(pArr[i]);
    }
    ++len;

    char Sum = new char[len];

    std::strncpy(Sum, pArr[0], len);
    for (size_t i = 0; i < size; i++)
    {
        std::strncat(Sum, pArr[i], len);
    }
    
    return Sum;
}

template<int size> const std::vector<int> ArraySum(std::vector<int> (&pArr)[size])
{
    int Idx{};
    std::vector<int> Sum{};

    for (int i = 0; i < size; i++)
    {
        if (Sum.size < pArr[i].size())
        {
            Sum = pArr[i];
            Idx = i;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (i == Idx) continue;
        for (int j = 0; j < pArr[i].size(); j++)
        {
            Sum[j] += pArr[i][j];
        }
    }
    
    return Sum;
}

template<int size> const char * Max(const char *(&pArr)[size])
{
    const char * Max{ pArr[0] };

    for (int i = 1; i < size; i++)
    {
        if(strlen(pArr[i]) > strlen(Max))
        {
            Max = pArr[i];
        }
    }
    
    return Max;
}

template<int size> std::vector<int> Max(std::vector<int> (&pArr)[size])
{
    std::vector<int> Max { pArr[0] };

    for (int i = 1; i < size; i++)
    {
        if (Max.size() < pArr[i].size())
        {
            Max = pArr[i];
        }
        
    }
    
    return Max;
}

template<int size> std::pair<const char *, const char*> MinMax(const char *(&pArr)[size])
{
    std::pair<const char *, const char*> MinMax{ pArr[0], pArr[0] };

    for (int i = 1; i < size; i++)
    {
        if(strlen(pArr[i]) < MinMax.first)
        {
            MinMax.first = pArr[i];
        }
        if(strlen(pArr[i]) > MinMax.second)
        {
            MinMax.second = pArr[i];
        }
    }
    
    return MinMax;
}

template<int size> std::pair<std::vector<int>, std::vector<int>> MinMax(std::vector<int> (&pArr)[size])
{
    std::pair<std::vector<int>, std::vector<int>> MinMax{ pArr[0], pArr[0] };

    for (int i = 1; i < size; i++)
    {
        if(pArr[i].size() < MinMax.first)
        {
            MinMax.first = pArr[i];
        }
        if (pArr[i].size() > MinMax.second)
        {
            MinMax.second = pArr[i];
        }
    }
    
    return MinMax;
}