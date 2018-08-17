/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 23:42:22 by ndanilov          #+#    #+#             */
/*   Updated: 2018/08/04 23:42:32 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_sub(int a, int b);
void	ft_add(int a, int b);
void	ft_mul(int a, int b);
void	ft_div(int a, int b);
void	ft_mod(int a, int b);
void	ft_usage(int a, int b);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);

typedef struct  s_opp
{
	char	*op;
	void	(*f)(int, int);
}   t_opp;

#endif
