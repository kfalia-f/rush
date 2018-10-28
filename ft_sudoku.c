/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 19:56:13 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/10/28 21:53:03 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find(int **arr, int *i, int *j);
int		ft_stroka(int **arr, int i, int j, int n);
int		ft_box(int **arr, int start_i, int start_j, int n);

int		ft_sudoku(int **arr)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	n = 1;
	if (ft_find(arr, &i, &j) == 0)
		return (1);
	while (n < 10)
	{
		if (ft_stroka(arr, i, j, n) == 1  && (ft_box(arr, i - (i % 3), j - (j % 3), n)) == 1 )
		{
			arr[i][j] = n;
			if (ft_sudoku(arr) == 1)
				return (1);
			arr[i][j] = 0;
		}
		n++;
	}
	return (0);
}
