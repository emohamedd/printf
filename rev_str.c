void rev_str(char *s)
{
	int i = 0;
	int c = 0;

	if (!s)
		return (print("null"));
	while (s[i])
	{
		i++;
	i--;
	}
	while (i >= 0)
	{
		c += _putchar(s[i]);
		i--;
	}
	return (c);
}
