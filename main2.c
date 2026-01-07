#include "ft_functions/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	// test substr

/* 	char *str = "Salut la team";
	printf("%s\n", ft_substr(str, 6, 20));
	printf("%s\n", ft_substr(str, 6, 5));
	printf("%s\n", ft_substr(str, 6, (-1)));
	printf("%s\n", ft_substr(str, 6, 1));
	printf("%s\n", ft_substr(str, 10, 10));
 */
	// test strjoin

/* 	char *s1 = "Salut";
	char *s2 = " la team alala";
	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", ft_strjoin(s2, s1));
	printf("%s\n", ft_strjoin("", s2));
	printf("%s\n", ft_strjoin("", "")); */

	// test strtrim

	/* char *s1 = "Salut la team aaaa";
	printf("%s\n", ft_strtrim(s1, "a"));
	printf("%s\n", ft_strtrim(s1, "alm"));
	printf("%s\n", ft_strtrim(s1, " "));
	printf("%s\n", ft_strtrim(s1, "")); */

	// test split

	/* char *test = ",ALL, LO,CA,,, ,Va,BI,EN";
	char sep = ',';
	char **array;
	array = ft_split(test, sep);
	for (int i = 0; i < 7; i++)
	{
		printf("%s\n", array[i]);
	}
	if (array[7] == NULL)
		printf("YAY\n");
	sep = ' ';
	char **array2;
	array2 = ft_split(test, sep);
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", array2[i]);
	}
	if (array2[3] == NULL)
		printf("YAY"); */

	// test itoa

/* 	char *test = ft_itoa(-2147483648);

	printf("nb ;%s\n", test);
	free(test);
	printf("nb :%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(2147483648));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(7777));
	printf("%s\n", ft_itoa(-7777)); */




}
