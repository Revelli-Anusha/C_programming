/*******************
 * In boxing the weight class of a boxer is decided as per the following
table. Write a program that receives weight as input and prints out
the boxer’s weight class.

-----------------------------------------------
| Boxer Class           | Weight in Pounds    |
-----------------------------------------------  
|Flyweight              | < 115               |
|Bantamweight           | 115 - 121           |
|Featherweight          | 122 - 153           |
|Middleweight           | 154 – 189           |
|Heavyweight            | >= 190              |
-----------------------------------------------
**********************/

#include<stdio.h>
int main(){
    int box_wgt;
    printf("Enter the weight of the box:");
    scanf("%d",&box_wgt);
    if(box_wgt<115)
        printf("Flyweight");
    else if(box_wgt>115 && box_wgt<=121)
        printf("Bantamweight");
    else if(box_wgt>=122 && box_wgt<=153)
        printf("Featherweight");
    else if(box_wgt>154 && box_wgt<=189)
        printf("Middleweight");
    else if(box_wgt>=190)
        printf("Heavyweight");
    return 0;
}