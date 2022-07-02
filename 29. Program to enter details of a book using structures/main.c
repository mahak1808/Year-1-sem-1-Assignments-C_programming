//
//  main.c
//  Program to enter details of a book using structures
//
//  Created by Mahak Kaur Chhabra on 09/12/21.
//

#include <stdio.h>
#include <string.h>

struct Book{
    char name[30];
    int pages;
    float price;
};

int main()
{
    int i=0;
    struct Book B[i];
    for (i=0;i<2;i++)
    {
    printf("Enter information for Book %d:\n",i+1);
    printf("Name:");
        scanf("%s",B[i].name);
    printf("Pages:");
        scanf("%d",&B[i].pages);
    printf("Price:");
        scanf("%f",&B[i].price);
    }
    for(i=0;i<2;i++)
    {
        printf("\nName of Book%d: %s\n",i+1,B[i].name);
        printf("Pages of Book%d: %d\n",i+1,B[i].pages);
        printf("Price of Book%d: %f\n",i+1,B[i].price);
}
    return 0;
}
