#include<stdio.h>

int find_fact(){
    unsigned int x,y,fact;
    for (x = y; x >= 1; x--) 
{
    printf("%u", x);
    fact *= x;

}
  
    return fact;
}




int main(){
    
    printf("-----Factorial Calculator-----\n\n");
   
    unsigned int x,y;
    unsigned int fact;

    printf("Enter a Number: ");    
    scanf("%u", &y);

    printf("[ ");

    if (x > 1)
    {
        printf("*");
    }

     printf(" ]:-", find_fact(5));



    return 0;
}


    


    
    
    
    
    
    
    
    
    
    
    
    
    