/* Welcome to the Interactive C Tutorial.
Start by choosing a chapter and
write your code in this window. */

#include <stdio.h>



int add(int a[],int n) 
{
  	int sum = 0 ;
    for(int i=0; i<=n; i++)
    {
        sum += a[i] ;
    }
    return sum;
}

int main() 
{
    int n ;
    int a[n];
    int res = add (a,b,c) ;
    printf("Result is: %d \n", res);
    return 0;
}
    
