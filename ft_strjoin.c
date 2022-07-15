/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:26:21 by jumorcil          #+#    #+#             */
/*   Updated: 2022/07/15 18:26:33 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  int i;
  int j;
  char  *new;
  
  i = 0;
  j = 0;
  new = (char *)malloc(strlen(s1) + strlen(s2) + 1);
  while (s1[i] != '\0')
  {
    new[i] = s1[i];
    i ++;
  }
  while (s2[j] != '\0')
  {
    new[i] = s2[j];
    j ++;
    i ++;
  }
  new[i] = '\0';
  return(new);
}

/*
int    main(void)
{
    char    s1[]= "hola que tal";
    char    s2[]= "y que mas";
    
    printf("%s\n", ft_strjoin(s1, s2));
    return(0);
}*/
