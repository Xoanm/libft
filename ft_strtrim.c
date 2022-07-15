#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    i;
    unsigned int    j;
    char    *new;
    
    new = (char *)malloc(strlen(s1));
    i = 0;
    while (s1[i] != '\0')
    {
		j = 0;
		while (set[j] != '\0')
        {
        	if (s1[i] == set[j])
        		j++;
        	else
        		new[i] = s1[i];
        }
        i++;
    }
    return(new);
}

int    main(void)
{
    char    s1[] = "lola que tal";
    char    set[] = "la";

    printf("%s", ft_strtrim(s1, set));
    return (0);
}