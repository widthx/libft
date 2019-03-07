/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:48:12 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/13 21:47:11 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *s1p;
	int i;

	s1p = s1;
	i = 0;
	while (*s1p)
		s1p++;
	while (*s2)
	{
		*s1p = *s2;
		s1p++;
		s2++;
	}
	*s1p = '\0';
	return (s1);
}

// int		main()
// {
// 	char s1[] = "test";
// 	char s2[] = "test2";

// 	printf("%s\n", ft_strcat(s1, s2));
// 	return (0);
// }