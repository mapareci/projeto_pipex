/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <mapareci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:24:17 by mapareci          #+#    #+#             */
/*   Updated: 2024/11/11 22:24:12 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	destsize;

	srcsize = ft_strlen((char *)src);
	destsize = ft_strlen(dst);
	if (size < destsize)
		return (srcsize + size);
	else
	{
		dst = dst + destsize;
		ft_strlcpy(dst, src, size - destsize);
		return (srcsize + destsize);
	}
}
