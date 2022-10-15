/*
 Author : Viren Joshi
 Language : C++
*/

#include <iostream>

using namespace std;
unsigned long int factorial(unsigned long int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    unsigned long int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n);
    return 0;
}