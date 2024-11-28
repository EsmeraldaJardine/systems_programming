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
#include <ctype.h>
 struct vowel_count {
        int a;
        int e;
        int i;
        int o;
        int u;
};

void count_vowels(char character, struct vowel_count *pointer){ 
    switch (tolower(character)){
    case 'a':
        (*pointer).a +=1;
        break;
    case 'e':
        (*pointer).e +=1;
        break;
    case 'i':
        (*pointer).i +=1;
        break;
    case 'o':
        (*pointer).o += 1;
        break;
    case 'u':
        (*pointer).u +=1;
            break;
    
    default:
        break;
    }
}

int print_sentence(char phrase[]){
    int l = strlen(phrase);  
    struct vowel_count test1 = {.a=0,.e=0,.i=0,.o=0,.u=0};
    for (int i = 0; i < l; i++ ){

        if( tolower(phrase[i]) == tolower(phrase[i-1])){
            printf("\na: %d \ne: %d \ni: %d\no: %d\nu: %d \n", test1.a, test1.e, test1.i, test1.o, test1.u);
            return i;
            }
        if (phrase[i] == '.'){
            printf("\n");
            printf("a: %d \ne: %d \ni: %d\no: %d\nu: %d \n", test1.a, test1.e, test1.i, test1.o, test1.u);  
            return i;
            }
        count_vowels(phrase[i], &test1);
        printf("%c", phrase[i]);        
    }   
    return l;
}





int main(){
    char phrase[] = "hello. it's me.";
    int count = print_sentence(phrase); // Function is called here
    printf("\n %d \n", count);// The return value is printed
}
