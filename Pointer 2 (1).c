#include<stdio.h>

int main()
{
    int num1 , num2 ;
    int *ptr1 = &num1 , *ptr2 = &num2 ;

    printf("Enter first number please\n");
    scanf("%d" , ptr1);

    printf("\nEnter second number please\n");
    scanf("%d" , ptr2);

    int sum ;
    sum  = *ptr1 + *ptr2 ;
    printf("\nSum of given two numbers = %d\n" , sum);
    return 0 ;
}