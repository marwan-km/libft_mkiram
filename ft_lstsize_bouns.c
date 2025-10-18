/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bouns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:49:46 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 13:24:20 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    size_t i;
    t_list *ptr;

    i = 0;
    ptr = lst;
    while (ptr != NULL)
    {
        i++;
        ptr = ptr->next;
    }
    return (i);
}

// int main()
// {
//     t_list *one = ft_lstnew("hello");
//     t_list *two = ft_lstnew("world");
//     t_list *three = ft_lstnew("42");

//     t_list *lst = NULL;
//     ft_lstadd_front(&lst, three);
//     ft_lstadd_front(&lst, two);
//     ft_lstadd_front(&lst, one);

//     printf("List size: %d\n", ft_lstsize(lst));

//     free(one);
//     free(two);
//     free(three);

//     return 0;
// }