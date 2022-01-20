#include<stdio.h>
#include<stdlib.h>

int main(){
  int n,d,s=1,j,f;
  printf("Enter a number:");
  scanf("%d", &n);

  while(n!=0){
    d = n%10;
    s= s*d;
    n= n/10;
  }

    printf("the sum is %d",s);

    return 0;
}
