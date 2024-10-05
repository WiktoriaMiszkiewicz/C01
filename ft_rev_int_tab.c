/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimiszki <wimiszki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:39:00 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/05 13:42:44 by wimiszki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	reversed_tab[size];
	int	i;

	i = 0;
	while (i < size)
	{
		reversed_tab[i] = tab[size - 1 - i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = reversed_tab[i];
		i++;
	}
}

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 7}; // Przykładowa tablica
	int size;
	int i;

	size = sizeof(tab) / sizeof(tab[0]); // Obliczanie rozmiaru tablicy

	printf("Oryginalna tablica: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	ft_rev_int_tab(tab, size); // Odwracanie tablicy

	printf("Odwrócona tablica: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	return (0);
}