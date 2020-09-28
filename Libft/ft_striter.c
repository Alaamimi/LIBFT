#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s)
	{
		while (*s)
		{
			(*f)(s);
			s++;
		}
	}
}
