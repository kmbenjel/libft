size_t	ft_strlen(const char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}
