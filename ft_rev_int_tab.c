/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimiszki <wimiszki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:39:00 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/05 13:47:41 by wimiszki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};  // Przykładowa tablica
	int	size;
	int	i;

	size = sizeof(tab) / sizeof(tab[0]);  // Obliczanie rozmiaru tablicy

	printf("Oryginalna tablica: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	ft_rev_int_tab(tab, size);  // Odwracanie tablicy

	printf("Odwrócona tablica: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");

	return (0);
}