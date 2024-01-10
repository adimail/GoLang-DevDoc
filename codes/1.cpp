#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int p)
{
    int tc = pow(2, p) - 2;
    if (tc % p == 0)
    {
        cout << p << "is Prime ";
    }
    else
    {
        cout << p << "is Not Prime";
    }
    return 0;
}

int main()
{
    int p;
    cin >> p;
    isPrime(p);
    return 0;
} 
