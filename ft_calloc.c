/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:47:21 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/16 17:35:24 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    char *ptr;

    ptr = (void *)malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, (size * nmemb));
    return (ptr);
}