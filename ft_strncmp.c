/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtomas <gtomas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:28:56 by gtomas            #+#    #+#             */
/*   Updated: 2026/01/06 13:51:36 by gtomas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n);

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/* int main()
{
	char s1[] = "\x7F";
	char s2[] = "\xFF";
	char b[] = "abcd";s
	char c[] = "Saluttt";
	char d[] = "Saluta";
	printf("%d ", ft_strncmp (s1, s2, 1));
	printf("%d ", ft_strncmp (b, b, 5));
	printf("%d ", ft_strncmp (a, c, 5));
	printf("%d\n", ft_strncmp (a, d, 8));

	printf("%d ", strncmp (s1, s2, 1));
	printf("%d ", strncmp (b, a, 5));
	printf("%d ", strncmp (a, c, 5));
	printf("%d ", strncmp (a, d, 8));
} */
