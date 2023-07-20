#include<stdio.h>
#include<math.h>
#define size 100
/*
//TRAPIZOIDAL RULE FOR A TABLE
int main(){
    int n;
    printf("ENTER THE VAUE OF NUMBERS:");
    scanf("%d",&n);
    float sum=0,inter,x[100],y[100],h;
    printf("ENTER THE VALUES:\n");
    printf("X\tY\n");
    for(int i=0;i<n;i++){
        scanf("%f\t%f",&x[i],&y[i]);
    }
    h=(x[1]-x[0])/2;
    for(int i=1;i<n-1;i++){
        sum+=y[i];
    }
    inter=h*((y[0]+y[n-1])+2*(sum));
    printf("TRAPEZOIDAL VALUE IS: %f",inter);
}
*/
//TRAPIZOIDAL RULE FOR AN EQUATION
#define f(x) sin(x)   //WRITE YOUR EQUATION HERE
int main(){
    float n,h,y[size],z,sum=0,inter,a,b,sum_element,sum_first_last;
    printf("ENTER THE VALUE OF N:");
    scanf("%f",&n);
    printf("ENTER THE VALUE OF A AND B:");
    scanf("%f\t%f",&a,&b);
    h=(b-a)/n;
    z=a;
    printf("X\tF(X)\tY\n");
    for(int i=0;i<=n;i++){
        y[i]=f(z);
        printf("%f\t%f\t%d\n",z,y[i],i);
        z+=h;
    }
    for(int i=1;i<n;i++){
        sum+=y[i];
    }
    sum_element=2*(sum);
    sum_first_last=(y[0]+y[(int)n]);
    printf("SUM OF FIRST AND LAST: %f\n",sum_first_last);
    printf("SUM OF ELEMENTS: %f\n",sum_element);
    inter=(h/2)*(sum_first_last+sum_element);
    printf("TRAPEZOIDAL VALUE IS: %f",inter);
}
/*
//SIMPSON 1/3 RULE
#define f(x) cos(x)   //WRITE YOUR EQUATION HERE
int main(){
    float n,h,y[size],z,sum=0,inter,a,b,sum1=0,sum_odd_even,sum_first_second;
    printf("ENTER THE VALUE OF N:");
    scanf("%f",&n);
    printf("ENTER THE VALUE OF A AND B:");
    scanf("%f\t%f",&a,&b);
    h=(b-a)/n;
    printf("X\tF(X)\tY\n");
    z=a;
    for(int i=0;i<=n;i++){
        y[i]=f(z);
        printf("%f\t%f\t%d\n",z,y[i],i);
        z+=h;
    }
    for(int i=1;i<n;i++){
        if(i%2==0){
            sum+=y[i];
        }
        else{
            sum1+=y[i];
        }
    }
    sum_odd_even=4*(sum1)+2*(sum);
    sum_first_second=(y[0]+y[(int)n]);
    printf("SUM OF FIRST AND SECOND: %f\n",sum_first_second);
    printf("SUM OF ODD AND EVEN: %f\n",sum_odd_even);
    inter=(h/3)*(sum_first_second+sum_odd_even);
    printf("SIMPSON 1/3 VALUE IS: %f",inter);
}
*/