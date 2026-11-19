#ifndef GET_NEXT_LiNE_H
#define GET_NEXT_LiNE_H
#ifndef BUFFER_SIZE
    #define BUFFER_SIZE 42
#endif
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
char *add_rest(char *rest,char *buffer);
char *get_line(char **buffer);
char	*ft_strjoin(char const *s1, char const *s2);
char *get_next_line(int fd);
#endif
