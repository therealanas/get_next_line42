#include "get_next_line.h"
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

char *get_line(char **buffer)
{
    char *line;
    int i = 0;
    int found = 0;
    char *bm;
    if (*buffer == NULL)
        return (NULL);
    while ((*buffer)[i])
    {
        if (((*buffer)[i++]) == '\n')
        {
            found = 1;
            break;
        }
    }
    if (!found)
        return (NULL);
    line = malloc((i+1) * sizeof (char));
    if (line == NULL)
        return (NULL);
    bm = line ;
    while (i-- > 0)
        *(line++) = *((*buffer)++);
    *line = '\0';
    return (bm);
}

char *add_rest(char *rest,char *buffer)
{
    if (rest == NULL)
        return (ft_strjoin("",buffer));
    return (ft_strjoin(rest,buffer));

}


char	*ft_strjoin(char const *s1, char const *s2)
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
	r = malloc(l1 + l2 + 1);
	if (r == NULL)
		return (NULL);
	while (i < l1)
		*(r++) = s1[i++];
	i = 0;
	while (i < l2)
		*(r++) = s2[i++];
	*r = '\0';
	return (r - (l1 + l2));
}
