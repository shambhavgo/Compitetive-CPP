#include <stdio.h>
int *testhack() 
{ 
    static int val = 5; 
    return &val; 
} 
  
int main() 
{ 
    int *hck = testhack(); 
    fflush(stdin); 
    printf("%d",*hck); 
} 