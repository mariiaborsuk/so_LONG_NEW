/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_extension.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborsuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:39:13 by mborsuk       #+  #+#    #+#             */
/*   Updated: 2025/03/01 12:08:54 by mborsuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_file_extension(char *filenane)
{
	int	i;

	i = 0;
	while (filenane[i])
		i++;
	if (i >= 4 && filenane[i - 1] == 'r' && filenane[i - 2] == 'e'
		&& filenane[i - 3] == 'b' && filenane[i - 4] == '.')
		return (1);
	write(1, "Error\n Wrong extension\n", 24);
	return (0);
}
