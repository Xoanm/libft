/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:31:45 by jumorcil          #+#    #+#             */
/*   Updated: 2022/07/02 09:41:27 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    char    *ptr;

    ptr = (char *)malloc(nmemb * size);
    if (!ptr)
	return (NULL);
    ft_bzero(ptr, ft_strlen(ptr));
    return(ptr);
}
/*
int main(void)
{
    printf("%p\n", ft_calloc(10, 2));
    return (0);
}*/