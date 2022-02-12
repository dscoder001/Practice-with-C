//S = x^1/2! + x^2/3! + x^3/4!.......

#include<stdio.h>
#include<stdlib.h>

int main(){
int i,x,j, n;
float s=0;
printf("Enter a numebr of terms:");
scanf("%d", &n);
printf("Enter numebr x:");
scanf("%d", &x);
for(i=1;i<=n;i=i+1){
    int f = 1;
for(j=2;j<=(i+1);j++){
    f=f*j;
}
  s =s + pow(x,1)/f;
 printf("%f\n", s);}

 return 0;
}
