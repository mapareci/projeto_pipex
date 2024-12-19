/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <mapareci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:39:42 by mapareci          #+#    #+#             */
/*   Updated: 2024/10/24 15:29:25 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	m;

	m = ft_strlen(s);
	while (m >= 0)
	{
		if (s[m] == (char)c)
			return ((char *)s + m);
		m--;
	}
	return (NULL);
}
