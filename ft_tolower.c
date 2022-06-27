/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:30:48 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/27 21:56:03 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	char	c;
	int		ret;

	c = 'R';
	ret = ft_tolower(c);
	printf("%c\n", ret);
	ret = tolower(c);
	printf("%c\n", ret);
	return (0);
}*/
