/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouchaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 16:48:10 by obouchaa          #+#    #+#             */
/*   Updated: 2018/08/04 19:17:55 by obouchaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_w(int i, int j, int k);
void	ft_print_comb(void);

void	ft_w(int i, int j, int k)
{
	if (((i != j && i != k) && j != k))
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
		if (!((i == '7' && j == '8') && k == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = '0';
	while (i <= '7')
	{
		j = '1';
		while (j <= '8')
		{
			k = '2';
			while (k <= '9')
			{
				ft_w(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
