/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 23:59:49 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/02 00:00:48 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		n = n * -1;
		nb = n;
		ft_putchar_fd('-', fd);
	}
	if (n / 10 == 0)
	{
		ft_putchar_fd(nb + '0', fd);
		return ;
	}
	ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}
//int main ()
//{
//	int fd = open("test.txt", O_WRONLY);
//	int n = 1542;
//	ft_putnbr_fd(n, fd);
//	close(fd);
//}
