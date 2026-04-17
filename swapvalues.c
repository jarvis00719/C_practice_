#include<stdio.h>

int main(){
    
    int x,y, swap;
    
    printf("Enter Value of x: ");
    scanf("%d", &x);
    printf("Enter Value of y: ");
    scanf("%d",  &y);

    swap = x;
    x = y;
    y = swap;
    
    printf("Swapped Values:x = %d, y = %d\n",x,y );
    
    return 0;
}
