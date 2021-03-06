/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:52:09 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/15 16:52:10 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_length(char *str)
{
	int length;

	length = 0;
	while (*str != '\n')
	{
		str++;
		length++;
	}
	length++;
	return (length);
}
