/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:23:12 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/16 16:45:27 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strdup(const char *s)
{
    size_t i;
    char *ptr;
    size_t len;

    if (!s)
        return (NULL);
    len = ft_strlen(s);
    ptr = malloc((len + 1) * sizeof(char));
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
// int main()
// {
//    char ptr[] = "hello world";
//    char *pt4r = ft_strdup(ptr);
//    printf("%s\n", pt4r);
//    free(pt4r);
// }
