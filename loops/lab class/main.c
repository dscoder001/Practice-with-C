
/*
 *  s= 1 + X + X^n
 */
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(){
    int i, n, x;
    float sum = 1;

    printf("Enter the number of terms n:\n" );
    scanf("%d",&n);
    printf("Enter the number x:");
    scanf("%d", &x );

    for(i=1;i<=n;i++){

    sum = sum + (float)pow(x,i);

   printf("%f\n", sum);
    }
    return 0;
}
