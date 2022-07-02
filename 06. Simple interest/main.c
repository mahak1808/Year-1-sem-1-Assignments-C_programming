//
//  main.c
//  Simple interest
//
//  Created by Mahak Kaur Chhabra on 26/10/21.
//

#include <stdio.h>

int main()
{
    int P,R,T;
    printf("Enter Principal,Rate and Time:");
    scanf("%d,%d,%d",&P,&R,&T);
    printf("The simple interest is %d",P*R*T/100);
    return 0;
    
}
