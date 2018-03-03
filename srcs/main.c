/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 13:33:55 by mdeville          #+#    #+#             */
/*   Updated: 2018/03/03 22:57:52 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <mlx.h>
#include "ft_graphics.h"
#include "fdf.h"
#include "mlx_keycode.h"
#include "ft_printf.h"

int		main()
{
	t_mlx	mlx;
	t_point	a = {0, 0};
	t_point	b = {1000, 1000};
	t_pixel	blue = {0, 255, 0, 255};

	if (!init(&mlx, WIDTH, HEIGHT, "FdF") || !init_hooks(&mlx))
		return (0);
	put_line(mlx.img, a, b, blue);
	mlx_loop(mlx.ptr);
	return (0);
}
