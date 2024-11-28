/*
 ▶Write a program that will take a string composed of multiple sentences and print each sentence on a separate
 line. Each sentence ends with a period (‘.‘).
 ▶Add code to also print the character count on the very last line of the output. Spaces and punctuation marks
 should be included in the count.
 ▶Modify your code so it stops when it finds two identical characters in succession; e.g. when if reaches the word
 “array”, it will print “ar” then stop and print the character count till this point excluding the repeated character.
 ▶Add a struct that holds 5 integer values. Use the struct to keep count of each vowel (a,e,i,o,u) that appears in the
 text, and print these counts after the total character count.
*/

#include <stdio.h>
#include <string.h>

void print_sentence(char phrase[]){
    printf("%lu \n", strlen(phrase));
    for (int i = 0; i < strlen(phrase); i++ ){
         printf("%c", phrase[i]);
        if (phrase[i] == '.'){
            printf("\n");
        }
    }
}

int main(){

    char phrase[] = "Hello. It's me.";
    print_sentence(phrase);
}
