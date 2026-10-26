#include <iostream>

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false; 
        }
    }
    return true; 
}

int getDigitsSum(unsigned num)
{
    unsigned hundreds = num / 100;     
    unsigned tens = (num / 10) % 10;    
    unsigned ones = num % 10;            
    
    return hundreds + tens + ones;
}

int main() {
    int n;
    std::cin >> n;
    for (unsigned i = 100; i <= n; i++)
    {
        if (getDigitsSum(i) < 10 && isPrime(i))
        {
            std::cout << i << " ";
        }
    }
}
