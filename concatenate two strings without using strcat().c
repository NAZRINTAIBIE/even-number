
#include <stdio.h>
#include <string.h>

void concatenate_string(char* s, char* s1)
{
	int i;

	int j = strlen(s);

	for (i = 0; s1[i] != '\0'; i++) {
		s[i + j] = s1[i];
	}

	s[i + j] = '\0';

	return;
}

int main()
{

	char s[5000], s1[5000];

	printf("Enter the first string: ");
	gets(s);

	printf("Enter the second string: ");
	gets(s1);
	concatenate_string(s, s1);

	printf("\nConcatenated String is: '%s'\n", s);

	return 0;
}

