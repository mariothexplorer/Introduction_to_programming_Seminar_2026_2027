#include <iostream>

int main()
{
    unsigned a;
    std::cin >> a;
    bool isPrime;

    if (a > 1)
    {
        isPrime = true; 
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                isPrime = false;
                break; 
            }
        }
    }
    else
    {
        isPrime = false;
    }

    std::cout<<std::boolalpha<<isPrime;
}
