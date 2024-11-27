# include <stdio.h>
# define DAYS_MULTIPLIER 365.2425
/*
Write a program that uses printf() to print your first and last names on one line, followed by your favourite
 past time activity on the following line.
 Modify the program to also convert your age in years to days and displays both values. You do not need to
 worry about fractional and leap years. For example, if your age is 20 years, the program should print “20 years =
 7300 days

(part B)
Modify the program such that the calculation of the number of days depends on a constant defined
 using the #define directive. Set this constant first to the value of 365 and then to 365.2425. Make appropriate
 changes to your calculation and/or printing logic
*/
int main(){
        printf("Esmeralda Jardine\n sleeping is my favorite activity\n");
        char name[] = "Esmeralda Jardine \n";
        char activity[] = "sleeping";
        int age = 24;
	int age_days = age * DAYS_MULTIPLIER; 
printf("%s %s is my favorite activity\n ", name, activity);
printf("%d is my age in years and %d is my age in days \n", age, age_days);
/*
Write aprogram to print prime numbers between 1 and 1,000. A prime number is an integer greater than 1 that
 has no divisors other than 1 or itself.
 You could identify if a number n is prime by checking whether it is divisible by any of the integers between and
 including 2 and n/2.
*/


return 0;
}

