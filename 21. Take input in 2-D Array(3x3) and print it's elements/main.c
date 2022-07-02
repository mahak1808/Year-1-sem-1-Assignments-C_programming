//
//  main.c
//  Take input in 2-D Array(3x3) and print it's elements
//
//  Created by Mahak Kaur Chhabra on 30/11/21.
//

#include <stdio.h>

int main()
{
    
    int i,j,n[3][3];
    
    printf("Enter the values:\n");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++){
        printf("Enter the value for [%d][%d]:",i,j);
        scanf("%d",&n[i][j]);
        }
        printf("\n");
    }
    
    printf("Printing the elements:\n");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++){
        printf("%d\t",n[i][j]);
    }
        printf("\n");}
        return 0;
}
