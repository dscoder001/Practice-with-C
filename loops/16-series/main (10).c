//S = a/2 + a/5 + a/8.....a/20

#include<stdio.h>
#include<stdlib.h>

int main(){
int i,a;
float s=0;
printf("Enter  numebr a:");
scanf("%d", &a);
for(i=2;i<=20;i=i+3){

    s=s+ (float)a/i;
 printf("%f\n", s);}

 return 0;
}
