/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:46:38 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 16:45:19 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int ft_numlen(long n, int sign)
{
    int len;
    
    len = 0;
    while (n > 0)
    {
        n = n / 10;
        len++;
    }
    if (sign == 1)
        len++;
    return (len);
}

static void ft_fill_num(char *str, long num, int len)
{
    str[len] = '\0';
    while (num > 0)
    {
        len--;
        str[len] = (num % 10) + '0';
        num /= 10;
    }
}

char *ft_itoa(int n)
{
    long num;
    char *result;
    int len;
    int sign;

    num = n;
    if (n == 0)
        return (result = ft_strdup("0"));
    sign = 0;
    if (num < 0)
    {
        sign = 1;
        num = -num;
    }
    len = ft_numlen(num, sign);
    result = malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);
    ft_fill_num(result, num, len);
    if (sign)
        result[0] = '-';
    return (result);
}
// int main()
// {
//     long num = 2147483648;
//     char *result = ft_itoa(num);
//     printf("the result it is : %s\n", result);
// }