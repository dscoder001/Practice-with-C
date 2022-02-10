//S = x^1/2 + x^2/3 + x^3/4

#include<stdio.h>
#include<stdlib.h>

int main(){
int i,x, n;
float s=0;
printf("Enter a numebr:");
scanf("%d", &n);
printf("Enter a numebr x:");
scanf("%d", &x);
for(i=1;i<=n;i++){

    s=s+(float)pow(x,i)/i+1;}
 printf("%f", s);

 return 0;
}
