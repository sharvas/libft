# libft

A personal C library with many recreated C Standard Library functions (including printf) and several additional functions used in other projects (including get_next_line).

To compile run ```make```. It will compale a library ***libft.a***. Compile projects with this library to use the fuctions.

There is a simple main file included:
```c
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
```

To compile type:
```shell
gcc main.c libft.a -I includes/
```

Ant the resulting program behaves similarly to ```cat```:
```bash
➜  libft git:(master) ✗ ./a.out text.txt
One
Two
And three!!!
???
oh why...
```
```bash
➜  libft git:(master) ✗ cat text.txt
One
Two
And three!!!
???
oh why...
```

Functions in the library:
```c
// INPUT:
int get_next_line_simple(const int fd, char **line);
int get_next_line(const int fd, char **line);

// OUTPUT:
int ft_printf(char const *format, ...);
void ft_putchar(char c);
void ft_putchar_fd(char c, int fd);
void ft_putendl(char const *s);
void ft_putendl_fd(char const *s, int fd);
void ft_putnbr(int nb);
void ft_putnbr_fd(int n, int fd);
void ft_putstr(char const *s);
void ft_putstr_fd(char const *s, int fd);

// NUMBERS:
int ft_atoi(const char *str);
intmax_t ft_atoi_intmax(const char *str);
char *ft_itoa(int n);
char *ft_itoa_intmax(intmax_t n);
char *ft_itoa_unsigned(uintmax_t n);
char *ft_itoa_base(uintmax_t n, int b, char type);
int ft_sqrt(int num);

// MEMORY:
void *ft_memalloc(size_t size);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void ft_memdel(void **ap);
void *ft_memmove(void *dst, const void *src, size_t n);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);

// STRINGS:
char *ft_strcat(char *s1, const char *s2);
char *ft_strchr(const char *s, int c);
void ft_strclr(char *s);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy(char *dst, const char *src);
void ft_strdel(char **as);
char *ft_strdup(const char *s1);
int ft_strequ(char const *s1, char const *s2);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strncat(char *s1, const char *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dst, const char *src, size_t len);
int ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strnew(size_t size);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char **ft_strsplit(char const *s, char c);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s);
char *ft_strrev(char *str);
char *ft_strndup(const char *s1, size_t n);
char *ft_strjoinfree(char *s1, char *s2);
char *ft_strjoinfree_s1(char *s1, char *s2);
char *ft_strjoinfree_s2(char *s1, char *s2);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
char **ft_split_whitespaces(char *str);
void ft_swap(char *a, char *b);

// ASCII:
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isblank(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);

// LISTS:
t_list *ft_lstnew(void const *content, size_t content_size);
void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void ft_lstadd(t_list **alst, t_list *new);
void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

// TO FREE:
void ft_2d_int_free(int **array, int size);
void ft_2d_char_free(char **array);
void ft_freestr(char *str);
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE5NDk5MzMyNjUsLTQ4ODAwNDU5NywxNT
k1ODg1OTUyLDE0ODYyNDU5NDQsOTMzMTA5MzM4XX0=
-->