#include "main.h"

/**
 * _strstr - strcasestr - locate a substring
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
int position(char *s1, char *s2) 
{
	int i, j;

	for (i = 0; haystack[i]; i++) 
	{
		for (j = 0; needle[j] && needle[j] == haystack[i + j]; j++);
		if (!needle[j]) return i;
	}
	return -1;
}

int main() 
{
	char word1[101], word2[101];
	int p;
	printf("Type two words: ");
	scanf("%s %s", word1, word2);
	p = position(word1, word2);
	if (p < 0) 
		printf("Word'%s' does not exists in the sentence '%s'.", word2, word1);
	else
		printf("Position of the word '%s' is %d.", word2, p);
	return 0;
}
