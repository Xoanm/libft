/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:30:35 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:30:37 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int  i;
    unsigned int  j;
    char    *new;

    i = start;
    j = 0;
    new = (char *)malloc(len + 1);
    while (i < len + start)
    {
        new[j] = s[i];
        i++;
        j++;
    }
    new[j] = '\0';
    return (new);

}
/*
int    main(void)
{
    char    s[]= "hola que tal";
    
    printf("%s\n", ft_substr(s, 3, 5));
    return(0);
}*/