/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 19:56:13 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/10/28 23:25:30 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_find(int **arr, int *i, int *j);
int		ft_stroka(int **arr, int i, int j, int n);
int		ft_box(int **arr, int start_i, int start_j, int n);

int		ft_sudoku(int **arr)
{
	int		i;
	int		j;
	int		n;
	int		k;

	i = 0;
	k = 0;
	j = 0;
	n = 1;
	if (ft_find(arr, &i, &j) == 0)
		return (1);
	while (n < 10)
	{
		if (ft_stroka(arr, i, j, n) == 1
				&& (ft_box(arr, i - (i % 3), j - (j % 3), n)) == 1)
		{
			arr[i][j] = n;
			if (ft_sudoku(arr) == 1)
				k++;
			arr[i][j] = 0;
		}
		if (k == 2)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		n++;
	}
	return (0);
}
