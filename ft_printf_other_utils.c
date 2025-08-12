#include "libft.h"

void ft_printunsig(unsigned int n, size_t *printd_cont)
{
	if(n / 10 == 0)
	{
		ft_printchar(n + '0', printd_cont);
		return ;
	}
	ft_printunsig(n / 10, printd_cont);
	ft_printchar((n % 10) + '0', printd_cont);
}

void ft_printptr(void *ptr, size_t *printd_cont)
{
	unsigned long addr;

	addr = (unsigned long)ptr;
	if (addr == 0)
	{
		ft_printstr("(nil)", printd_cont);
		return ;
	}
	ft_printstr("0x", printd_cont);
	ft_printhex(addr, printd_cont, 0);
}
