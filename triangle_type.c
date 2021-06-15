/*********************
 * If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle.

HINT: 
    let the sides of the triangle be AB BC CA
    right angle: ac^ = ab^+bc^ 
    isoceles: any two sides must be equal
    scalene:  none of the side is equal to other side
*********************/
#include<stdio.h>
#include<math.h>
int main(){
    int ab,bc,ca;
    printf("Enter the value of sides AB, BC, CA :");
    scanf("%d%d%d",&ab,&bc,&ca);
    if (pow(ca,2)==(pow(ab,2)+pow(bc,2)))
        printf("Right angled Triangle");
    else if(ab==bc || bc==ca || ca==ab)
        printf("Isosceles Triangle");
    else if(ab!=bc && bc!=ca && ca!=ab)
        printf("Scalene Triangle");
    return 0;
}