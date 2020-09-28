#include <string.h>
#include "libft.h"

char	*ft_strset(char *s1, int fill)
{
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0')
	{
		s1[i] = (char)fill;
		i++;
	}
	return (s1);
}
