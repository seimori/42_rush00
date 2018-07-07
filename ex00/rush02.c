/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsaltel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 08:56:51 by vsaltel           #+#    #+#             */
/*   Updated: 2018/07/07 15:32:22 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(int x, int y, int x_index, int y_index)
{
	if ((x_index == 1 && y_index == 1) || (x_index == x && y_index == 1))
		ft_putchar('A');
	else if ((x_index == 1 && y_index == y) || (x_index == x && y_index == y))
		ft_putchar('C');
	else if (x_index == 1 || y_index == 1 || x_index == x || y_index == y)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int y_index;
	int x_index;

	y_index = 1;
	x_index = 1;
	while (y_index <= y)
	{
		while (x_index <= x)
		{
			print(x, y, x_index, y_index);
			x_index++;
		}
		ft_putchar('\n');
		y_index++;
		x_index = 1;
	}
}
