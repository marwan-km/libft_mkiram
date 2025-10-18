/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bouns.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiram <mkiram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:53:07 by mkiram            #+#    #+#             */
/*   Updated: 2025/10/18 16:26:18 by mkiram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

    if (!lst || !new)
        return ;
    if (*lst)
        ft_lstlast(*lst)->next = new;
    else
        *lst = new;
}

// int main()
// {
//     t_list *one = ft_lstnew("one");
//     t_list *two = ft_lstnew("two");   
//     t_list *ptr = ft_lstnew("ff");
    
//     t_list *lst = NULL;
    
//     ft_lstadd_front(&lst, one );
//     ft_lstadd_front(&lst, two );
//     ft_lstadd_back(&lst, ptr);

//     t_list *last =  ft_lstlast(lst);
//     printf("%s\n", (char *)last->content);
// }