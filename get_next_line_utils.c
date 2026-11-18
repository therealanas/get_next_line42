#include "get_next_line"

char	*ft_strdup_new_line(const char *s,const char *new_line)
{
	char	*r;
    char *bm;

	r = malloc((new_line - s)+ 1);
	if (r == NULL)
	{
		return (NULL);
	}
    bm = r;
	while (s <= new_line)
	{
		*r = (char)*s;
		r++;
		s++;
	}
    *r = '\0';
	return (bm);
}
