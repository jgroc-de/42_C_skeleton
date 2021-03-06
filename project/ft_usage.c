/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgroc-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 13:10:44 by jgroc-de          #+#    #+#             */
/*   Updated: 2018/12/24 13:10:45 by jgroc-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.h"

int	ft_usage(char **av)
{
	ft_printf("Usage: %s COL LINE\n\twhere:\n", av[0]);
	ft_printf("\t\tCOL is the number of column >= %d\n", COL);
	ft_printf("\t\tLINE is the number of lines >= %d\n", LINE);
	ft_printf("\t\tex: %s 7 6\n", av[0]);
	return (0);
}
