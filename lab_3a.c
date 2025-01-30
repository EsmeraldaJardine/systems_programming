/*
 ▶Write a program that creates a 3-dimensional array of 1000 integers; i.e. 10x10x10.
 ▶Add suitable code to traverse the whole array and initialise it with random numbers. For this, use the rand()
 function, which is included in stdlib.h
 ▶Finally, write code that prints the elements of the array to screen. Use any appropriate format.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int data[10][10][10];
    for (int i = 0; i <10; i ++){
        for (int j = 0; j <10; j ++){
            for (int k = 0; k <10; k ++){
                data[i][j][k] = rand();
            }
        }
    }
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            for (int k = 0; k < 10; k++){
                printf("[%d][%d][%d] = %d\n", i, j, k, data[i][j][k]);
            }
        }
    }

    return 0;
}