/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   project.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgroc-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 13:10:30 by jgroc-de          #+#    #+#             */
/*   Updated: 2018/12/24 13:10:38 by jgroc-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECT_H
# define PROJECT_H

# include "../libft/printf/libprintf.h"
# include <errno.h>
# include <time.h>

# define COL 7
# define LINE 6

typedef struct	s_c4
{
	int 	col;
	int 	line;
	int		depth;
	int		turn;
	int		winner;
	char	**grid;
}				t_c4;

/*
** misc
*/

int		ft_usage(char **av);
int		ft_init(t_c4 *board, char **av);
void	ft_free(t_c4 *board, int i);
void	ft_print(t_c4 *board);

/*
** game loop
*/

int		ft_game_loop(t_c4 *board);

#endif
