//
//  main.c
//  If a person is eligible to vote
//
//  Created by Mahak Kaur Chhabra on 31/10/21.
//

#include <stdio.h>

int main()
{
    int age=0;
    
    printf ("Enter your age-");
    scanf ("%d",&age);
    if (age>=18){printf("\nYou are eligible to vote.");}
    else {printf ("\nYou are not eligible to vote.");}
}
