#include <string.h>
#include "libft.h"

char	*ft_strlwr(char *s1)
{
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_isupper(s1[i]))
			s1[i] = ft_tolower(s1[i]);
		i++;
	}
	return (s1);
}
