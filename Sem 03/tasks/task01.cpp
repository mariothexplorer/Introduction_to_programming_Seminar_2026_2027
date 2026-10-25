#include <iostream>

int main()
{
    unsigned a;
    std::cin >> a;
    while (a>0)
    {
        unsigned current = a%10;
        std::cout<<current;
        a = a / 10;
    }
}
