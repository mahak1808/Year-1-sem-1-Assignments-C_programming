//
//  main.c
//  Program to print reverse of a number
//
//  Created by Mahak Kaur Chhabra on 26/11/21.
//

#include <stdio.h>

int main()
{
    int n,x,reverse=0;
    printf("Enter a number you wanna reverse:");
    scanf("%d",&n);
    x=n;
    while(n>0){
        int rem = n%10;
        reverse = reverse*10 + rem;
        n=n/10;
    }
    printf("The reverse of %d is %d .",x,reverse);
    return 0;
}
