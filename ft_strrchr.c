/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:30:20 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:30:22 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = 0;
    if(s[i] == '\0')
        return (0);

    while(s[i] != '\0')
			i++;
	while(s[i] >= 0)
        {
            if(s[i] == c)
                return (&((char *) s)[i]);
            i--;
        }
    return (0);
}

int    main(void)
{
	char    s[] = "a";

	printf("%s\n", ft_strchr(s, 'a'));
	printf("%s\n", strchr(s, 'a'));
    return (0);

}
