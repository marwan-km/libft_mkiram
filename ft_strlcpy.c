/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:20:59 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/15 17:12:43 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len_src;
    size_t len_cpy;

    len_src = ft_strlen(src);
    if (size > 0)
    {
        if (len_src >= size)
            len_cpy = size - 1;
        else
            len_cpy = len_src;
        ft_memcpy(dst, src, len_cpy);
        dst[len_cpy] = '\0';
    }
    return (len_src);
}

// int main()
// {
//     char buff[100000];
//     size_t n = ft_strlcpy(buff, "1334", sizeof(buff));
//     printf("%zu\n", n);
//     printf("%s\n", buff);
// }