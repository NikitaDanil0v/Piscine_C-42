/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camirafl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:59:05 by camirafl          #+#    #+#             */
/*   Updated: 2018/06/30 15:08:33 by camirafl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdlib.h"
//#include "string.h"

int		main(int argc, char **argv)
{
	write(1, "z\n", 2);
	return 0;
}
