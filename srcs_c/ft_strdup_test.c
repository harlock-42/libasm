#include "../include/libasm.h"

void	ft_strdup_test(void)
{
	char	*ret;
	char	*ft_ret;

	ret = NULL;
	ft_ret = NULL;

	ft_printf("%sft_strdup%s\n", GREEN, NC);
	ft_printf("%s*********%s\n", GREEN, NC);

// test string

	ft_printf("%stest string%s\n", PURPLE, NC);
	ft_printf("-----------\n");
// ft__strdup
	ret = ft__strdup("salut");
	ft_printf("%s*** ft_strdup ***%s\n", BLACK, NC);
	ft_printf("%s%s%s", GREY, ret, NC);
	ft_printf("|--> %s%p%s\n", GREY, ret, NC);
	free(ret);

// strdup
	ret = strdup("salut");
	ft_printf("%s*** strdup ***%s\n", BLACK, NC);
	ft_printf("%s%s%s", GREY, ret, NC);
	ft_printf("|--> %s%p%s\n", GREY, ret, NC);
	free(ret);

// test empty string

	ft_printf("%stest empty string%s\n", PURPLE, NC);
	ft_printf("-----------------\n");
// ft__strdup

// strdup
	ret = strdup("");
	ft_printf("%s*** strdup ***%s\n", BLACK, NC);
	ft_printf("%s%s%s", GREY, ret, NC);
	ft_printf("|--> %s%p%s\n", GREY, ret, NC);
	free(ret);

}
