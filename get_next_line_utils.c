#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2,int terminate)
{
	char	*r;
	size_t	l1;
	size_t	l2;
	size_t	i;

	i = 0;
	if (s2 == NULL || s1 == NULL)
		return (NULL);
	l1 = ft_strlen((char *) s1);
	l2 = ft_strlen((char *) s2);
	r = malloc(l1 + l2 + terminate);
	if (r == NULL)
		return (NULL);
	while (i < l1)
		*(r++) = s1[i++];
	i = 0;
	while (i < l2)
		*(r++) = s2[i++];
    if (terminate)
	    *r = '\0';
	return (r - (l1 + l2));
}

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;
	char	*pr;
	int		i;
	int		l;

	ps = (char *) s;
	pr = NULL;
	i = 0;
	l = 0;
	while (*(ps++))
		l++;
	while (i <= l)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			pr = (char *)(&s[i]);
		i++;
	}
	return (pr);
}

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}
