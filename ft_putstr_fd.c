/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:46:39 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 10:55:56 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t i;
    
    if (!s)
        return ;
    i = 0;
    while(s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}
// int main()
// {
//     char str[] = "hello marwan";
//     ft_putstr_fd(str, 1);
// }