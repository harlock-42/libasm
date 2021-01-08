#include "../include/libasm.h"

void	ft_read_test(void)
{
	int	buffer_size = 400;
	char	*buffer[buffer_size];
	int	fd;
	ssize_t	ret;

	fd = 0;
	ft_printf("\n%sft_read%s\n", GREEN, NC);
	ft_printf("%s*******%s\n", GREEN, NC);

// test	
	ft_printf("%stest%s\n", PURPLE, NC);
	ft_printf("----\n");
	
// ft__read
	ft_printf("%s*** ft__read ***%s\n", BLACK, NC);
	ft_printf("%s", GREY);

	fd = open("test.txt", O_RDONLY);
	ret = ft__read(fd, buffer, buffer_size);
	write(1, buffer, ret);
	ft_printf("%s", NC);
	ft_printf("|--> %s%d%s\n", GREY, ret, NC);
	close(fd);

// read
	ft_printf("%s*** read ***%s\n", BLACK, NC);
	ft_printf("%s", GREY);

	fd = open("test.txt", O_RDONLY);
	ret = read(fd, buffer, buffer_size);
	write(1, buffer, ret);
	close(fd);
	ft_printf("%s", NC);
	ft_printf("|--> %s%d%s\n", GREY, ret, NC);

// test errno
	ft_printf("%stest errno%s\n", PURPLE, NC);
	ft_printf("----------\n");

	int	error;

	error = 0;

// ft__read

	ft_printf("%s*** ft__read ***%s\n", BLACK, NC);
	ft_printf("%s", GREY);

	ret = ft__read(10, buffer, buffer_size);
	error = errno;
	write(1, buffer, ret);
	ft_printf("%s", NC);
	ft_printf("|--> %s%d%s\n", GREY, ret, NC);
	ft_printf("ERRNO = %s%d%s\n", GREY, error, NC);
	error = 0;
// read
	ft_printf("%s*** read ***%s\n", BLACK, NC);
	ft_printf("%s", GREY);

	ret = read(9, buffer, buffer_size);
	error = errno;
	write(1, buffer, ret);
	ft_printf("%s", NC);
	ft_printf("|--> %s%d%s\n", GREY, ret, NC);
	ft_printf("ERRNO = %s%d%s\n", GREY, error, NC);
}
