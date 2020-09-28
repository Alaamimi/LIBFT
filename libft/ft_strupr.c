#include <string.h>
#include "libft.h"

char	*ft_strupr(char *s1)
{
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_islower(s1[i]))
			s1[i] = ft_toupper(s1[i]);
	}
	return (s1);
}
