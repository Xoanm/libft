/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:31:12 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:31:14 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int	result;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if(str[i] == '-')
		sign = -1;
    if (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
    {
      result = str[i] - 48;
      i++;
    }    
    while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
    {
        result = (result * 10) + (str[i] - 48);
        i++;
    }
    result *= sign;
    return (result);
}

int	main(void)
{
	char	c[] = "   324";

	printf("%d\n", ft_atoi(c));
	printf("%d\n", atoi(c));
	return (0);
}