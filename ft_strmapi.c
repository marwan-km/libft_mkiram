/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:20:41 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 10:07:57 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t len_s;
    char *result;

    if (!s || !f)
        return (NULL);
    len_s = ft_strlen(s);
    result = malloc((len_s + 1) * sizeof(char));
    if (!result)
        return (NULL);
    i = 0;
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[len_s] = '\0';
    return (result);
}

// char ft_return_string(unsigned int num, char c)
// {
//     (void)num;
//     return c;
// }
// char ft_to_ascci(unsigned int index, char c)
// {
//     (void)index;
//     if (c >= 'a' && c <= 'z')
//         return c - 32;
//     return c;
// }
// int main()
// {
//     char *str = "hello marwane, from 1337!";
//     char *str1 = "hello marwane, from 1337!";

//     char *result = ft_strmapi(str, ft_return_string);
//     char *result1 = ft_strmapi(str1, ft_to_ascci);
//     printf("the result it is :%s\nthe second test it is:%s\n", result, result1);
//     free(result);
// }