#include <unistd.h>

void	ft_print_rev_alphabet(void)
{
	char	i;

	i = 123;
	while (--i > 96)
		write(1, &i, 1);
}
