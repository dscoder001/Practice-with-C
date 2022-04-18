/*9 7 5 3 1
9 7 5 3
9 7 5
9*/
#include<stdio.h>
#include<stdlib.h>

int main(){
int i, j,c;
for(i=5;i>=1;i--){
        c=9;
for(j=1;j<=i;j++){
    printf(" %d",c);
    c=c-2;
}printf("\n");

}


return 0;
}
