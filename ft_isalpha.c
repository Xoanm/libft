/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:06:35 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/16 15:40:27 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;
	int ret;

	c = 'r';
	ret = ft_isalpha(c);
	printf("%d", ret);

	ret = isalpha(c);
	printf("%d", ret);
	return (0);
}
