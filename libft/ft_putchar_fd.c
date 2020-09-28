#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, (unsigned char *)(&c), 1);
}
