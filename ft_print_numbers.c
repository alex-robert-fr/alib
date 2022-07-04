#include <unistd.h>

void	ft_print_numbers(void)
{
	char	i;

	i = 47;
	while (++i < 58)
		write(1, &i, 1);
}
