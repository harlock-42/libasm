#include "../include/libasm.h"

static	int	len_test(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		++i;
	return (i);
}

void		ft_write_test(void)
{
	int	i;
	int	end; 
	int	ft_ret;
	int	ret;
	int	nb_test;
	int	error;

	nb_test = 4;

	size_t	len[nb_test];
	char	*test[nb_test];

	test[0] = "salut\n";
	len[0] = 7;
	test[1] = "bonjour";
	len[1] = 4;
	test[2] = "0123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	len[2] = 1060;
	test[nb_test - 1] = NULL;

	i = 0;
	end = len_test(test) - 1;

	ft_printf("%sft_write%s\n", GREEN, NC);
	ft_printf("%s********%s\n", GREEN, NC);

	while (i < end)
	{
		error = 0;
		ft_ret = 0;
		ret = 0;

		ft_printf("%stest %d%s\n", PURPLE, i, NC);
		ft_printf("------\n");
		
		ft_printf("*** %sft_write%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft__write(1, test[i], len[i]);
		error = errno;
		ft_printf("%s", NC);
		ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);
		
	//	ft_printf("ERRNO = %s%d%s\n", GREY, error, NC);
		
		ft_printf("*** %swrite%s ***\n", BLACK, NC);
		ft_printf("%s", GREY);
		ret = write(1, test[i], len[i]);
		error = errno;
		ft_printf("%s", NC);
		
		ft_printf("|--> %s%d%s\n", GREY, ret, NC);
		
	//	ft_printf("ERRNO = %s%d%s\n", GREY, error, NC);
		++i;
	}
	error = 0;
	ft_ret = 0;
	ret = 0;

	ft_printf("%stest error%s\n", PURPLE, NC);
	ft_printf("----------\n");

	ft_printf("*** %sft_write%s ***\n", BLACK, NC);
	ft_printf("%s", GREY);
	ft_ret = ft__write(10, "salut", 6);
	error = errno;
	ft_printf("%s", NC);
	ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);
	ft_printf("ERRNO = %s%d%s\n", GREY, error, NC);

	ft_printf("*** %swrite%s ***\n", BLACK, NC);
	ft_printf("%s", GREY);
	ret = write(10, "salut", 6);
	error = errno;
	ft_printf("%s", NC);
	ft_printf("|--> %s%d%s\n", GREY, ret, NC);
	ft_printf("ERRNO = %s%d%s\n", GREY, error, NC);
}
