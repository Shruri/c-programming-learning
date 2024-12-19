//Write a program to print Full Pyramid of Numbers
//        1
//      2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5
#include <stdio.h> 

int main(){ 
    int rows, i, j, space, num;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    space = rows - 1;

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= space; ++j) {
            printf(" ");
        }
        space--;

        num = i;
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("%d ", num);
            if (j < i) {
                num++;
            } else {
                num--;
            }
        }
        printf("\n");
    }

    return 0;
}