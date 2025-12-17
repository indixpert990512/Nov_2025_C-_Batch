#include<stdio.h>

int multipal()
{
    int first_number=10;
    int second_number=20;
    printf("\n%d",first_number*second_number);
}
int divsion()
{
    int first_number=5;
    int second_number=2;
    printf("\n%d",first_number/second_number);
}
int main()
{
    int num;
    printf("\n1.multipal");
    printf("\n2.division");
    printf("\nplease select any option: ");
    scanf("%d",&num);
    if(num==1)
    {
      multipal();
    }
    else if(num==2)
    {
      divsion();
    }
    
    return 0;
}