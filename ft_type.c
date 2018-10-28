/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:18:44 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/10/28 22:16:46 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sudoku(int **arr);
void	ft_putchar(char c);
void	ft_write(int **arr);

void	ft_type(int argc, char **argv)
{
	int		i;
	int		j;
	int		**arr;

	i = 1;
	arr = (int**)malloc(81 * sizeof(int));
	while (i < argc)
	{
		arr[i - 1] = (int*)malloc(9 * sizeof(int));
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				arr[i - 1][j] = 0;
			else
				arr[i - 1][j] = argv[i][j] - '0';
			j++;
		}
		i++;
	}
	ft_sudoku(arr);
	ft_write(arr);
}
