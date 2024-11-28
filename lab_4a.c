/*
 ▶Write a function that implements the prototype: void reverse_print(char **p, int n);
 The function should take an array of strings p and a number of words n. It should then print the first n strings in
 reverse order.
*/

#include <stdio.h>

void reverse_print(char **p, int n){
    for (int i = n - 1; i >= 0; i--) {
            printf("%s\n", p[i]);
    }
}

int main(){
    char *strings_array[] = {"hello", "there", "stranger"};
    reverse_print(strings_array, 3);
}
