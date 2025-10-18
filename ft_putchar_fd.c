/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:38:20 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 17:34:08 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

int main()
{
    ft_putchar_fd('0', 0); // stdin
    ft_putchar_fd('1', -1); // stdout
    ft_putchar_fd('2', 2); // stderr
    // to know how much files u can open use : ulimit -n
}