/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkucukku <mkucukku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:29:02 by mkucukku          #+#    #+#             */
/*   Updated: 2022/02/08 12:16:28 by mkucukku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*yer;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	yer = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (yer == NULL)
		return (NULL);
	while (s1[i])
	{
		yer[i] = s1[i];
		i++;
	}
	while (s2[j])
		yer[i++] = s2[j++];
	yer[i] = '\0';
	return (yer);
}
