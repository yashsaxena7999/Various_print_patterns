#include <stdio.h>
                       
int main(){
    int i,j;
    int rows;
    printf("How many rows do you want in the triangle: ");
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
 
return 0;
}
