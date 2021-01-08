#ifndef DEF_LIBASM_H
# define DEF_LIBASM_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libft.h"

/*
** #######################
** ####### COLORS ########
** #######################
*/

#ifndef BG_LIGHT

#define BLACK           "\033[1;30m"
#define RED             "\033[1;31m"
#define GREEN           "\033[1;32m"
#define YELLOW          "\033[1;33m"
#define BLUE            "\033[1;34m"
#define PURPLE          "\033[1;35m"
#define CYAN            "\033[1;36m"
#define GREY            "\033[1;37m"
#define NC              "\033[0m"

#else

#define BLACK           "\033[0;30m"
#define RED             "\033[0;31m"
#define GREEN           "\033[0;32m"
#define YELLOW          "\033[0;33m"
#define BLUE            "\033[0;34m"
#define PURPLE          "\033[0;35m"
#define CYAN            "\033[0;36m"
#define GREY            "\033[0;37m"
#define NC              "\033[0m"

#endif

/*
** #######################
** ###### FUNCTIONS ######
** #######################
*/

/*
** ####### LIBASM ########
*/

ssize_t	ft__read(int fd, void *buf, size_t count);
int	ft__strcmp(const char *s1, const char *s2);
char	*ft__strcpy(char *dst, const char *src);
char	*ft__strdup(const char *s);
size_t	ft__strlen(const char *str);
int	ft__write(int fd, const void *buf, size_t count);

/*
** ######## TEST #########
*/

void	ft_read_test(void);
void	ft_strcmp_test(void);
void	ft_strcpy_test(void);
void	ft_strdup_test(void);
void	ft_strlen_test(void);
void	ft_write_test(void);

/* 
** ######## OTHER ########
*/


# endif
