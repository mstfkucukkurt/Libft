/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:48:54 by mkucukku          #+#    #+#             */
/*   Updated: 2022/02/02 11:45:24 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *kelime, int s, size_t length)
{
	char	*ikinci_kelime;
	size_t	i;

	i = 0;
	ikinci_kelime = (char *)kelime;
	while (i < length)
	{
		ikinci_kelime[i] = s;
		i++;
	}
	return (ikinci_kelime);
}
