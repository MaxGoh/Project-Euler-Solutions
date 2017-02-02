/* The prime factors of 13195 are 5, 7, 13 and 29. */
/* What is the largest prime factor of the number 600851475143 ? */


#include <iostream>
#include <math.h>
using namespace std;


bool is_prime(int number) {
    if(number >= 1) {
        for(int x=2; x < number; x++) {
            if(number % x == 0) {
                return false;
            }
        }
    }
    return true; 
}

int main() {
    long number = 600851475143;
    int largest_prime_factor;
    for(long x=1; x<=sqrt(number/2); x=x+2) {
        if(number % x == 0) {
            if(is_prime(x)) {
                largest_prime_factor = x;
            }
        }
    }
    cout << largest_prime_factor << endl;
    return 0;
}
