/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:27:23 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/17 19:29:12 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t len_s;
    char *ptr;

    if (!s)
        return (NULL);
    len_s = ft_strlen(s);
    if (start >= len_s)
    {
        ptr = malloc(1);
        if (!ptr)
            return (NULL);
        ptr[0] = '\0';
        return (ptr);
    }
    if (len > len_s - start)
        len = len_s - start;
    ptr = malloc((len + 1) * sizeof(char));
    if (!ptr)
        return (NULL);
    ft_memcpy(ptr, s + start, len);
    ptr[len] = '\0';
    return (ptr);
}
// int main()
// {
//     char *src = "hello marwan from 1337";
//     char *ptr = ft_substr(src, 23, 23 );
//     printf("%s\n", ptr);
// }