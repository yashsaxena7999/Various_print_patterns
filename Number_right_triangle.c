#include <stdio.h>

int main(){
int rows;
printf("Enter Number of rows in the palindrome triangle: ");
scanf("%d",&rows);
int i=0,j=0,k=0,m=0,l=0;
for(i=1;i<=rows;i++){
    for(j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
}
return 0;
}
