/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:29:55 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:29:57 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (i == strlen(str2))
		return(str2 - str1);
	while (str1[i] && i < len)
	{
		j = 0;
		while (str2[j] == str1[i + j] && (i + j) < len)
		{
			if (str2[j + 1] == str1[j + 1])
			{
				return (str2 - str1);
			}
			j++;
		}
		i++;
	}
	return (str2 - str1);
}
int	main(void)
{
	char *s1 = "holaa";
	char *s2 = "holas";
	printf("Funcion original: %d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));

	return(0);
}