/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:27:16 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/03 15:34:39 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ft_swap(int *a, int *b)
{
  int temp; 
  temp = *a;
  *a = *b;
  *b = temp;
}
