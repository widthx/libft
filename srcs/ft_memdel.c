/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:13:39 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 11:16:12 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    ft_memdel(void **ap)
{
    unsigned char **p;
    int i;

    p = (unsigned char **)ap;
    i = 0;

    while (p[i])
    {
        free(p[i]);
        i++;
    }
    ap = NULL;
}