//
//  main.c
//  largest of 3 nos. usiing nested if else
//
//  Created by Mahak Kaur Chhabra on 27/11/21.
//

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 nos.:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b){
        if(a>c)printf("%d is the greatest.",a);
        else printf("%d is the greatest.",c);
    }
    else {
        if(b>c)printf("%d is the greatest.",b);
        else printf("%d is the greatest.",c);
    }
    return 0;
}
