/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:00:33 by jremy             #+#    #+#             */
/*   Updated: 2021/11/24 10:01:23 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *alst, void (*del)(void *))
{
	if (!alst || !del)
		return ;
	del(alst->content);
	free(alst);
	alst = NULL;
}
