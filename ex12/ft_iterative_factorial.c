int		ft_iterative_factorial(int nb)
{
	int result;

	result = 0;
	if (nb > 0 && nb <= 12)
	{
		result = 1;
		while (nb)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}
