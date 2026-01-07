#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);
static int	count_char(char const *s1, char const *set);
static int	is_in_set(char const c, char const *set);

static int	is_in_set(char const c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

static int	count_char(char const *s1, char const *set)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s1[i])
	{
		if (is_in_set(s1[i], set))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc((ft_strlen(s1) - count_char(s1, set) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while(s1[i])
	{
		if (is_in_set(s1[i], set))
		{
			i++;
			continue;
		}
		str[j] = s1[i];
		j++;
		i++;
	}
	str[ft_strlen(s1) - count_char(s1, set) + 1] = 0;
	return (str);
}
