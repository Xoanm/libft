/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:29:44 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:29:46 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	c[] = "hola";
	int		ret;

	ret = ft_strlen(c);
	printf("%d\n", ret);
	ret = strlen(c);
	printf("%d\n", ret);
	return (0);
}

