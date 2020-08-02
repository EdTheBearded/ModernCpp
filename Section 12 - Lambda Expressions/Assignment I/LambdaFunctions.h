#include <vector>

//T Max(T, T); //Return largest element
auto LMax = [](auto x, auto y)
{
    if (x > y)
    {
        return x;
    }
    return y;
    
};

//bool Greater(T, T) ; //Return true if first argument is greater than the second
auto LGreater = [](auto x, auto y)
{
    return (x > y);
};

//bool Less(T, T) ; //Return true if first argument is less than the second
auto LLess = [](auto x, auto y)
{
    return (x < y);
};

//std::pair<T,T> MinMax(ItrBegin, ItrEnd) ;//Accept iterators of any container and return the largest and smallest element from that container.
auto LMinMax = [](auto ItrBegin, auto ItrEnd)
{
    typename decltype(ItrBegin)::value_type Min{ *ItrBegin }, Max{ *ItrBegin };

    for (auto i = ItrBegin; i < ItrEnd; i++)
    {
        if(Min > *i)
        {
            Min = *i;
        }
        if (Max < *i)
        {
            Max = *i;
        }
    }
    
    return std::make_pair(Min, Max);
};