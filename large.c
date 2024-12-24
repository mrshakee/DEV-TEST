//largest of 2 numbers
#include<stdio.H>
#include<math.h>
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    if(a>b)
    {
        printf("A is largest");
    }
    else
    {
        printf("B is the largest");
    }
    return 0;
    
}