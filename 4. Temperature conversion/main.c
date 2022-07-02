//
//  main.c
//  Temperature conversion
//
//  Created by Mahak Kaur Chhabra on 26/10/21.
//

#include <stdio.h>

int main()
{
    float F;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&F);
    printf("The temperature in celsius is %f.",(F-32)/1.8);
    return 0;
}
