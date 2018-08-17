/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 02:58:39 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 23:26:15 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "utils.h"
#include "ft_list.h"

t_list	*ft_read_stdin(void)
{
	char	buf;
	t_list	*elem;

	elem = NULL;
	while (read(STDIN_FILENO, &buf, 1) > 0)
	{
		ft_list_insert(&elem, buf);
	}
	return (elem);
}
