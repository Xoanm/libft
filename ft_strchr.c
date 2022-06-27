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
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&((char *) s)[i]);
		i++;
	}
	return (0);
}
/*
int    main(void)
{
	int ret;
	char    s[] = "";

	printf("%s\n", ft_strchr(s, 'a'));
	printf("%s\n", strchr(s, 'a'));
	ret = ft_strchr(s, 'a');
    printf("%d\n", ret);
    ret = strchr(s, 'a');
    printf("%d\n", ret);
    return (0);

}*/
