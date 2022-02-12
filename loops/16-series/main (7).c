//S = (a+1) + (a+2) + (a+3).....n

#include<stdio.h>
#include<stdlib.h>

int main(){
int i,a, n;
int s=0;
printf("Enter  numebr of terms:");
scanf("%d", &n);
printf("Enter  numebr a:");
scanf("%d", &a);
for(i=1;i<=n;i=i+1){

    s=s+(a+i);
 printf("%d\n", s);}

 return 0;
}
