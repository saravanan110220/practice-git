#include<stdio.h>
int main()
{
    char operator;
    float num1,num2;

    printf("enter the operator");
    scanf("%c",&operator);

    printf("enter the two numbers");
    scanf("%f %f",&num1,&num2);
     
     switch(operator)
     {
        case '+':
        printf("result=%.2f",num1+num2);
        break;
  
        case '-':
        printf("result=%.2f",num1-num2);
        break;
        
        default:
        printf("invalid operator");
        break; 
     }
     return 0;
     
}