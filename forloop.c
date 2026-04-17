#include<stdio.h>

int main(){ 
    
    int x, n;

    printf("Enter Range: ");
    scanf("%d", &n);

    int ans[n];
  
    printf("[");
    for (x = 0; x <= 20; x++)
    {
        ans[x] = x;
        printf("%d", ans[x]);
        
        
    if(x < n)
    {
        printf(" , ");
    }
    
    }
        printf("]");

    return 0;
}
        

        



        
        
    
    
    
    
    
    
