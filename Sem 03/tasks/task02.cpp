#include <iostream>

int main()
{
    unsigned a;
    std::cin>>a;

    unsigned b;
    std::cin>>b;

    while(b!=0)
    {
        unsigned temp = b;
        b = a%b;
        a = temp;
    }
    std::cout<<a;

}
