/*******************
 * The Body Mass Index (BMI) is defined as ratio of the weight of a
person (in kilograms) to the square of the height (in meters). Write
a program that receives weight and height, calculates the BMI, and
reports the BMI category as per the following table:
        
    -----------------------------------
    | BMI Category    | BMI           |
    -----------------------------------
    |Starvation       | < 15          |
    |Anorexic         | 15.1 to 17.5  |
    |Underweight      | 17.6 to 18.5  |
    |Ideal            | 18.6 to 24.9  |
    |Overweight       | 25 to 25.9    |
    |Obese            | 30 to 30.9    |
    |Morbidly Obese   | >= 40         |
    -----------------------------------
********************/
#include<stdio.h>
#include<math.h>
int main(){
    float bmi_value,height,weight;
    printf("Enter height(mts) & weigth(kgs):");
    scanf("%f%f",&height,&weight);
    bmi_value=weight/(pow(height,2));
    if (bmi_value<=15.0)
        printf("Starvation");
    else if(bmi_value>=15.1 && bmi_value<=17.5)
        printf("Anorexic");
    else if(bmi_value>=17.6 && bmi_value<=18.5)
        printf("Underweight");
    else if(bmi_value>=18.6 && bmi_value<=24.9)
        printf("Ideal");
    else if(bmi_value>=25.0 && bmi_value<=25.9)
        printf("Overweight");
    else if(bmi_value>=30 && bmi_value<=30.9)
        printf("Obese");
    else if (bmi_value>=40.0)
        printf("Morbidly Obese");
    return 0;
}