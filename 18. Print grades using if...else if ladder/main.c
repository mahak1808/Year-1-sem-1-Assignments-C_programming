//
//  main.c
//  Print grades using if...else if ladder
//
//  Created by Mahak Kaur Chhabra on 27/11/21.
//

#include <stdio.h>

int main()
{
    int x;
    printf("Enter your grade:");
    scanf("%d",&x);
    if(x>=70)printf("Grade A");
    else if(x>=60)printf("Grade B");
    else if(x>=50)printf("Grade C");
    else if(x>=40)printf("Grade D");
    else printf("Fail");
    return 0;
}
