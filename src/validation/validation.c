/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborsuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:42:04 by mborsuk       #+  #+#    #+#             */
/*   Updated: 2025/03/01 12:09:37 by mborsuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validation.h"

int	map_val(char **ar, char *filename)
{
	if (!check_file_extension(filename))
		return (0);
	if (!check_rectangular(ar))
		return (0);
	if (!check_allowed_symbols(ar))
		return (0);
	if (!check_player_or_exit_count(ar, 'P') || !check_player_or_exit_count(ar,
			'E'))
		return (0);
	if (!check_borders(ar) || !check_sides(ar))
		return (0);
	if (!check_collectibles(ar))
		return (0);
	if (!check_ways(ar))
		return (0);
	return (1);
}
