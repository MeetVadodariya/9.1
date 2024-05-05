//Q.3 Write a Program to convert the given string in toggle case without using any string function.

#include<stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
	{
        if (str[i] >= 'a' && str[i] <= 'z')
		{
            str[i] = str[i] - 'a' + 'A';  
        } else if (str[i] >= 'A' && str[i] <= 'Z')
		{
            str[i] = str[i] - 'A' + 'a';
        }
        i++;
    }

    printf("Toggled string: %s\n", str);    
}