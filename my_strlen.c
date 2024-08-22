/*
strlen(string_name) -> Returns the length of the string	
proto type: size_t strlen(const char *str);	
*/
#include <stdio.h>

size_t my_strlen(const char *str) 
{
	size_t len = 0;
	while (str[len] != '\0') 
	{
		len++;
	}
	return len;
}

int main() 
{
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	printf("Length of string: %zu\n", my_strlen(str));
	return 0;
}
