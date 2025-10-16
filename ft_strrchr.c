/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:19:32 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/16 08:09:05 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    char *last_char;
    size_t i;

    if (!s)
        return (NULL);
    i = 0;
    last_char = NULL;
    while (s[i])
    {
        if (s[i] == (char)c)
            last_char = (char *)&s[i];
        i++;
    }
    if (c == '\0')
        return (char *)&s[i];
    return (last_char);
}
// int main()
// {
//     char src[] = "hello world";
//     printf("%s\n", strrchr(src, 'l'));
// }