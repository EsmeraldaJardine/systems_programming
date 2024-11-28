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

void print_sentence(char phrase[], struct vowel_count *vowels) {
    int l = strlen(phrase);

    for (int i = 0; i < l; i++) {
        count_vowels(phrase[i], vowels);

        if (i > 0 && phrase[i] == phrase[i - 1]) {
            break;
        }

        printf("%c", phrase[i]);

        if (phrase[i] == '.') {
            printf("\n");
        }
    }
}

int main() {
    char phrase[] = "hello. it's me.";
    struct vowel_count vowels = {0, 0, 0, 0, 0};
    print_sentence(phrase, &vowels); // Function is called here
    int count = strlen(phrase);
    printf("\nCharacter count: %d\n", count); // The return value is printed
    printf("Vowel counts: a=%d, e=%d, i=%d, o=%d, u=%d\n", vowels.a, vowels.e, vowels.i, vowels.o, vowels.u);

    return 0;
}

/*
issues: this was super hard for some reason. Maybe because of my limited knowledge of C...

*/