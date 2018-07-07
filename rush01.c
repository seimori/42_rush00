/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 08:06:18 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/07 08:42:27 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_draw(int x, int y, int xl, int yl)
{
	if ((x == 1 && y == 1) || (x == xl && y == yl))
	{
		ft_putchar('/');
	}
	else if ((x == xl && y == 1) || (x == 1 && y == yl))
	{
		ft_putchar('\\');
	}
	else if (x == 1 || y == 1 || x == xl || y == yl)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int xl, int yl)
{
	int x;
	int y;

	x = 1;
	y = 1;
	while (y <= yl)
	{
		while (x <= xl)
		{
			ft_draw(x, y, xl, yl);
			x++;
		}
		ft_putchar('\n');
		x = 1;
		y++;
	}
}
