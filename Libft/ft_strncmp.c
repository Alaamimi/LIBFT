#include <string.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((unsigned char)*s1 == (unsigned char)*s2 && n--)
	{
		if (*s1 == '\0' || *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	if (!n)
		return (((unsigned char)*--s1 - (unsigned char)*--s2));
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
