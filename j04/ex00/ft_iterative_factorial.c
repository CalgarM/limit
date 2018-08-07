/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:02:29 by ychair            #+#    #+#             */
/*   Updated: 2018/08/07 11:35:58 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (nb > 1)
	{
		while (i > 1)
		{
			nb = nb * (i - 1);
			i--;
		}
		return (nb);
	}
	else
		return (1);
}
