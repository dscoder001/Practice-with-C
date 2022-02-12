//S = a - a^3 + a^5 - a^7......n


#include<stdio.h>
#include<stdlib.h>

int main(){
int i,a, n;
int s=0;
printf("Enter a numebr of terms:");
scanf("%d", &n);
printf("Enter numebr a:");
scanf("%d", &a);
for(i=1;i<=n;i=i+2){
    if(i%2!=0){
    s=s+pow(a,i);}
    else(i%2==0);{
    s=s-pow(a,i);}
    printf("%d\n",s);
}

 return 0;
}
