int	ft_nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (ft_nmatch(s1 + 1, s2) + ft_nmatch(s1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (ft_nmatch(s1, s2 + 1));
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (ft_nmatch(s1 + 1, s2 + 1));
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}