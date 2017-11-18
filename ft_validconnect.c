int		ft_validconnect(char *buffer, int i)
{
	int		nb;

	nb = 0;
	if (buffer[i] == buffer[i + 1])
		nb++;
	if (i != 0)
		if (buffer[i] == buffer[i - 1])
			nb++;
	if (i < 15)
		if (buffer[i] == buffer[i + 5])
			nb++;
	if (i > 4)
		if (buffer[i] == buffer[i - 5])
			nb++;
	return (nb);
}
