/**********
 * Write a program to receive values of latitude (L1, L2) and longitude
    (G1, G2), in degrees, of two places on the earth and output the
    distance (D) between them in nautical miles. The formula for
    distance in nautical miles is:
    D = 3963 cos-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )
*    
    conversion deg to radian   1rad = 1deg*pi/180
    cos-1 == acos
    a=70
    cos-1(a) == acos(a)
*********************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float l1,l2,g1,g2;
    double D;
    printf("Enter L1, L2 and G1, G2:");
    scanf("%f",&l1);
    fflush(stdin);
    scanf("%f",&l2);
    fflush(stdin);
    scanf("%f",&g1);
    fflush(stdin);
    scanf("%f",&g2);
    fflush(stdin);
    l1 = l1*(3.14/180);
    l2 = l2*(3.14/180);
    g1 = g1*(3.14/180);
    g2 = g2*(3.14/180);
    D = 3963*(acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2)*cos(g2-g1))));
    printf("%lf",D);
    return 0;
}