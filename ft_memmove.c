/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:05:17 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/15 15:20:08 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t              i;
    unsigned char       *dst;
    const unsigned char *sr;

    dst = (unsigned char *)dest;
    sr = (const unsigned char *)src;
    if (!dst || !src)
        return (dest);
    if (dst == sr)
        return dest;
    if (dst >= sr)
    {
        while (n > 0)
        {
            n--;
            dst[n] = sr[n];
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            dst[i] = sr[i];
            i++;
        }
    }
    return (dest);
}