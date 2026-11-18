#include "get_next_line.h"
static char *rest;
char *get_next_line(int fd)
{
    char buffer [BUFFER_SIZE +1];
    char *new_line;
    char *line;
    ssize_t r;
    ssize_t l = 0;

    while (1)
    {   
	  if (new_line == NULL)
        {
        r = read(fd,buffer,BUFFER_SIZE);
        buffer[BUFFER_SIZE] = '\0';
        if (r == -1)
            return (NULL);
        }
        new_line = ft_strchr(buffer,'\n');
        l = ft_str_newline_len(buffer);
        if (rest == NULL)
            line = ft_strjoin("",ft_substr(buffer,0,l));
        else 
            line = ft_strjoin(rest,ft_substr(buffer,0,l));
        if ((l == BUFFER_SIZE -1) && rest == NULL)
            return (line);
        else
        {
            rest = ft_substr(buffer,l,BUFFER_SIZE);
            return (line);
        }
    }
}

