#include <stdio.h>

int main()
{
    int a;
    printf("Enter your marks:");
    scanf("%d", &a);
    
    
    
    
    if(a>100 && a<0)
{
    printf("The input is invalid");
}
    
    
    else if (a<=100 && a>=90)
   { printf("Grade:A");
}
else if(a<90 && a>80){
    

printf("Grade:B");
}
else if(a>70)
{
    printf("Grade:C");
}
else if(a>60)
{
    printf("Grade:D");
}
else if(a>50)
{
    printf("Grade:E");
    
}
else{
    printf("Grade:F");
}
    return 0;
}
