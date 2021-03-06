/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_cnt_rows.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 03:03:41 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/12 03:03:42 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcnt_rows(char *str)
{
	int	i;
	int	row;

	i = 0;
	row = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			row++;
		i++;
	}
	return (row);
}
