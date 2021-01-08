#include "../include/libasm.h"

static	int	len_test(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		++i;
	return (i);
}

void	ft_strlen_test(void)
{
	int	i;
	int	end; 
	int	ft_ret;
	int	ret;
	int	nb_test;

	nb_test = 4;

	char	*test[nb_test];

	test[0] = "salut\n";
	test[1] = "bonjour";
	test[2] = "";
	test[nb_test - 1] = NULL;

	i = 0;
	end = len_test(test);

	ft_printf("%sft_strlen%s\n", GREEN, NC);
	ft_printf("%s*********%s\n", GREEN, NC);

	while (i < end)
	{
		ft_ret = 0;
		ret = 0;

		ft_printf("%stest %d%s\n", PURPLE, i, NC);
		ft_printf("------\n");
		
		ft_printf("*** %sft_strlen%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft__strlen(test[i]);
		ft_printf("%s", NC);
		ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);
		
		
		ft_printf("*** %sstrlen%s ***\n", BLACK, NC);
		ft_printf("%s", GREY);
		ret = strlen(test[i]);
		ft_printf("%s", NC);
		
		ft_printf("|--> %s%d%s\n", GREY, ret, NC);
		
		++i;
	}

	ft_ret = 0;
	ret = 0;

	ft_printf("%stest NULL%s\n", PURPLE, NC);
	ft_printf("--------------\n");

	ft_printf("*** %sft_strlen%s ***\n", BLACK, NC);
	ft_printf("%s", GREY);
	ft_ret = ft__strlen(NULL);
	ft_printf("%s", NC);
	ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);
}

