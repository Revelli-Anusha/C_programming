/*****************
 * Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees.
******************/
#include<stdio.h>
int main(){
    int a,b,c,sum=0;
    printf("Enter 3 angles of traingle:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
        printf("IT IS AN TRIANGLE");
    else
        printf("IT IS NOT A TRIANGLE");
    return 0;
}
