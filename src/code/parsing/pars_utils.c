/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irlozano <irlozano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 18:15:59 by irlozano          #+#    #+#             */
/*   Updated: 2025/06/28 18:16:00 by irlozano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../cube.h"
#include "../../libs/libft/libft.h"

int	big_condition(char *line)
{
	if (!ft_strncmp("NO ", line, 3) || !ft_strncmp("EA ", line, 3)
		|| !ft_strncmp("WE ", line, 3)
		|| !ft_strncmp("SO ", line, 3)
		|| ft_strncmp("F ", line, 2) == 0
		|| ft_strncmp("C ", line, 2) == 0
		|| line[0] == '\n')
		return (1);
	return (0);
}

int	cal_len_color(char *line, int *i)
{
	int	len;

	len = 0;
	while (line[*i] != ',' && line[*i])
	{
		if (line[*i] == ' ' || line[*i] == '\n')
			(*i)++;
		else
		{
			(*i)++;
			len++;
		}
	}
	return (len);
}

