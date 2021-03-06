/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:10:51 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/12 10:26:42 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *ptr;

	ptr = s;
	if (n <= 0)
		return ;
	while (n--)
	{
		*ptr = 0;
		ptr++;
	}
}
