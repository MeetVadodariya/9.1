//Q.2 Write a Program to convert the given string in lowercase without using any string function.

#include<stdio.h>

main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
	{
        if(str[i] >= 'A' && str[i] <= 'Z') 
		{
            str[i] = str[i] + 32;
        }
    }

    printf("Uppercase string: %s\n", str);

}