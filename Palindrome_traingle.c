#include <stdio.h>

int main(){
int rows;
printf("Enter Number of rows in the palindrome triangle: ");
scanf("%d",&rows);
int i=0,j=0,k=0,m=0,l=0;
for(i=1;i<=rows;i++){
    for(j=i;j<=rows-1;j++){
        printf(" ");
    }
    m=1;
    for(k=1;k<=i;k++){
        printf("%d",m++);
    }
    m=m-2;
    for(l=1;l<i;l++){
        printf("%d",m--);
    }
    printf("\n");
}

return 0;
}
