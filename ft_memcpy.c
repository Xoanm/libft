/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:27:48 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:27:52 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memcpy(void	*s1, const	void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (i < n)
	{
		((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
		i++;
	}	
	return (s1);
}

int	main(void)
{
	char	s1[] = "hola que tal";
	char	s2[] = "Juan";

	printf("%s\n", memcpy(s1, s2, 4));
	printf("%s\n", ft_memcpy(s1, s2, 4));
	return (0);
}
