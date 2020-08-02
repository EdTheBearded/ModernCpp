#include <vector>

template <typename T>
struct FMax
{
    //T Max(T, T); //Return largest element
    T operator()(T x, T y)
    {
        if (x > y)
        {
            return x;
        }
        return y;
        
    }
};

template <typename T>
struct FGreater
{
    //bool Greater(T, T) ; //Return true if first argument is greater than the second
    bool operator()(T x, T y)
    {
        return (x > y);
    }
};

template <typename T>
struct FLess
{
    //bool Less(T, T) ; //Return true if first argument is less than the second
    bool operator()(T x, T y)
    {
        return (x < y);
    }
};

template <typename T>
struct FMinMax
{
    //std::pair<T,T> MinMax(ItrBegin, ItrEnd) ;//Accept iterators of any container and return the largest and smallest element from that container.
    std::pair<T, T> operator()(typename std::vector<T>::iterator ItrBegin, typename std::vector<T>::iterator ItrEnd)
    {
        std::pair<T, T> Result{ *ItrBegin, *ItrBegin };

        for (auto i = ItrBegin; i < ItrEnd; i++)
        {
            if(Result.first > *i)
            {
                Result.first = *i;
            }
            if (Result.second < *i)
            {
                Result.second = *i;
            }
        }
        
        return Result;
    }
};