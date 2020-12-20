#include <unistd.h>

void	ft_write(int fd, const void *buf, size_t count);

int	main(void)
{
	ft_write(1, "bonjour", 7);
	return (0);
}
