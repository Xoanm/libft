/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:28:37 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/27 21:47:24 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	if (s[i] == '\0')
		return ((char *)s);
	while (s[i] != 0)
	{
		if (s[i] == c)
			return (&((char *) s)[i]);
		i++;
	}
	return (NULL);
}

/*int    main(void)
{
	char    s[] = "tripouille";

	printf("01 %s\n", ft_strchr(s, 't'));

	printf("1 %s\n", ft_strchr(s, 't'));// == s)
	printf("2 %s\n", ft_strchr(s, 'l'));// == s + 7)
	printf("3 %s\n",ft_strchr(s, 'z'));// == 0)
	printf("4 %s\n",ft_strchr(s, 0));// == s + strlen(s))
	printf("5 %s\n",ft_strchr(s, 't' + 256));// == s)
    return (0);
}*/
