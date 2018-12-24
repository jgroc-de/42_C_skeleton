/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgroc-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 13:10:41 by jgroc-de          #+#    #+#             */
/*   Updated: 2018/12/24 13:10:42 by jgroc-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.h"

int	main(int ac, char **av)
{
	t_c4	board;

	if (ac != 3)
		ft_usage(av);
	else
	{
		if (!ft_init(&board, av))
			return (EXIT_FAILURE);
		ft_game_loop(&board);
		ft_free(&board, board.line - 1 + 3);
	}
	return (EXIT_SUCCESS);
}
