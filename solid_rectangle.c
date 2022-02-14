#include <stdio.h>
                                         
int main(){
int length,width;
printf("Enter the length of the trinagle: ");
scanf("%d",&length);
printf("Enter the width of the trinagle: ");
scanf("%d",&width);
int i,j;
for(i=1;i<=width;i++){
    for(j=1;j<=length;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}
