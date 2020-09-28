#include "libft.h"

static t_list			*ft_listfd(t_list **list_fst, int fd)
{
	t_list				*list_cur;

	list_cur = *list_fst;
	if (list_cur)
	{
		while (list_cur)
		{
			if ((int)list_cur->content_size == fd)
				return (list_cur);
			list_cur = list_cur->next;
		}
	}
	list_cur = ft_lstnew("\0", 1);
	list_cur->content_size = fd;
	ft_lstadd(list_fst, list_cur);
	return (list_cur);
}

static char				*ft_strnjoin(const char *s1, const char *s2, size_t len)
{
	char				*str;
	int					nbr;
	char				*d;

	nbr = ft_strlen(s1) + ++len;
	str = ft_strnew(nbr);
	d = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2 && --len > 0)
		*str++ = *s2++;
	*str = '\0';
	return (str - (str - d));
}

static char				*ft_joincontent(char *tmp, char *buf, int read_val)
{
	char				*ptr;

	ptr = tmp;
	tmp = ft_strnjoin(tmp, buf, read_val);
	free(ptr);
	return (tmp);
}

int						get_next_line(int const fd, char **line)
{
	static t_list		*l = NULL;
	t_list				*l_fst;
	char				buf[BUFF_SIZE + 1];
	char				*ptr;
	int					r;

	if (fd < 0 || BUFF_SIZE <= 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	l_fst = l ? l : NULL;
	l = ft_listfd(&l_fst, fd);
	while (!(ft_strchr(l->content, '\n')) && (r = read(fd, buf, BUFF_SIZE)) > 0)
		l->content = ft_joincontent(l->content, buf, r);
	r = 0;
	while (((char*)l->content)[r] && ((char*)l->content)[r] != '\n')
		r++;
	*line = ft_strsub(l->content, 0, r);
	if (((char*)l->content)[r] == '\n')
		r++;
	ptr = l->content;
	l->content = ft_strdup(l->content + r);
	free(ptr);
	l = l_fst;
	if (r > 0)
		return (1);
	return (0);
}
