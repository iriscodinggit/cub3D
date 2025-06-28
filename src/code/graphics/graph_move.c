/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irlozano <irlozano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:40:17 by misaac-c          #+#    #+#             */
/*   Updated: 2025/06/28 18:16:26 by irlozano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../cube.h"
#include "../../libs/libft/libft.h"
#include "../../libs/minilibx-linux/mlx.h"

int	move_front(t_game *game, float new_x, float new_y)
{
	new_x = game->px + game->pdx;
	new_y = game->py + game->pdy;
	if (game->cube->map[(int)(new_y)][(int)(new_x)] == '1'
		|| game->cube->map[(int)(new_y)][(int)(new_x)] == ' ')
		return (2);
	else
	{
		game->px = new_x;
		game->py = new_y;
		ray_tracer(game);
	}
	return (0);
}

int	move_back(t_game *game, float new_x, float new_y)
{
	new_x = game->px - game->pdx;
	new_y = game->py - game->pdy;
	if (game->cube->map[(int)(new_y)][(int)(new_x)] == '1'
		|| game->cube->map[(int)(new_y)][(int)(new_x)] == ' ')
		return (2);
	else
	{
		game->px = new_x;
		game->py = new_y;
		ray_tracer(game);
	}
	return (0);
}

int	move_left(t_game *game, float new_x, float new_y)
{
	new_x = game->px + game->pdy;
	new_y = game->py - game->pdx;
	if (game->cube->map[(int)(new_y)][(int)(new_x)] == '1'
		|| game->cube->map[(int)(new_y)][(int)(new_x)] == ' ')
		return (2);
	else
	{
		game->px = new_x;
		game->py = new_y;
		ray_tracer(game);
	}
	return (0);
}

int	move_right(t_game *game, float new_x, float new_y)
{
	new_x = game->px - game->pdy;
	new_y = game->py + game->pdx;
	if (game->cube->map[(int)(new_y)][(int)(new_x)] == '1'
		|| game->cube->map[(int)(new_y)][(int)(new_x)] == ' ')
		return (2);
	else
	{
		game->px = new_x;
		game->py = new_y;
		ray_tracer(game);
	}
	return (0);
}
