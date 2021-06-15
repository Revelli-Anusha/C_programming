/************
 * Given a point (x, y), 
 * write a program to find out if it lies on the Xaxis,
 * Y-axis or on the origin.
**************/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a & b:");
    scanf("%d %d",&a,&b);
    if(a==0 && b==0)
        printf("a and b are (0,0)");
    else if(a==0)
        printf("the pnts lies on the y-axis");
    else if(b==0)
        printf("the pnts lies on the x-axis");
    return 0;
}