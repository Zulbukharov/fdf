/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <azulbukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 19:49:43 by azulbukh          #+#    #+#             */
/*   Updated: 2018/04/18 22:41:44 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "fdf.h"

int		deal_key(int key, void *param)
{
	// mlx_pixel_put(mlx_ptr, win_ptr, 10, 10, 0xFFFFFF);
	printf("%d", (int)param);
	ft_putchar('X');
	exit(1);
	// return (0);
}

int		main(int ac, char **av)
{
	t_map map;
	char *line;
	int fd;
	int i;

	if (ac <= 1)
		return (0);
	if (!(fd = open(av[1], O_RDONLY)))
		return (0);
	line = NULL;
	while (get_next_line(fd, &line) == 1)
	{
		i = 0;
		while (line[i])
		{
			if 
		}
	}
	// void *mlx_ptr;
	// void *win_ptr;
	// int x;
	// int y;
	
	// x = 100;
	// y = 100;	
	// mlx_ptr = mlx_init();
	// win_ptr = mlx_new_window(mlx_ptr, 500, 500, "//MARSHALL");
	// while (y < 200)
	// {
	// 	mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFFFFFF);
	// 	y++;
	// }
	// mlx_key_hook(win_ptr, deal_key, (void *)53);
	// mlx_loop(mlx_ptr);
	return (0);
}
