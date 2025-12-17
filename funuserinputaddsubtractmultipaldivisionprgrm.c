#include<stdio.h>

int addition()
{
    int first_number=0;
    int second_number=0;
    int sum=0;
    printf("\nplease enter first_number: ");
    scanf("%d",&first_number);
    printf("please enter second_number: ");
    scanf("%d",&second_number);
    sum = first_number + second_number;
    printf("\nAddtion: %d",sum);
}
int subtract()
{
    int first_number=0;
    int second_number=0;
    int subtract=0;
    printf("\nplease enter first_number: ");
    scanf("%d",&first_number);
    printf("\nplease enter second_number: ");
    scanf("%d",&second_number);
    subtract=first_number-second_number;
    printf("\nSubtract: %d",subtract);
}
int multiplication()
{
    int first_number=0;
    int second_number=0;
    int multiply=0;
    printf("\nplease enter first_number: ");
    scanf("%d",&first_number);
    printf("\nplease enter second_number: ");
    scanf("%d",&second_number);
    multiply=first_number*second_number;
    printf("\nMultiply: %d",multiply);
}
int divsion()
{
    int first_number=0;
    int second_number=0;
    int divide=0;
    printf("\nplease enter first_number: ");
    scanf("%d",&first_number);
    printf("\nplease enter second_number: ");
    scanf("%d",&second_number);
    divide=first_number/second_number;
    printf("\nDivision: %d",divide);
}
int main()
{
    int num;
    printf("\n1.addtion");
    printf("\n2.subtract");
    printf("\n3.multipal");
    printf("\n4.division");
    printf("\nplease select any option: ");
    scanf("%d",&num);
    if(num==1)
    {
      addition();
    }
    else if(num==2)
    {
       subtract();
    }
    else if(num==3)
    {
        multiplication();
    }
    else if(num==4)
    {
      divsion();
    }
    else
    {
        printf("Wrong Input");
    }
    
   return 0;
}