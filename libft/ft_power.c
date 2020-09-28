#include "libft.h"

float		ft_power(int nb, int exp)
{
	float		result;

	if (exp == 0)
		return (1);
	result = ft_power(nb, exp / 2);
	if (exp % 2 == 0)
		return (result * result);
	else
	{
		if (exp > 0)
			return (nb * result * result);
		else
			return (result * result) / nb;
	}
}
