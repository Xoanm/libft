/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:41:22 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/29 16:03:31 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || (ft_isdigit(c)))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;
	int		ret;

	c = '9';
	ret = ft_isalnum(c);
	printf("%d", ret);
	ret = isalnum(c);
	printf("%d", ret);
	return (0);
}*/
