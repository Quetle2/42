/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:21:54 by miandrad          #+#    #+#             */
/*   Updated: 2022/11/08 17:07:08 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	struct s_list	**nl;

// 	if (!*f || !del)
// 		return (0);
// 	*nl = ft_lstnew(f(lst->content));
// 	if (!*nl)
// 		ft_lstclear(nl, *del((*nl)->content));
// 	return (*nl);
// }
