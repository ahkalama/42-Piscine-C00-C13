/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spirnaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 00:44:04 by spirnaz           #+#    #+#             */
/*   Updated: 2021/12/01 00:48:20 by spirnaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	sayac;

	sayac = 0;
	while (str[sayac] != '\0')
	{
		sayac++;
	}
	return (sayac);
}
