#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ps;

	ps = s;
	while (n--)
	{
		*ps++ = '\0';
	}
}
