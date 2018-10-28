/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prov.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 22:35:24 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/10/28 23:10:33 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_box2(int **arr, int i, int j, int n);
int		ft_stroka2(int **arr, int i, int j, int n);

int		ft_prov(int **arr)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (ft_box2(arr, i - (i % 3), j - (j % 3), arr[i][j]) == 0
					|| ft_stroka2(arr, i, j, arr[i][j]) == 0)
				k++;
			j++;
		}
		i++;
	}
	if (k != 0)
		return (0);
	return (1);
}
