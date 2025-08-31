#include <stdio.h>
int main(){
   int a,even;
   printf("enetr the number:"),
   scanf("%d",&a);
   even=a%2;
   if(even==0){
      printf("number is even"); 
   }
   else
   {
       printf("number is odd");
       
   }
   
   
    return 0;
}
