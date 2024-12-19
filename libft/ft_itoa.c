/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <mapareci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:12:09 by mapareci          #+#    #+#             */
/*   Updated: 2024/11/11 22:22:56 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	n_new;
	int			n_len;
	char		*str;

	n_new = n;
	n_len = ft_intlen(n_new);
	str = ft_calloc(n_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n_new < 0)
		n_new = -n_new;
	while (n_len > 0)
	{
		str[--n_len] = n_new % 10 + '0';
		n_new /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
