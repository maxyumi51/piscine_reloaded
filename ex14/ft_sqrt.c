int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	if (nb > 0)
	{
		while (sqrt * sqrt < nb && nb != 1)
		{
			sqrt++;
			if (sqrt * sqrt == nb)
				return (sqrt);
		}
	}
	return (0);
}
