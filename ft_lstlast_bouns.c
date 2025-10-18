/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bouns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:56:41 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 15:45:48 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
{
    t_list *ptr;

    ptr = lst;
    while (ptr && ptr->next)
        ptr = ptr->next;
    return (ptr);
}

// int main()
// {
//     t_list *three = ft_lstnew("three");
//     t_list *one = ft_lstnew("hello");
//     t_list *two = ft_lstnew("two");

//     t_list *lst = NULL; 

//     ft_lstadd_front(&lst, two);
//     ft_lstadd_front(&lst, three);
//     ft_lstadd_front(&lst, one);
//     t_list *ptr = ft_lstlast(lst);
//     printf("%s\n and the address %p", (char *)ptr->content, ptr->next);
// }