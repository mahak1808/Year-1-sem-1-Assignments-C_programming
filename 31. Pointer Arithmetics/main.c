//
//  main.c
//  Pointer Arithmetics
//
//  Created by Mahak Kaur Chhabra on 14/12/21.
//

#include <stdio.h>

int main()
{
    int *p;
    int c,a,b,*q;
    a=10,b=20;
    p=&a;
    q=&b;
    c=*p+*q;
    printf("The value of a is %d.\n",*p);
    printf("The value of b is %d.\n",*q);
    printf("The sum of a and b is %d.\n",c);
    return 0;
}
