void rot13(char *s)
{
	int i = 0;
	int c = 0;

	if (!s)
		return (print("(null)"));
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			c += _putchar((((s[i] - 'a') + 13) % 26) + 'a');
		if (s[i] >= 'A' && s[i] <= 'Z')
			c += _putchar((((s[i] - 'A') + 13) % 26) + 'A');
		else
			c += _putchar(s[i]);
		i++;
	}
	return (c);

}

