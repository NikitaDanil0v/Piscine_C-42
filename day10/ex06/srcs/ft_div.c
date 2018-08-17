/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 23:44:16 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/04 23:44:19 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_div(int a, int b)
{
	if (b != 0)
		ft_putnbr(a / b);
	else
		write(1, "Stop : division by zero", 23);
}
