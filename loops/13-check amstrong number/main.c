#include<stdio.h>
#include<stdlib.h>

int main(){
  int n,d,s=0,copy;
  printf("Enter a number:");
  scanf("%d", &n);
 copy = n;
  while(n!=0){
    d = n%10;
    s= s+pow(d,3);
    n= n/10;
  }
    if(s==copy)
    printf("The amstrong number" );
    else
        printf("not an amstrong number");

    return 0;
}
