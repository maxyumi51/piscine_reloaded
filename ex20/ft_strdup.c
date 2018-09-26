char	*ft_strdup(char *src)
{
	int i;
	char *dup;

	i = 0;
	while (src[i])
		i++;
	dup = (char*)malloc(1 + (sizeof(char) * i));
	if (dup == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
