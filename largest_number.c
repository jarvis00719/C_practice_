#include<stdio.h>
// Find Largest Number 

int main(){
    
    int x,y,z;

    printf("Enter Number1 : "); scanf("%d", &x);
    printf("Enter Number2 : "); scanf("%d", &y);
    printf("Enter Number3 : "); scanf("%d", &z);
    
    int res;

    if (x>y && x>z)
    {
        printf("Largest Number is: %d", x);
    }
    else if (y>x && y>z)
    {
        printf("Largest is: %d", y);
    }
    else
    {
        printf("%d", z);
    }
    


   
    
    
    return 0;
}