//LANGRANGE INTERPOLATION
#include<stdio.h>
int main(){
    float x[10],y[10],v,val=0,a;
    int n;
    printf("ENTER THE NUMBER OF VALUES:");
    scanf("%d",&n);
    printf("ENTER THE VALUES OF X AND Y\n");
    printf("X\tY\n");
    for(int i=0;i<n;i++){
    scanf("%f%f",&x[i],&y[i]);
    }
    printf("ENTER THE VALUE WHERE THE FUNCTION IS TO BE DETERMINED:");
    scanf("%f",&a);
    for(int i=0;i<n;i++){
        v=y[i];
        for(int j=0;j<n;j++){
            if(j!=i)
            v=v*(a-x[j])/(x[i]-x[j]);
        }
    val=val+v;
    }
    printf("RESULT IS:%f",val);
}