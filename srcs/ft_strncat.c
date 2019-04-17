/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:43:55 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/15 11:43:56 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1p;
	int		i;

	s1p = s1;
	i = 0;
	while (*s1p)
		s1p++;
	while (*s2 && n--)
	{
		*s1p = *s2;
		s1p++;
		s2++;
	}
	*s1p = '\0';
	return (s1);
}
