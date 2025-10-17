/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:21:38 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/17 12:27:02 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_s1;
    size_t len_s2;
    char *new_str;

    if (!s1 || !s2)
        return (NULL);
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    new_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
    if (!new_str)
        return (NULL);
    ft_memcpy(new_str, s1, len_s1);
    ft_memcpy(new_str + len_s1, s2, len_s2);
    new_str[len_s1 + len_s2] = '\0';
    return (new_str);
}