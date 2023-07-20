//Regula Falsi method.
#include<stdio.h>
#include<math.h>
#define e 0.0001
#define g(x) x*x*x+2*x-2
int main()
{
    float a,b,f,fa,fb,fx,x,root;
    int i,j;
    float ar[50];
    for(i=0;i<20;i++)
    {
        f=g(i);
        if(f<0)
        a=i;
        else if(i==0&&f>0)
        {
            for(j=-1;j>=-10;j--)
            {
                f=g(j);
                if(f<0)
                {
                    a=j;
                    b=i;
                }
                else
                b=j;
            }
        }
        else
        {
            b=i;
            break;
        }
    }
    for(i=0;i<50;i++)
    {
        fa=g(a);
        fb=g(b);
        x=(a*fb-b*fa)/(fb-fa);
        ar[i]=x;
        fx=g(x);
        if(fx<0)
        {
            a=x;
        }
        else
        {
            b=x;
        }
        printf("The root in iteration %d is : %f \n",(i+1),x);
        if((ar[i]-ar[i-1])<e)
        {
            root=x;
            break;
        }
    }
    printf("The required root of the equation is: %f \n", root);
    return 0;
}