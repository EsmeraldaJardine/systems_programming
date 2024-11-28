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

int print_sentence(char phrase[]){
    int l = strlen(phrase);
    for (int i = 0; i < l; i++ ){
        if( phrase[i] == phrase[i-1]){return i;}
        
        printf("%c", phrase[i]);
        
        if (phrase[i] == '.'){printf("\n");}   
    }
    return l;
}


int main(){

    char phrase[] = "Hello. It's me.";
    int count = print_sentence(phrase); // Function is called here
    printf("\n %d \n", count);// The return value is printed
}
