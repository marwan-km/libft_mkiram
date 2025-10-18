/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:56:25 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 11:07:12 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t i;
    
    if (!s)
        return;
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}

// int main()
// {
//     char *str = "hello marwan";
//     ft_putendl_fd(str, 1);
// }