//Write a program to calculate the sum of first 10 numbers
#include <stdio.h> 

int main(){ 
    int i, sum = 0;
    for(i=0; i<=10; i++){
        sum += i;
    }
    printf("Sum of first 10 natural numbers: %d", sum);

    return 0;
}