#include "libft.h"
#include <fcntl.h>

int main (int ac, char **av)
{
    char *str;
    int fd;

    fd = open(av[1], O_RDONLY);
    while (get_next_line(fd, &str) == 1)
    {
        ft_printf("%s\n", str);
        free(str);
    }
    free(str);
    close (fd);
    return (0);
}
