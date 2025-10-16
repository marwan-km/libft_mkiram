/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:58:42 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/16 10:24:26 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *src1;
    unsigned char *src2;

    src1 = (unsigned char *)s1;
    src2 = (unsigned char *)s2;
    if (n == 0)
        return (0);
    i = 0;
    while (i < n)
    {
        if (src1[i] != src2[i])
            return (src1[i] - src2[i]);
        i++;
    }
    return (0);
}
// int main()
// {
//     char str[] = "marwan  it is here";
//     char str2[] = "marwan kiram it is here";

//     int result = ft_memcmp(str, str2, 10);
//     if (result == 0)
//         printf("it is the same");
//     else
//         printf("it is not the same");
// }