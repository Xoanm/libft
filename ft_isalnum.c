/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:41:22 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/16 15:41:31 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
				(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

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
}
