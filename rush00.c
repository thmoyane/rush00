/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:18:29 by thmoyane          #+#    #+#             */
/*   Updated: 2020/07/15 12:38:16 by thmoyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

extern void ft_putchar(char c);

void rush(int x, int y){
	int i;
	int in;
	i = 0;
	curr = 0;

	while (i < y){
		while (in < x){
			if ((in == 0||in == (x-1))&&(i == 0||i == (y-1)))
			{
				ft_putchar('o');
			}
			else if ((i == 0||i == (y-1)))
				{
				ft_putchar('-');
				}
				else if (in == 0||in == (x-1))
				{
				ft_putchar('|');
				}
				else 
				{
				ft_putchar(' ');
			}
			in++;
		}
		ft_putchar('\n');
		in = 0;
		i++;
	}
}
