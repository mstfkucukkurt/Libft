/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:24:27 by mkucukku          #+#    #+#             */
/*   Updated: 2022/02/06 14:28:03 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src)
		return (dest);
	else if (dest < src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		d = (unsigned char *)dest;
		s = (const unsigned char *)src;
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
