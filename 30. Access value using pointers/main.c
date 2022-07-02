//
//  main.c
//  Access value using pointers
//
//  Created by Mahak Kaur Chhabra on 14/12/21.
//

#include <stdio.h>

int main()
{
    int *p;
    int a=10;
    p=&a;
    printf("The value of a is %d.\n",*p);
    printf("The address of a is %x.\n",p);
    return 0;
}
