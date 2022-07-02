//
//  main.c
//  Addition of matrix
//
//  Created by Mahak Kaur Chhabra on 07/12/21.
//
#include <stdio.h>

int main()
{
    
    int i,j,n[2][2],m[2][2];
    
    printf("Enter the values for first matrix:\n");
    for(i=0;i<2;i++)
    {for(j=0;j<2;j++){
        printf("Enter the value for [%d][%d]:",i,j);
        scanf("%d",&n[i][j]);
        }
        printf("\n");
    }
    printf("Enter the values for second matrix:\n");
    for(i=0;i<2;i++)
    {for(j=0;j<2;j++){
        printf("Enter the value for [%d][%d]:",i,j);
        scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    
    printf("Printing first matrix:\n");
    for(i=0;i<2;i++)
    {for(j=0;j<2;j++){
        printf("%d\t",n[i][j]);
    }
        printf("\n");}
        
    printf("Printing second matrix:\n");
    for(i=0;i<2;i++)
    {for(j=0;j<2;j++){
        printf("%d\t",m[i][j]);
        }
        printf("\n");}
        
    printf("Printing addition of the 2 matrices:\n");
    for(i=0;i<2;i++)
    {for(j=0;j<2;j++)
    {printf("%d\t",n[i][j]+m[i][j]);
    }
       printf("\n");}
    return 0;
}

