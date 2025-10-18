/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bouns.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:26:53 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 11:38:01 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

// int main ()
// {
//     t_list *new = ft_lstnew("hello");
//     printf("The content:%s\nThe address:%p", (char *)new->content, new->next);
//     free(new);
// }