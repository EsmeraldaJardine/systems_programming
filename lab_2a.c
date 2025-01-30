#include <stdio.h>
#include <limits.h>
#include <float.h>
/*
 ▶Write a program that declares a separate variable for each of the following data types: char, int, short, long,
 long int, long long, unsigned char, unsigned int, unsigned short, unsigned long, unsigned
 long long, float, double, and long double. For this you will need to make use of the sizeof() and
 printf() functions.
 ▶Modify your code to print the size of each variable.
 ▶Compile and run your program. Notice the printed values and think about how this affects the overhead of a
 program.
 ▶Now look at limits.h and float.h, and notice the value range that each data type affords
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
    printf("Size of char: %ld bytes\n", sizeof(c));
    printf("Size of int: %ld bytes\n", sizeof(i));
    printf("Size of short: %ld bytes\n", sizeof(s));
    printf("Size of long: %ld bytes\n", sizeof(l));
    printf("Size of long long: %ld bytes\n", sizeof(ll));
    printf("Size of unsigned char: %ld bytes\n", sizeof(uc));
    printf("Size of unsigned int: %ld bytes\n", sizeof(ui));
    printf("Size of unsigned short: %ld bytes\n", sizeof(us));
    printf("Size of unsigned long: %ld bytes\n", sizeof(ul));
    printf("Size of unsigned long long: %ld bytes\n", sizeof(ull));
    printf("Size of float: %ld bytes\n", sizeof(f));
    printf("Size of double: %ld bytes\n", sizeof(d));
    printf("Size of long double: %ld bytes\n", sizeof(ld));
    
//Now look at limits.h and float.h, and notice the value range that each data type affords.

    printf("\nValue Ranges:\n");
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned char: 0 to %u\n", UCHAR_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("unsigned short: 0 to %u\n", USHRT_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);
    printf("unsigned long long: 0 to %llu\n", ULLONG_MAX);
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
};
