#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * srttow - strings to words
 * @str: A string
 *
 * Return: Always 0 (Success)
 */
char **strtow(char *str)
{
	int word_count = 0;
	int in_word = 0;
	int m, j;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	for (m = 0; str[m] != '\0': m++)// count number of words in string
	{
		if (!isspace(str[m]))
		{
			if (in_word == 0)
			{
				in_word = 1;
				word_count++;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	if (word_count == 0)
	{
		return (NULL);
	}
	char **words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	int word_index = 0;
	in_word = 0;
	int word_start = 0;

	for (m = 0; str[m] != '\0'; m++)// extract words and store them in array
	{
		if (!isspace(str[m]))
		{
			if (in_word == 0)
			{
				in_word = 1;
				word_start = m;
			}
		}
		else
		{
			if (in_word)
			{
				in_word = 0;
				int word_length = m - word_start;
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[word_index], &str[word_start], word_length);
				words[word_index][word_length] = '\0';
				word_index++;
			}
		}
	}
	if (in_word)// handle last word if it doesn't end with space
	{
		int word_length = strlen(str) - word_start;
		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j < word_index; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[word_index], &str[word_start], word_length);
		words[word_index][word_length] = '\0';
		word_index++;


	}
	words[word_index] = NULL;// null terminate array of strings
	return (words);
}
