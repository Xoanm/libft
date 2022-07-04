/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:30:20 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/27 21:50:13 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (ft_strlen(s) == 0 && c == '\0')
		return ((char *)s);
	if (s[i] == '\0')
		return (NULL);
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&((char *) s)[i]);
		i--;
	}
	return (0);
}
/*
int    main(void)
{
	char    s[] = "";

	printf("%s\n", strrchr(s, '\0'));
	printf("%s\n", ft_strrchr(s, '\0'));
    return (0);
}*/