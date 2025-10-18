/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:07:36 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 11:20:26 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = n;
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }
    if (nb > 9)
        ft_putnbr_fd((nb / 10), fd);
    ft_putchar_fd((nb % 10) + '0', fd);
}

// int main()
// {
//     int nb = -2147483648;
//     ft_putnbr_fd(nb, 1);
// }