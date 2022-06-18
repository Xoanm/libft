/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:31:01 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:31:03 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
return (c);
}

int	main(void)
{
	char	c;
	int		ret;

	c = 's';
	ret = ft_toupper(c);
	printf("%c\n", ret);
	ret = toupper(c);
	printf("%c\n", ret);
	return (0);
}
