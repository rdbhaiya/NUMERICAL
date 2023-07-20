#include<stdio.h>
#include<math.h>
#define e 0.0001
#define f(x) (x*x*x)-x-1
#define f2(x) 3*(x*x)-1
int main()
{
 float z,y,a,b,x,X[100],root;
 int i=0;
 printf("ENTER THE APPROXIMATE VALUE OF A:");
scanf("%f",&a);
printf("ENTER THE APPROXIMATE VALUE OF B:");
scanf("%f",&b);
printf("VALUE OF A IS:%f\n",a);
printf("VALUE OF B IS:%f\n",b);
 x=(a+b)/2;
 X[0]=x;
 z=f(x);
 y=f2(x);
 do
 {
  i++;
  X[i]=X[i-1]-z/y;
  z=f(X[i]);
  y=f2(X[i]);
  printf("%f\n",X[i]);
  if(X[i-1]==X[i])
  {
   root=X[i];
   break;
  }
 }while(fabs(root)<e);
 printf("\nVALUE OF THE ROOT IS: %f",root);
}