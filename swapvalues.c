#include <stdio.h>


int main(){
	
    int x,y,swap; //Variables Declared

    printf("Enter Value of X: ");
    scanf("%d", &x);

    printf("Enter Value of y: ");
    scanf("%d", &y);

    swap = x;
    x = y;
    y = swap;

    printf("Swapped Values:X = %d, y = %d\n", x,y);

    return 0;
}

 