#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;
	
	i = 96;
	while (++i < 123)
		write(1, &i, 1);
}
