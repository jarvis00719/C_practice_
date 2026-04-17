#include<stdio.h>
#include<math.h>




int main(){

    char op1, op2;
   
    printf("Choose an Option - 1. SI Calculator\n 2. (CI Calculator): ");

    scanf("%s", &op1 , &op2);
    
    


    float p, r, t;    
    printf("Enter Principal: ");
    scanf("%f", &p);    

    printf("Enter Rate: ");
    scanf("%f", &r);    

    printf("Enter Time: ");
    scanf("%f", &t);
    
// Function to calculate Simple Interest:-

    float si = (p*r*t)/100; 
    printf("Simple Interest is: %.2f", si);
    
//  Function to calculate Compound Interest:-

    float ci = p * pow((1 + r/100) , t);
    printf("Compound Interest: %f", ci);


    return 0;
}

   

        
    
    
    
    

    
    