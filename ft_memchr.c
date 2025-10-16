/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:59:52 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/16 09:51:56 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *src;
    size_t i;

    src = (unsigned char *)s;
    if (!s)
        return (NULL);
    if (n == 0)
        return (NULL);
    i = 0;
    while (i < n)
    {
        if (src[i] == (unsigned char)c)
            return ((void *)(src + i));
        i++;
    }
    return (NULL);
}
int main()
{
    char arr1[] = {10, 20, 30, 40, 50};
    int val1 = 30;
    void *res1 = ft_memchr(arr1, val1, 5);

    if (res1 != NULL)
        printf("Test 1: Value %d found at index %ld\n", val1, (char *)res1 - arr1);
    else
        printf("Test 1: Value %d not found\n", val1);

    int val2 = 100;
    void *res2 = ft_memchr(arr1, val2, 5);

    if (res2 != NULL)
        printf("Test 2: Value %d found at index %ld\n", val2, (char *)res2 - arr1);
    else
        printf("Test 2: Value %d not found\n", val2);

    int val3 = 20;
    void *res3 = ft_memchr(arr1, val3, 0);

    if (res3 != NULL)
        printf("Test 3: Value %d found at index %ld\n", val3, (char *)res3 - arr1);
    else
        printf("Test 3: Size = 0, value %d not found\n", val3);

    char *ptr = NULL;
    int val4 = 40;
    void *res4 = ft_memchr(ptr, val4, 5);

    if (res4 != NULL)
        printf("Test 4: Value %d found\n", val4);
    else
        printf("Test 4: Pointer is NULL or value %d not found\n", val4);

    return 0;
}