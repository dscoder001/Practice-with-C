//S = a - a^3 + a^5 - a^7......n


#include<stdio.h>
#include<stdlib.h>

int main(){
int i,a, n;
int s=0;
printf("Enter numebr of terms:");
scanf("%d", &n);
printf("Enter numebr a:");
scanf("%d", &a);
int t=1;
for(i=1;i<=n;i++)
    {
    if(i%2!=0)
    {
    s=s+pow(a,t);
}
    else if(i%2==0)
        {
    s=s-pow(a,t);
        }

t=t+2;
    printf("%d\n",s);
    }
    return 0;}


