static char *line;

char *get_next_line(int fd)
{
    char buffer[BUFFER_SIZE + 1];
    ssize_t r;
    char *newline;
    int left = 0;

    r = read(fd,buffer,BUFFER_SIZE);
    *buffer = '\0';
    if (r == -1)
        return (-1);
    while (r != -1)
    {
        if (r == 0)
            return (line);
        newline = ft_strchr(buffer,'\n');
        if (r > 0 )
        {
            line = ft_strjoin(line,buffer,1);
            if(!newline)
            {

                return (line);
            }
        }
        else
            line = ft_strjoin(line,buffer,0);
        r = read(fd,buffer,BUFFER_SIZE);
        *buffer = '\0';
    }
}
