#include <stdio.h>
int main()
{
    int unit,bill, finalbill;
    printf("Enter the number of units used:");
    scanf("%d",&unit);
    if (unit==0||unit<=40){
    bill=unit*0.33;
    
    }
    else if(unit>=41&&unit<=110){
        bill=unit*0.50;
        
    }
    else if(unit>=111&&unit<=210){
    bill=unit*0.70;
   
    }
    else{
    bill=unit*1.50;
}
finalbill= ((20.0/100)*bill) + bill;
printf("The final bill is:%d",finalbill);

return 0;
        
    }
    
