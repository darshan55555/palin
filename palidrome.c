#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
printf("Please...enter the number=");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum)
printf("yup...palindrome number ");
else
printf("opps...it's not palindrome");
return 0;
 }
