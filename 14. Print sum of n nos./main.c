//
//  main.c
//  Print sum of 1-10
//
//  Created by Mahak Kaur Chhabra on 26/11/21.
//

#include <stdio.h>

int main()
{
    int sum=0,i,n;
    printf("Enter the no. upto which you want to print sum:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
        printf("Sum of numbers upto %d is :%d\n",n,sum);
    return 0;
    
}
