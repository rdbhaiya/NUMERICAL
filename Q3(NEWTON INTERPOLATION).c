#include<stdio.h>
#include<conio.h>
/*
//NEWTON FORWARD INTERPOLATION
int main(){
int n;
float x[10],y[10],h,o,u,val,p=1;
printf("ENTER THE NUMBER OF VALUES:");
scanf("%d",&n);
printf("ENTER THE VALUE OF X AND Y\n");
printf("X\tY\n");
for(int i=1;i<=n;i++){
scanf("%f\t%f",&x[i],&y[i]);
}
h=x[2]-x[1];
printf("ENTER THE VALUE OF X WHERE THE FUNCTION IS TO BE DETERMINED:");
scanf("%f",&o);
u=(o-x[1])/h;
val=y[1];
printf("===================================\n");
for(int i=1;i<=n-1;i++){
for(int j=1;j<=n-i;j++){
y[j]=y[j+1]-y[j];
printf("%0.2f\t",y[j]);
}
printf("\n");
p=p*(u-i+1)/i;
val=val+p*y[1];
printf("%f\n",p);
printf("%f\n",val);
}
printf("===================================\n");
printf("THE VALUE OF f(%f)=%f",o,val);
}
*/
// NEWTON BACKWARD INTERPOLATION
int main(){
int n;
float x[10],y[10],h,o,u,val,p=1;
printf("ENTER THE NUMBER OF VALUES:");
scanf("%d",&n);
printf("ENTER THE VALUE OF X AND Y\n");
printf("X\tY\n");
for(int i=1;i<=n;i++){
scanf("%f\t%f",&x[i],&y[i]);
}
h=x[2]-x[1];
printf("ENTER THE VALUE OF X WHERE THE FUNCTION IS TO BE DETERMINED:");
scanf("%f",&o);
u=(o-x[n])/h;
val=y[n];
printf("===================================\n");
for(int i=1;i<=n;i++){
for(int j=n;j>=i+1;j--){
y[j]=y[j]-y[j-1];
printf("%0.2f\t",y[j]);
}
printf("\n");
p=p*(u+i-1)/i;
val=val+p*y[n];
}
printf("===================================\n");
printf("THE VALUE OF f(%f)=%f",o,val);
}

