/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:26:24 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/16 11:28:37 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (needle[0] == '\0')
        return (char *)haystack;

    i = 0;

    while (i < len && haystack[i] != '\0')
    {
        j = 0;
        while (haystack[i + j] == needle[j] && i + j < len)
            j++;
        if (needle[j] == '\0')
            return (char *)(haystack + i);
        i++;
    }
    return (NULL);
}
// int main()
// {
//     char *needle = "";
//     char *haystack = "hello it is 1337 hello marwan what u doing in ur life";
    
//     char *ptr = ft_strnstr(haystack, needle, 54);
//     printf("%s\n", ptr);
// }