
#include<stdio.h>
int main()
{
int n=525,r,sum=0,temp;
temp=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
printf("Checking number 525");
if(temp==sum)
printf("yup...it is palindrome number ");
else
printf("opps...it's not palindrome");
return 0;
 }
