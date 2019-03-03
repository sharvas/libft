#include "includes/libft.h"
#include <fcntl.h>

int main (int ac, char **av)
{
    char **str;
    int fd;

    if(!(str = (char **)malloc(sizeof(char *))))
        return (1);
    fd = open(av[1], O_RDONLY);
    while (fd >= 0 && get_next_line_mfd(fd, str) > 0)
    {
        ft_printf("%s\n", *str);
        free(*str);
    }
    free(*str);
    free(str);
    return (0);
}
