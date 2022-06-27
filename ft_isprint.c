/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:26:38 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/19 12:30:01 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;
	int		ret;

	c = 'r';
	ret = ft_isprint(c);
	printf("%d", ret);
	ret = isprint(c);
	printf("%d", ret);
	return (0);
}*/
