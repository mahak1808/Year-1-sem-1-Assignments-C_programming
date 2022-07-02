//
//  main.c
//  factorial of a given no.
//
//  Created by Mahak Kaur Chhabra on 08/12/21.
//

#include <stdio.h>
int fact(int);
int main()
{
    int x=0,result=0;
    printf("Enter the no.:");
    scanf("%d",&x);
    result=fact(x);
    printf("The factorial of %d is %d.",x,fact(x));
    return 0;
}
int fact(int x)
{
    int n=0,a=1;
    if(x==0)
        return 1;
    for(n=1;n<=x;n++)
    {a=a*n;
    }
    return a;}
