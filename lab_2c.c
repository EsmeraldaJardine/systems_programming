/*
▶Write aprogram to print prime numbers between 1 and 1,000. A prime number is an integer greater than 1 that
 has no divisors other than 1 or itself.
 ▶You could identify if a number n is prime by checking whether it is divisible by any of the integers between and
 including 2 and n/2.
*/
#include <stdio.h>
#include<stdbool.h>

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    for (int i = 2; i <= 1000; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
