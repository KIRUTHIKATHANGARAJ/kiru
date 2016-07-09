#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is grater");
else if(b>c)
printf("b is grater");
else 
printf("c is grater");
}
