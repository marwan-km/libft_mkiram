/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:14:14 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/16 10:30:53 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t rest_len;
    size_t i;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (size == 0)
        return src_len;
    if (dst_len >= size)
        return src_len + size;
    rest_len = size - dst_len - 1;
    i = 0;
    while (i < rest_len && src[i])
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}
// int main()
// {
//     char src[20] = "masssssssssrwssssan";
//     char dst[20] = "kiramhhhhhhhhh";
//     int result = ft_strlcat(dst, src, 40);

//     printf("%s\n", dst);
//     printf("%d\n", result);
// }
