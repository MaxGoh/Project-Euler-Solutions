/* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99. */

/* Find the largest palindrome made from the product of two 3-digit numbers. */


#include <string> 
#include <iostream>
#include <math.h>
using namespace std;


bool is_palindrome(int number)
{
    int n, digit, rev = 0;
    n = number;
    do
    {
        digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    } while (n != 0);

    if (number == rev) 
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main() 
{
    // largest multiple of three digit is 999 x 999
    int palindrome = 0, product = 0;
    for(int x=999; x>100; x--) 
    {
        for (int y=999; y>100; y--) 
        {
            if(is_palindrome(x*y) == true) 
            {
                product = x * y;
                if(product > palindrome)
                {
                    palindrome = product;
                }
            }
        }
    }
    cout << palindrome << endl;
    return 0;
}
