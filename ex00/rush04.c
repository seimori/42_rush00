/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 10:47:31 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/07 14:24:11 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_draw(int x_coord, int y_coord, int x, int y);

/*
** Prints a rectangle of width x and height y using chars.
** Used chars are : "/", "\", "*".
** x_coord and y_coord define cursor's position on an XY basis.
*/

void	rush(int x, int y)
{
	int x_coord;
	int y_coord;

	x_coord = 1;
	y_coord = 1;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('!');
	}
	else
	{
		while (y_coord <= y)
		{
			while (x_coord <= x)
			{
				ft_draw(x_coord, y_coord, x, y);
				x_coord++;
			}
			ft_putchar('\n');
			x_coord = 1;
			y_coord++;
		}
	}
}

/*
** ft_draw decides the character that needs to be printed
** at current cursor position (using x_coord and y_coord)
** and prints it.
*/

void	ft_draw(int x_coord, int y_coord, int x, int y)
{
	if ((x_coord == 1 && y_coord == 1)
			|| (x_coord == x && y_coord == y
				&& x != 1 && y != 1))
	{
		ft_putchar('A');
	}
	else if ((x_coord == x && y_coord == 1)
			|| (x_coord == 1 && y_coord == y))
	{
		ft_putchar('C');
	}
	else if (x_coord == 1 || y_coord == 1 || x_coord == x || y_coord == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
