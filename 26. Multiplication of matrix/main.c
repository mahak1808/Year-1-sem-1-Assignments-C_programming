#include <stdio.h>

int main()
{
    
    int i,j,c,n[2][2],m[2][2],mul[2][2];
    
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
    
    printf("The multiplication of the 2 matrices is:\n");
    for(i=0;i<2;i++)
    {for(j=0;j<2;j++){
        for(c=0;c<2;c++)
        {mul[i][j]+=n[i][c]*m[c][j];
        }
        printf("%d\t",mul[i][j]);}
        printf("\n");
    }
    return 0;
}
