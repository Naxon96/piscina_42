/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:59:49 by igarcia-          #+#    #+#             */
/*   Updated: 2022/02/15 19:41:29 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		write(1, ", ", 2);
	}
}

void	iniciar(char *a, char *b, char *c, char *d)
{
	*a = '0';
	*b = '0';
	*c = '0';
	*d = '1';
}

void	primero(char *a, char *b, char *c, char *d)
{
	(*a)++;
	*b = '0';
	*c = *a;
	*d = *b + 1;
}

void	segundo(char *a, char *b, char *c, char *d)
{
	(*b)++;
	*c = *a;
	*d = *b + 1;
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	iniciar(&a, &b, &c, &d);
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_putchar (a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			segundo(&a, &b, &c, &d);
		}
		primero(&a, &b, &c, &d);
	}
}
