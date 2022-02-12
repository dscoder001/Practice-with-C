//S = 1 = (1+2) + (1+2+3).....n
#include<stdio.h>
#include<stdlib.h>

int main(){
int i,n;
int s=0;
int t=0;
printf("Enter the number:");
scanf("%d", &n);
for(i=1;i<=n;i++){
    s=s+i;
    printf("%d+%d=",s,i,s+i);
    t=t+s;
    printf("%d\n", t);}


    return 0;
}
