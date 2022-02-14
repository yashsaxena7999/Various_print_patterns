#include <stdio.h>

int main(){
    int rows;
    printf("Enter the number of Rows for your triangle: ");
    scanf("%d",&rows);
    int i,j;
    for(i=0;i<=rows;i++){
        for(j=0;j<i;++j){
            printf(" ");
        }
        printf("*\n");
    }
   return 0; 
            }
