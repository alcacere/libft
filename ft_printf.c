#include "libft.h"

void	fmt_id(char fmt, va_list ap, size_t *printd_cont)
{
	int	hex_flag;

	hex_flag = 0;
	if (fmt == 'c')
		ft_printchar((char)va_arg(ap, int), printd_cont);
	else if (fmt == 's')
		ft_printstr(va_arg(ap, char *), printd_cont);
	else if (fmt == 'i' || fmt == 'd')
		ft_printnbr(va_arg(ap, int), printd_cont);
	else if (fmt == 'x')
		ft_printhex(va_arg(ap, unsigned int), printd_cont, hex_flag);
	else if (fmt == 'X')
		ft_printhex(va_arg(ap, unsigned int), printd_cont, hex_flag + 1);
	else if (fmt == 'u')
		ft_printunsig(va_arg(ap, unsigned int), printd_cont);
	else if (fmt == 'p')
		ft_printptr(va_arg(ap, void *), printd_cont);
	else if (fmt == '%')
		ft_printchar('%', printd_cont);
}

int	ft_printf(char const *fmt, ...)
{
	size_t	printd_cont;
	int	i;
	va_list ap;

	i = 0;
	printd_cont = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			fmt_id(fmt[i + 1], ap, &printd_cont);
			i++;
		}
		else
			printd_cont += write(1, &fmt[i], 1);
		i++;
	}
	va_end(ap);
	return (printd_cont);
}
