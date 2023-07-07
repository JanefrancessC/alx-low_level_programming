#include "main.h"

/**
 *is_palindrome - Prints a given string in reverse
 *@s: - Given string
 *Return: 1 if string is a palindrrome
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_len(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_len - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_len(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_len(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
