#include <iostream>

int main()
{
    unsigned a;
    std::cin>>a;

    unsigned b;
    std::cin>>b;

    unsigned x = a;
    unsigned y = b;

    while(b!=0)
    {
        unsigned temp = b;
        b = a%b;
        a = temp;
    }

    unsigned nod = a;
    unsigned nok = (x*y)/nod;

    std::cout<<nok;



}
