#include "../include/libasm.h"


int	main(void)
{
	char	*shell;

	shell = (char *)getenv("SHELL");
	printf("%s\n", shell);
	
	ft_write_test();
	return (0);
}
