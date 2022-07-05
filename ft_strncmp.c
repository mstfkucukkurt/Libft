/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:52:37 by mkucukku          #+#    #+#             */
/*   Updated: 2022/02/03 13:58:39 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*x1;
	unsigned char	*x2;
	size_t			i;

	i = 0;
	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	while (i < n && (x1[i] || x2[i]))
	{
		if (x1[i] > x2[i])
			return (1);
		else if (x1[i] < x2[i])
			return (-1);
		i++;
	}
	return (0);
}
