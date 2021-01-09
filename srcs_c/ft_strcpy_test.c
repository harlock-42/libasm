#include "../include/libasm.h"

static	int	len_dst(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		++i;
	return (i);
}

void	ft_strcpy_test(void)
{
		int	i;
	int	end; 
	char	*ft_ret;
	char	*ret;
	int	nb_test;

	nb_test = 3;

	char		*dst[nb_test];
	char	*src[nb_test];

	dst[0] = ft_strdup("salut");
	src[0] = "yo";
	dst[1] = ft_strdup("yo");
	src[1] = "bonjour";
	dst[nb_test - 1] = NULL;
	src[nb_test - 1] = NULL;

	i = 0;
	end = len_dst(dst);

	ft_printf("%sft_strcpy%s\n", GREEN, NC);
	ft_printf("%s*********%s\n", GREEN, NC);

	while (i < end)
	{
		ft_ret = NULL;
		ret = NULL;

		ft_printf("%stest %d%s\n", PURPLE, i, NC);
		ft_printf("------\n");

		ft_printf("*** %sft_strcpy%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft__strcpy(dst[i], src[i]);
		ft_printf("%s", NC);
		ft_printf("|--> %s%s%s\n", GREY, ft_ret, NC);

		
		ft_printf("*** %sstrcpy%s ***\n", BLACK, NC);
		ft_printf("%s", GREY);
		ret = strcpy(dst[i], src[i]);
		ft_printf("%s", NC);
		
		ft_printf("|--> %s%s%s\n", GREY, ret, NC);
		free(dst[i]);
		
		++i;
	}
/*
		ft_printf("%stest NULL%s\n", PURPLE, NC);
		ft_printf("---------\n");

		ft_printf("*** %sdst = NULL%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft__strcpy(NULL, "salut");
		ft_printf("%s", NC);
		ft_printf("|--> %s%s%s\n", GREY, ft_ret, NC);

		ft_printf("*** %ssrc = NULL%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft__strcpy("salut", NULL);
		ft_printf("%s", NC);
		ft_printf("|--> %s%p%s\n", GREY, ft_ret, NC);
*/
}
