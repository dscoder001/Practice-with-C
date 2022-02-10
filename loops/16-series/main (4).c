//S = a+1/1 + a+2/2 + a+3/3....

#include<stdio.h>
#include<stdlib.h>

int main(){
int i,a, n;
float s=0;
printf("Enter a numebr:");
scanf("%d", &n);
printf("Enter a numebr:");
scanf("%d", &a);
for(i=1;i<=n;i=i+1){

    s=s+(float)a+1/i;}
 printf("%f", s);

 return 0;
}
