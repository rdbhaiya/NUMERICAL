//BISECTION METHOD
#include<stdio.h>
#include<math.h>
#define g(x) (x*x*x)-4*x-9
int i;
int main(){
float f,a,b,x,root,e;
printf("ENTER THE APPROXIMATE VALUE OF A:");
scanf("%f",&a);
printf("ENTER THE APPROXIMATE VALUE OF B:");
scanf("%f",&b);
printf("VALUE OF A IS:%f\n",a);
printf("VALUE OF B IS:%f\n",b);
printf("ENTER THE TOLERABLE ERROR:");
scanf("%f",&e);
printf("i\ta\tb\tx\tf(x)\n");
do{
    i++;
    x=(a+b)/2;
    f=g(x);
    printf("%d %f %f %f %f\n",i,a,b,x,f);
    if(f>0){
        b=x;
    }
    else{
        a=x;
    }
}while(fabs(f)>e);
printf("\nROOT IS: %f",a);
}