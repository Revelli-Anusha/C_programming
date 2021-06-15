/***************
 * A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not
*******************/


#include <stdio.h>
int main() {
    int n=1, rev = 0, rem=0,a;
    printf("Enter a num: ");
    scanf("%d", &n);
    a=n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    if(a==rev){
        printf("num==rev");
    }else{
        printf("rev of a num != num");
    }
    return 0;
}