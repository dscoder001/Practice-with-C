//S = x + x/3 + x/5 +.....X/n

#include<stdio.h>
#include<stdlib.h>

int main(){
int i,x, n;
float s=0;
printf("Enter a numebr:");
scanf("%d", &n);
printf("Enter a numebr:");
scanf("%d", &x);
for(i=1;i<=n;i=i+2){

    s=s+(float)x/i;}
 printf("%f", s);

 return 0;
}
