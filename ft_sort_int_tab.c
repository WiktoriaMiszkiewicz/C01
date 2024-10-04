/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:39:06 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/04 17:23:06 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ft_sort_int_tab(int *tab, int size)
{
  int i;
  int j;
  int temp_arr;

  for(i = 0; i < size - 1; i++) 
  {
    for (j = 0; j <size -1; j++)
    {
      if (tab[j] > tab[j + 1])
      {
        temp_arr = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = temp_arr;
      }
    }
  }
}
