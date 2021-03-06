/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextprime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgroc-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:44:32 by jgroc-de          #+#    #+#             */
/*   Updated: 2018/01/30 14:48:18 by jgroc-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nextprime(int n)
{
	int i;

	i = n + 1;
	while (!(ft_isprime(i)) && i < 2147483647)
		i++;
	return (i);
}
