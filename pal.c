#include<stdio.h>
#include<conio.h>
void main()
{
int rev=0,n,ram;
printf("enter the number");
scanf("%d",&n);
pal=n;
while(n>0)
{
ram=n%10;
rev=rev*10+ram;
n=n/10;
}
if(rev==pal)
{
printf("palindrome");
}
else
printf("not palindrome");
}
