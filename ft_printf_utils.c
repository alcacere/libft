#include "libft.h"

void ft_printstr(const char *str, size_t  *printd_cont)
{
	int	i;

	if (!str)
	{
		ft_printstr("(null)", printd_cont);
		return ;
	}
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		*printd_cont += 1;
		i++;
	}
}

void	ft_printchar(char c, size_t *printd_cont)
{
	write(1, &c, 1);
	*printd_cont += 1;
}

void    ft_printnbr(int n, size_t *printd_cont)
{
	unsigned int	nb;
	
	nb = n;
	if (n < 0)
	{
		n = n * -1;
		nb = n;
		ft_printchar('-', printd_cont);
	}
	if (n / 10 == 0)
	{
		ft_printchar(nb + '0', printd_cont);
		return ;
}
ft_printnbr(nb / 10, printd_cont);
ft_printchar(nb % 10 + '0', printd_cont);
}

void	ft_printhex(unsigned long n, size_t *printd_cont, int hex_flag)
{
	char	hex[17];
	int	i;
	int	unit;

	i = 0;
	unit = 0;
	if (n == 0)
		ft_printchar('0', printd_cont);
	while (n > 0)
	{
		unit = n % 16;
		if (unit < 10)
			hex[i] = unit + '0';
		else if (hex_flag == 0)
			hex[i] = (unit - 10) + 'a';
		else
			hex[i] = (unit - 10) + 'A';
		n /= 16;
		i++;
	}
	while(i--)
		ft_printchar(hex[i], printd_cont);
}
