//
//  main.c
//  Search index number
//
//  Created by Mahak Kaur Chhabra on 27/11/21.
//

#include <stdio.h>

int main()
{
    int x[6]={1,5,8,2,16,20};
    int i,y,flag=0;
    printf("Enter the value you want to search:");
    scanf("%d",&y);
    for(i=0;i<6;i++)
    {
        if(x[i]==y)
        {
            flag=1;
            break;}
    }
    
    if (flag==1)
    {printf("The value is found at index value %d\n",i);}
    else {printf("Value not found\n");}
        
    return 0;
}
