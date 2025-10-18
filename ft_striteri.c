/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:05:46 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 10:26:57 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    size_t i;

    if (!s || !f)
        return;
    i = 0;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

// void ft_to_ascii(unsigned int num, char *str)
// {
//     (void)num;
//     while (*str)
//     {
//         if (*str >= 'a' && *str <= 'z')
//             *str -= 32 ;
//         else
//             *str = *str;
//         str++;
//     }
    
// }

// int main()
// {
//     char ptr[] = "hello world from 1337";
//     ft_striteri(ptr, ft_to_ascii);
//     printf("the string it is :%s", ptr);
// }