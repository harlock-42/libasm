#ifndef DEF_LIBASM_H
# define DEF_LIBASM_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

int	ft_write(int fd, const void *buf, size_t count);

/*
** ######## TEST #########
*/

void	ft_write_test(void);

/* 
** ######## OTHER ########
*/


# endif
