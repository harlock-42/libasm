#include "../include/libasm.h"

static	int	len_dst(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		++i;
	return (i);
}

void	ft_strcmp_test(void)
{
	int	i;
	int	end; 
	int	ft_ret;
	int	ret;
	int	nb_test;

	nb_test = 6;

	char	*s1[nb_test];
	char	*s2[nb_test];

	s1[0] = ft_strdup("");
	s2[0] = "yo";
	s1[1] = ft_strdup("yo");
	s2[1] = "yolo";
	s1[2] = ft_strdup("yofo");
	s2[2] = "yo";
	s1[3] = ft_strdup("yoao");
	s2[3] = "yo";
	s1[4] = ft_strdup("");
	s2[4] = "";
	s1[nb_test - 1] = NULL;
	s2[nb_test - 1] = NULL;

	i = 0;
	end = len_dst(s1);

	ft_printf("%sft_strcmp%s\n", GREEN, NC);
	ft_printf("%s*********%s\n", GREEN, NC);

	while (i < end)
	{
		ft_ret = 0;
		ret = 0;

		ft_printf("%stest %d%s\n", PURPLE, i, NC);
		ft_printf("------\n");
		ft_printf("*** %sft_strcmp%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft__strcmp(s1[i], s2[i]);
		ft_printf("%s", NC);
		ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);

		ft_printf("*** %sstrcmp%s ***\n", BLACK, NC);
		ft_printf("%s", GREY);
		ret = strcmp(s1[i], s2[i]);
		ft_printf("%s", NC);
		
		ft_printf("|--> %s%d%s\n", GREY, ret, NC);
		free(s1[i]);
		++i;
	}
		ft_printf("%stest NULL%s\n", PURPLE, NC);
		ft_printf("---------\n");

		ft_printf("*** %sdst = NULL%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft__strcmp(NULL, "salut");
		ft_printf("%s", NC);
		ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);

		ft_printf("*** %ssrc = NULL%s ***\n", BLACK, NC);
		
		ft_printf("%s", GREY);
		ft_ret = ft__strcmp("salut", NULL);
		ft_printf("%s", NC);
		ft_printf("|--> %s%d%s\n", GREY, ft_ret, NC);
}
