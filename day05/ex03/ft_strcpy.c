/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 23:19:58 by ndanilov          #+#    #+#             */
/*   Updated: 2018/07/31 01:48:01 by ndanilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char *saved;

	saved = dest;
	while ((*dest = *src))
	{
		dest++;
		src++;
	}
	return (saved);
}