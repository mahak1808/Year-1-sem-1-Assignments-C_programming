//
//  main.c
//  print table upto a given no. using nested loops
//
//  Created by Mahak Kaur Chhabra on 24/11/21.
//

#include <stdio.h>

int main()
{
    int i,j,n;
    printf ("Enter the number upto which you want to know tables:");
    scanf ("%d",&n);
    
    for (i=1;i<=n;i++)
    {for (j=1;j<=10;j++)
        {
    printf("%d \t",i*j);
        
    }
        printf("\n");
    }
    return 0;
}
