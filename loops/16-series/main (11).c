//S = 1/a + 2/a^2 + 3/a^3.....n

#include<stdio.h>
#include<stdlib.h>

int main(){
int i,a, n;
float
 s=0;
printf("Enter  numebr of terms:");
scanf("%d", &n);
printf("Enter  numebr a:");
scanf("%d", &a);
for(i=1;i<=n;i=i+1){

    s=s+(float)(i/pow(a,i));
 printf("%f\n", s);}

 return 0;
}
