/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:39:00 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/04 16:58:06 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ft_rev_int_tab(int *tab, int size)
{
  int reversed_tab[size];
  int i;

  for (i = 0; i < size; i++)
  {
    reversed_tab[i] = tab[size -1 - i];
  }

  for (int i = 0; i < size; i++) 
  {
    tab[i] = reversed_tab[i];
  }
}
