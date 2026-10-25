#include <iostream>

int main()
{
    unsigned a;
    std::cin >> a;
    bool powered = false;
    if (a > 0) 
    {
        while (a % 2 == 0) 
        {
            a = a / 2;
        }
        if (a == 1) 
        {
            powered = true;
        }
    }

    std::cout << std::boolalpha << powered;
}
