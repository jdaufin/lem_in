/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_start.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaufin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 18:59:52 by jdaufin           #+#    #+#             */
/*   Updated: 2017/10/24 18:42:16 by jdaufin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_list	*get_end(void)
{
	t_list	*buf;

	if (!(buf = ft_roomlist(READ, NULL)))
		return (NULL);
	while (buf && (((t_room *)buf->content)->status != END))
		buf = buf->next;
	return (buf);
}

t_list	*get_start(void)
{
	t_list	*buf;
	
	if (!(buf = ft_roomlist(READ, NULL)))
		return (NULL);
	while (buf && (((t_room *)buf->content)->status != START))
		buf = buf->next;
	return (buf);
}