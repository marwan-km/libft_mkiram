/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:37:28 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/16 16:05:08 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_skip_spaces(const char *str, int i)
{
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    return i;
}

static int ft_get_sign(const char *str, int *i)
{
    int sign = 1;
    if (str[*i] == '+' || str[*i] == '-')
    {
        if (str[*i] == '-')
            sign = -1;
        (*i)++;
    }
    return sign;
}

static long ft_add_digit(long result, int digit, int sign)
{
    if (sign == 1 && result > (2147483647 - digit) / 10)
        return 2147483647;
    if (sign == -1 && result > (2147483648L - digit) / 10)
        return -2147483648;
    return result * 10 + digit;
}

int ft_atoi(const char *str)
{
    int i;
    int sign;
    long result;

    if (!str)
        return 0;
    i = 0;
    result = 0;
    i = ft_skip_spaces(str, i);
    sign = ft_get_sign(str, &i);
    while (str[i] >= '0' && str[i] <= '9')
    {
        int digit = str[i] - '0';
        long temp = ft_add_digit(result, digit, sign);
        if (temp == 2147483647 || temp == -2147483648)
            return (int)temp;
        result = temp;
        i++;
    }
    return (int)(result * sign);
}

// int main(void)
// {
//     char *tests[] = {
//         "42",
//         "   42",
//         "-42",
//         "+42",
//         "--42",
//         "++42",
//         "0042",
//         "   -0042",
//         "2147483647",
//         "2147483648",
//         "-2147483648",
//         "-2147483649",
//         "42abc",
//         "abc42",
//         "----545mmk3",
//         "",
//         NULL};

//     int i = 0;
//     while (tests[i])
//     {
//         printf("Test %d: \"%s\"\n", i + 1, tests[i]);
//         printf("atoi:    %d\n", atoi(tests[i]));
//         printf("ft_atoi: %d\n", ft_atoi(tests[i]));
//         printf("----------------------------\n");
//         i++;
//     }
//     return 0;
// }