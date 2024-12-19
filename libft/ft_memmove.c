/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <mapareci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:10:16 by mapareci          #+#    #+#             */
/*   Updated: 2024/10/24 13:35:30 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_revmemcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest + n - 1;
	s = (char *)src + n - 1;
	while (n-- > 0)
		*d-- = *s--;
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src && n > 0)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, (char *)src, n);
	else
		ft_revmemcpy(dest, src, n);
	return (dest);
}
