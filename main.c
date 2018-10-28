/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 19:52:30 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/10/28 22:17:01 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_kl(int argc, char **argv);
void	ft_type(int argc, char **argv);

int     main(int argc, char **argv)
{
	if (ft_kl(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_type(argc, argv);
	return (0);
}   
