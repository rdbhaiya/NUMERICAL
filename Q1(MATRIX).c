//MATRIX MULTIPLICATION,ADDITION,SUBSTRACTION,TRANSPOSE
#include<stdio.h>
#define size 100
int arr1[size][size],arr2[size][size],mul[size][size],r1,c1,r2,c2;
void addition();
void substract();
void transpose();
void multiply();
int main()
{
printf("ENTER THE ROW OF THE FIRST MATRIX:");
scanf("%d",&r1);
printf("ENTER THE COLOUMN OF THE FIRST MATRIX:");
scanf("%d",&c1);
printf("ENTER THE VALUE OF MATRIX FIRST\n");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
printf("ENTER THE VALUE OF %d%d:",i+1,j+1);
scanf("%d",&arr1[i][j]);
}
}
printf("ENTER THE ROW OF THE SECOND MATRIX:");
scanf("%d",&r2);
printf("ENTER THE COLOUMN OF THE SECOND MATRIX:");
scanf("%d",&c2);
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
{
printf("ENTER THE VALUE OF %d%d:",i+1,j+1);
scanf("%d",&arr2[i][j]);
}
}
int choice;
while(1){
printf("\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.TRANSPOSE\n5.EXIT");
printf("\nENTER YOUR CHOICE:");
scanf("%d",&choice);
if(choice==1)
{
if(r1==r2 && c1==c2){
addition(r1,c1);
}
else{
printf("THE MATRIX DONT HAVE SAME DIMENSIONS");
}
}
if(choice==2){
if(r1==r2 && c1==c2){
substract(r1,c1);
}
else{
printf("THE MATRIX DONT HAVE SAME DIMENSIONS");
}
}
if(choice==3){
multiply(r1,c1,r2,c2);
}
if(choice==4){
transpose(r1,c1);
}
if(choice==5){
break;
}
}
}
void addition(int r1,int c1){
printf("ADDITION OF THE MATRIX IS:\n");
printf("================================================\n");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
printf("%d ",arr1[i][j]+arr2[i][j]);
}
printf("\n");
}
printf("================================================\n");
}
void substract(int r1,int c1){
printf("SUBSTRACTION OF THE MATRIX IS:\n");
printf("================================================\n");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
printf("%d ",arr1[i][j]-arr2[i][j]);
}
printf("\n");
}
printf("================================================\n");
}
void transpose(int r1,int c1){
printf("TRANSPOSE OF THE MATRIX IS:\n");
printf("================================================\n");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
printf("%d ",arr1[j][i]);
}
printf("\n");
}
printf("================================================\n");
}
void multiply(int r1,int c1,int r2,int c2){
printf("MULTIPLICATION OF THE MATRIX IS:\n");
printf("================================================\n");
for (int i = 0; i < r1; ++i) {
for (int j = 0; j < c2; ++j) {
for (int k = 0; k < c1; ++k) {
mul[i][j]+= arr1[i][k]*arr2[k][j];
}
}
}
for (int i = 0; i < r1; ++i) {
for (int j = 0; j < c1; ++j) {
printf("%d ", mul[i][j]);
if (j == r1 - 1)
printf("\n");
}
}
printf("================================================\n");
}