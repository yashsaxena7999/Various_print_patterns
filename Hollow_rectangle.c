#include <stdio.h>
                                         
int main(){
int length,width;
printf("Enter the length of the trinagle: ");
scanf("%d",&length);
printf("Enter the width of the trinagle: ");
scanf("%d",&width);
int i,j;
for(i=1;i<=width;i++){
 if(i==1 || i==width){
     for(j=1;j<=length;j++){
         printf("*");
     }   
     printf("\n");
 }
 else if(i>1 || i<width){
     for(j=1;j<=length;j++){
         if(j==1 || j==length){
             printf("*");
         }
         else{
             printf(" ");
         }
    
     }
     printf("\n");
 }
  
}
return 0;
}
