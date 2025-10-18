/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:20:01 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 17:13:22 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    if (!s)
        return 0;
    while (s[i])
        i++;
    return (i);
}
// int main()
// {
//     char *str = NULL;
//     // int len_or = strlen(str);
//     int len = ft_strlen(str);
// }