/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:50:20 by gtomas            #+#    #+#             */
/*   Updated: 2025/12/15 15:42:33 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char		**ft_split(const char *s, char c);
static void	fill_array(const char *s, char c, char **array);
static void	malloc_word(const char *s, char c, int pos, char **array);
static int	count_words(const char *s, char c);

static void	malloc_word(const char *s, char c, int pos, char **array)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && c == s[i])
		i++;
	word = malloc(i + 1);
	if (!word)
		return ;
	i = 0;
	while (s[i] && c != s[i])
	{
		word[i] = s[i];
		i++;
	}
	word[i] = 0;
	array[pos] = word;
}

static void	fill_array(const char *s, char c, char **array)
{
	int	i;
	int	j;
	int	new_word;

	i = 0;
	j = 0;
	new_word = 1;
	while (s[i])
	{
		if (c == s[i])
			new_word = 1;
		if (c != s[i] && new_word)
		{
			malloc_word(s + i, c, j, array);
			j++;
			new_word = 0;
		}
		i++;
	}
	array[j] = NULL;
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;
	int	new_word;

	i = 0;
	count = 0;
	new_word = 1;
	while (s[i])
	{
		if (s[i] == c)
			new_word = 1;
		if (s[i] != c && new_word)
		{
			count++;
			new_word = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;

	count = count_words(s, c);
	array = malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	fill_array(s, c, array);
	return (array);
}

/* int main()
{
	char *test = ",ALL, LO,CA,,, ,Va,BI,EN";
	char *sep = ", ";
	char **array;
	array = ft_split(test, sep);
	for (int i = 0; i < 6; i++)
	{
		write(1, array[i], 2);
		write(1, "\n",1);
	}
	if (array[6] == NULL)
		write(1, "YAY", 3);
	return (0);
} */
