/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:31:32 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:31:35 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void    bzero(void *s, size_t n)
{

}

int	main(void)
{
	char	c[] = "hola que tal";

	printf("%d\n", bzero(c));
	printf("%d\n", ft_bzero(c));
	return (0);
}