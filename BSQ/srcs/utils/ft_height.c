/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_height.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:52:19 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 16:52:20 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_height(char *str)
{
	int	height;

	height = 0;
	while (*str != '\0')
	{
		if (*str == '\n')
			++height;
		++str;
	}
	return (height);
}
