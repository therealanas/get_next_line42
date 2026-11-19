#include "get_next_line.h"
#include "fcntl.h"
#include "stdio.h"
int main()
{
    int fd = open("test.txt",O_RDONLY);
    
    char *line;
    line = get_next_line(fd);
    while (line != NULL)
    {
        printf("%s",line);
        line = get_next_line(fd);
    }
    close(fd);
}
