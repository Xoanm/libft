/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:40:54 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/16 15:40:59 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;
	int		ret;

	c = '1';
	ret = ft_isascii(c);
	printf("%d\n", ret);
	ret = isascii(c);
	printf("%d\n", ret);
	return (0);
}*/