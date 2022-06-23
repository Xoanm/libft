/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:28:20 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:28:23 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        ((unsigned char*)b)[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

int main(void)
{
  char str[] = "hola buenos dias";
  printf("%s\n", str);
  printf("%p\n", ft_memset (str, '$', 5));
  printf("%p\n", memset (str, '$', 5)); 
  printf("%s\n", str);
  return (0);
}
