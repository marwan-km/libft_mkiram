/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:27:48 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/15 10:16:56 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;
    if (!s) 
        return NULL;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (s);
}

