/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchandle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 11:57:54 by mchandle          #+#    #+#             */
/*   Updated: 2019/02/18 11:57:55 by mchandle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_strclr(char *s)
{
    while (*s)
    {
        *s = '\0';
        s++;
    }
}