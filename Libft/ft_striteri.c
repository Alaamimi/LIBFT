void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned long	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
