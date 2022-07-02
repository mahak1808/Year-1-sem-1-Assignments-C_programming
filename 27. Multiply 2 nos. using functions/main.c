//
//  main.c
//  Multiply 2 nos. using functions
//
//  Created by Mahak Kaur Chhabra on 07/12/21.
//

#include <stdio.h>
int mul(int,int);
int main()
{
    int a,b,result;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    result=mul(a,b);
    printf("The multiplication is: %d",mul(a,b));
    
}
int mul(x,y)
{
    return x*y;
}
