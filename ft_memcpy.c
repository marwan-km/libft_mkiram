/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:19:26 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/15 10:02:06 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dst;
    unsigned const char *sr;
    size_t i;

    dst = (unsigned char *)dest;
    sr = (unsigned const char *)src;

    if (!dst || !sr)
        return dest;
    i = 0;
    while (i < n)
    {
        dst[i] = sr[i];
        i++;
    }
    return (dest);
}