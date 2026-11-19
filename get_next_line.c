#include "get_next_line.h"
static char *rest;
char *get_next_line(int fd)
{
    char *buffer;
    char *line;
    ssize_t r;
    
    buffer = malloc ((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer || fd < 0)
        return (NULL);
    line = get_line(&rest);
    if (line != NULL)
        return (line);
    while ((r = read(fd,buffer,BUFFER_SIZE)) > 0)
    {
        buffer[r] = '\0';
        rest = add_rest(rest,buffer);
        line = get_line(&rest);
        if (line != NULL)
            return (line);
    }
    if(r == 0)
    {
        line = rest;
        rest = NULL;
    }
    return (line);
}

