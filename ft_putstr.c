/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:55:07 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/04 15:20:47 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putstr(char *str)
{
  int length;
  length = 0;
  while (str[length])
  {
    length++;
  }
  write(1,str,length);
}