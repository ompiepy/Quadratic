/************************************************************************************************

filename:         quadratic.c
author:           Khemraj Shrestha
created date:-    2021/06/29 (YYYY/MM/DD)
description:-     This program calculates the roots of the given quadratic equation.
                        
**************************************************************************************************/


#include <stdio.h>          //header file
#include <math.h>           //this header file is used for 'sqrt' function
int main()
{
    int a, b, c;
    float disc, X1, X2;
    start:  // better to make function
    printf("Enter coefficient a: \n");
    scanf("%d", &a);
    printf("Enter coefficient b: \n");
    scanf("%d", &b);
    printf("Enter coefficient c: \n");
    scanf("%d", &c);
    printf("The quadratic equation is %dX^2 + %dX + %d \n", a, b, c);
    disc= ((b*b)-4*a*c);            //finding its discriminant
    if (disc>0)
    {
        X1= (-b + (sqrt(disc)))/2*a;
        X2= (-b - (sqrt(disc)))/2*a;
        printf("Its 1st root is %.3f \n", X1);
        printf("And its 2nd root is %.3f \n", X2);
    }
    else if (disc==0)
    {
        X1 = X2 = (-b/2*a);
        printf("The roots are equal and is %.0f \n", X1);
    }
    else        //for imaginary portion calculation
    {
        printf("It forms the quadratic equation having Imaginary roots. \n");
       float real, img;
       real = (-b)/(2*a);
       img = (sqrt(-1*disc))/(2*a);
       printf("And its 1st root is %.3f + %.3fi \n", real, img);
       printf("Similarly its 2nd root is %.3f - %.3fi \n", real, img);
    }
     printf("Do you want to continue ? \n If yes hit 'y' or 'Y' \n");          
                    // ask user for repeating process 
     char ch;
     scanf (" %c", &ch);
    if (ch=='y' || ch== 'Y')
        goto start;
    return 0;
} 
