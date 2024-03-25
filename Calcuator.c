#include<stdio.h>
int main(){
    
    printf("Welcome To Calculator"); 
    
    

   
   
    float n1,n2;
    char s;
    char Sum = '+';
    char Subtraction = '-'; 
    char Product = '*';
    char Quotient = '/';
    
    
    
    
    int i;
    while (i=5) 
    {
    
    
    printf("\n\nEnter 1st Number : ");
    scanf("%f",&n1);
    printf("\nEnter Operator (+,-,*,/) : ");
    scanf("%s",&s);
    printf("\nEnter 2nd Number : "); 
    scanf("%f",&n2);
    
 
    

        
    
    if (s==Sum)  
    {
        float Sum1 = n1 + n2;
        printf("\nYour Sum Is : ");
        printf("%f",Sum1);
    }
    
    else if (s==Subtraction) 
    {
        float Subtraction1=n1 - n2;
        printf("\nYour Subtraction Is : ");
        printf("%f",Subtraction1);
    }
    
    else if (s==Product)
    {
        float Product1= n1 * n2;
        printf("\nYour Product Is : ");
        printf("%f",Product1);      
    }
   
   
   else if (s==Quotient)
    {
        float Quotient1= n1 / n2;
        printf("\nYour Quotient Is : ");
        printf("%f",Quotient1);
                  
       
    }   


    else{
        printf("\n\nSyntax Error!\n\nTry Again");
    }
    
  


    }


    return 0;
}


