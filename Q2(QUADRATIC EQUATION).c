// FIND OUT THE VALUE OF A QUADRATIC EQUATION USING SRIDHARACHARYA FORMULA.
#include <stdio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("ENTER THE VALUE OF a:");
scanf("%d",&a);
printf("ENTER THE VALUE OF b:");
scanf("%d",&b);
printf("ENTER THE VALUE OF c:");
scanf("%d",&c);
int e=pow(b,2)-(4*a*c);
int d=sqrt(e);
if(e<0)
{
printf("IT IS A COMPLEX ROOT:%d\n",e);
}
else{
int x=(-b+d)/2*a;
int x1=(-b-d)/2*a;
printf("THE VALUE IS:%d\n",x);
printf("THE VALUE IS:%d",x1);
}
}
