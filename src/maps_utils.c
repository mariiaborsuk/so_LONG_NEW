/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborsuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:46:16 by mborsuk           #+#    #+#             */
/*   Updated: 2025/03/09 18:31:57 by mborsuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_map.h"
#include "maps_utils.h"
#include "map.h"
#include "../minilibx/mlx.h"

t_image_pointers	*get_image_pointers(void)
{
	static t_image_pointers	instance;

	return (&instance);
}

void	free_image_pointers(void *m_p)
{
	t_image_pointers	*image_pointers;

	image_pointers = get_image_pointers();
	if (image_pointers->image_wall)
		mlx_destroy_image(m_p, image_pointers->image_wall);
	if (image_pointers->image_space)
		mlx_destroy_image(m_p, image_pointers->image_space);
	if (image_pointers->image_player)
		mlx_destroy_image(m_p, image_pointers->image_player);
	if (image_pointers->image_collectible)
		mlx_destroy_image(m_p, image_pointers->image_collectible);
	if (image_pointers->image_locked_exit)
		mlx_destroy_image(m_p, image_pointers->image_locked_exit);
	if (image_pointers->image_unlocked)
		mlx_destroy_image(m_p, image_pointers->image_unlocked);
	if (image_pointers->danger)
		mlx_destroy_image(m_p, image_pointers->danger);
}

void	init_image_pointers(void *m_p)
{
	int					x;
	int					y;
	t_image_pointers	*im_p;

	im_p = get_image_pointers();
	im_p->image_wall = mlx_xpm_file_to_image(m_p, "./img/w.xpm", &x, &y);
	im_p->image_space = mlx_xpm_file_to_image(m_p, "./img/s.xpm", &x, &y);
	im_p->image_player = mlx_xpm_file_to_image(m_p, "./img/p.xpm", &x, &y);
	im_p->image_collectible = mlx_xpm_file_to_image(m_p, "./img/c.xpm", &x, &y);
	im_p->image_locked_exit = mlx_xpm_file_to_image(m_p, "./img/l.xpm", &x, &y);
	im_p->image_unlocked = mlx_xpm_file_to_image(m_p, "./img/un.xpm", &x, &y);
	im_p->danger = mlx_xpm_file_to_image(m_p, "./img/d.xpm", &x, &y);
}

int	expose_callback(void *param)
{
	t_expose_data	*data;

	data = (t_expose_data *)param;
	draw_map(data);
	return (0);
}
