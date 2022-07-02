//
//  main.c
//  Calculate no. of vowels in a string
//
//  Created by Mahak Kaur Chhabra on 30/11/21.
//

#include <stdio.h>

int main()
{
    int i,count=0;
    char n[]="MahakKaurChhabra";
    for(i=0;n[i]!=NULL;i++)
    {
        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u')
        count++;
    }
    printf("The no. of vowels in %s is: %d.",n,count);
    
    
    return 0;
}
