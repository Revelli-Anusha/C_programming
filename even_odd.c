/*************
 * Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.
*****************/


#include <stdio.h>
int main() {
    int num;
    printf("Enter an number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even", num);
    else
        printf("%d is odd", num);
    return 0;
}