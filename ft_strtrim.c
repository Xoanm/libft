/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:27:09 by jumorcil          #+#    #+#             */
/*   Updated: 2022/07/15 18:27:23 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    j;
    unsigned  int   check;
    char    *right;
    char    *new;
    
    i = 0;

    if (!s1 || !set)
        return (NULL);
    while (s1[i] != '\0')
    {
      j = 0;
      check = 0;
      while (set[j]!='\0')
      {
        if (s1[i] == set[j])
          check++;
        j++;
      }
      if (check == 0)
        break;
      i++;
    }
    if (s1[i] == '\0')
        return("");
    right = ((char *)s1) + i;
    
    
    
    i = ft_strlen(right) - 1;
    while (i != 0)
    {
      j = 0;
      check = 0;
      while (set[j]!='\0')
      {
        if (right[i] == set[j])
          check++;
        j++;
      }
      if (check == 0)
        break;
      i--;
    }
  
  j = 0;
  
  new = (char *)malloc(i + 2);
  while (j <= i)
  {
    new[j] = right[j];
      j++;
  }
  new[j] = '\0';
    
      
    
    return(new);
}
/*
int    main(void)
{
    char    s1[] = "lola que tal";
    char    set[] = "la";

    printf("%s", ft_strtrim(s1, set));
    return (0);
}*/