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

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;
	int		ret;

	c = '=';
	ret = ft_isascii(c);
	printf("%d", ret);
	ret = isascii(c);
	printf("%d", ret);
	return (0);
}
