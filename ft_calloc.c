/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:47:21 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/17 12:30:03 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    char *ptr;

    if (nmemb == 0 || size == 0)
    {
        ptr = malloc(1);
        if (!ptr)
            return (NULL);
        ptr[0] = '\0';
        return (ptr);
    }

    ptr = (void *)malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, (size * nmemb));
    return (ptr);
}

// int main(void)
// {
//     char *ptr = ft_calloc(120, sizeof(char));
//     if (!ptr)
//     {
//         printf("Allocation failed!\n");
//         return 1;
//     }

//     strcpy(ptr, "hello marwan this me and i want talk to u");

//     printf("%s\n", ptr);

//     free(ptr);
//     return 0;
// }