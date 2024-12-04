int centuryFromYear(int y) 
{
    return y % 100 == 0 ? y / 100 : y / 100 + 1;
}

#include<cmath>
float centuryFromYear(float year) 
{
    return std::ceil(year / 100) ;
}
