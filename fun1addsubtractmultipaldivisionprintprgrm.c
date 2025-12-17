#include<stdio.h>
int addition()
{
    int first_number=20;
    int second_number=40;
    printf("\n%d",first_number+second_number);
}
int subtract()
{
    int first_number=20;
    int second_number=10;
    printf("\n%d",first_number-second_number);
}
int multipal()
{
    int first_number=5;
    int second_number=4;
    printf("\n%d",first_number*second_number);
}
int division()
{
    int first_number=8;
    int second_number=5;
    printf("\n%d",first_number/second_number);
}
int main()
{
    addition();
    subtract();
    multipal();
    division();
  return 0;
}
