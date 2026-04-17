#include<stdio.h>
#include<math.h>
#include<stdbool.h>


int main(void){
    
    float x,y; 
    char sign1;
    
    
    
    printf("Enter a number: ");  
    scanf(" %d", &x);
    
    printf("Enter an operator(+, -, *, /, ^): ");
    scanf(" %c", &sign1);
    
   
    printf("Enter another number: ");
    scanf(" %d", &y);



    
if (sign1 == '+')
    printf("Result: %d", x+y);

else if(sign1 == '-')
    printf("Result: %d", x-y);

else if(sign1 == '*')
    printf("Result: %d", x*y);

else if (sign1 == '/')
    printf("Result: %.2lf", x / y);


else
    printf("Invalid Operator!");

    
    
    
    return 0;
}

 
    
    
    
    
    
    
    




    
    
    
    
    
  
    
    
    
    