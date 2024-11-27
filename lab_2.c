#include <stdio.h>
#include <limits.h>
#include <float.h>
/*
Write a program that uses printf() to print your first and last names on one line, followed by your favourite
 past time activity on the following line.
 Modify the program to also convert your age in years to days and displays both values. You do not need to
 worry about fractional and leap years. For example, if your age is 20 years, the program should print “20 years =
 7300 days
*/
int main(){
        char c;
        int i;
        short s;
        long l;
        long long ll;
        unsigned char uc;
        unsigned int ui;
        unsigned short us;
        unsigned long ul;
        unsigned long long ull;
        float f;
        double d;
        long double ld;
    printf("Size of char: %lu bytes\n", sizeof(c));
    printf("Size of int: %lu bytes\n", sizeof(i));
    printf("Size of short: %lu bytes\n", sizeof(s));
    printf("Size of long: %lu bytes\n", sizeof(l));
    printf("Size of long long: %lu bytes\n", sizeof(ll));
    printf("Size of unsigned char: %lu bytes\n", sizeof(uc));
    printf("Size of unsigned int: %lu bytes\n", sizeof(ui));
    printf("Size of unsigned short: %lu bytes\n", sizeof(us));
    printf("Size of unsigned long: %lu bytes\n", sizeof(ul));
    printf("Size of unsigned long long: %lu bytes\n", sizeof(ull));
    printf("Size of float: %lu bytes\n", sizeof(f));
    printf("Size of double: %lu bytes\n", sizeof(d));
    printf("Size of long double: %lu bytes\n", sizeof(ld));
//Nowlookatlimits.h and float.h, and notice the value range that each data type affords.

    // Printing max values of data types
    printf("\nMax values:\n");
    printf("Max char: %d\n", CHAR_MAX);
    printf("Max int: %d\n", INT_MAX);
    printf("Max short: %d\n", SHRT_MAX);
    printf("Max long: %ld\n", LONG_MAX);
    printf("Max long long: %lld\n", LLONG_MAX);
    printf("Max unsigned char: %u\n", UCHAR_MAX);
    printf("Max unsigned int: %u\n", UINT_MAX);
    printf("Max unsigned short: %u\n", USHRT_MAX);
    printf("Max unsigned long: %lu\n", ULONG_MAX);
    printf("Max unsigned long long: %llu\n", ULLONG_MAX);
    printf("Max float: %e\n", FLT_MAX);
    printf("Max double: %e\n", DBL_MAX);
    printf("Max long double: %Le\n", LDBL_MAX);
};
