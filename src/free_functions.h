/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_functions.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborsuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:45:21 by mborsuk       #+  #+#    #+#             */
/*   Updated: 2025/03/01 12:06:56 by mborsuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_FUNCTIONS_H
# define FREE_FUNCTIONS_H
# include "map.h"

void	free_lib(t_expose_data *data);

void	free_map(t_map *map);

int		destroy_window(void *m_p);

int		expose_callback(void *param);

void	free_substrings(char **substrings);

#endif
