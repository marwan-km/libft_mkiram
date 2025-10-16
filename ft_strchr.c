/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:28:37 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/16 08:16:27 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    size_t i;
    if (!str)
        return (NULL);
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }
    if (c == '\0')
        return (str + i);
    return (NULL);
}