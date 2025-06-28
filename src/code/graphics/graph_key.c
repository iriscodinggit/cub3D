/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irlozano <irlozano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:42:23 by misaac-c          #+#    #+#             */
/*   Updated: 2025/06/28 18:16:20 by irlozano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../cube.h"
#include "../../libs/libft/libft.h"
#include "../../libs/minilibx-linux/mlx.h"

int	ft_key_press(int keycode, t_game *game)
{
	if (keycode == 119 || keycode == 65362)
		game->front = 1;
	else if (keycode == 115 || keycode == 65364)
		game->back = 1;
	else if (keycode == 97)
		game->left = 1;
	else if (keycode == 100)
		game->right = 1;
	else if (keycode == 65361)
		game->r_left = 1;
	else if (keycode == 65363)
		game->r_right = 1;
	else if (keycode == 65307)
		game->exit = 1;
	return (0);
}

int	ft_key_release(int keycode, t_game *game)
{
	if (keycode == 119 || keycode == 65362)
		game->front = 0;
	else if (keycode == 115 || keycode == 65364)
		game->back = 0;
	else if (keycode == 97)
		game->left = 0;
	else if (keycode == 100)
		game->right = 0;
	else if (keycode == 65361)
		game->r_left = 0;
	else if (keycode == 65363)
		game->r_right = 0;
	else if (keycode == 65307)
		game->exit = 0;
	return (0);
}
