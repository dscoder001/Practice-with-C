//S = (a+1) + (a+2) + (a+3).....

#include<stdio.h>
#include<stdlib.h>

int main(){
int i,a, n;
int s=0;
printf("Enter a numebr:");
scanf("%d", &n);
printf("Enter a numebr:");
scanf("%d", &a);
for(i=1;i<=n;i=i+1){

    s=s+(a+i);}
 printf("%d", s);

 return 0;
}
