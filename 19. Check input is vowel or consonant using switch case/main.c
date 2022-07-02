//
//  main.c
//  Check input is vowel or consonant using switch case
//
//  Created by Mahak Kaur Chhabra on 27/11/21.
//

#include <stdio.h>

int main()
{
    char x;
    printf("Enter a letter:");
    scanf("%c",&x);
    switch(x){
        case 'a':
            printf("%c is a vowel.",x);
            break;
        case 'e':
            printf("%c is a vowel.",x);
            break;
        case 'i':
            printf("%c is a vowel.",x);
            break;
        case 'o':
            printf("%c is a vowel.",x);
            break;
        case 'u':
            printf("%c is a vowel.",x);
            break;
        default:
            printf("%c is a consonant.",x);
    }
    return 0;
}
