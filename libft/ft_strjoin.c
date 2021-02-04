/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:56:01 by aanette           #+#    #+#             */
/*   Updated: 2020/11/10 11:33:21 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	j;
	unsigned int	k;
	char			*sj;

	if ((!s1) || (!s2))
		return (NULL);
	k = ft_strlen((char*)s1);
	j = ft_strlen((char*)s2);
	sj = (char*)(malloc(sizeof(char) * (k + j + 1)));
	if (!sj)
		return (NULL);
	k = 0;
	while (s1[k] != '\0')
	{
		sj[k] = s1[k];
		k++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		sj[k + j] = s2[j];
		j++;
	}
	sj[j + k] = '\0';
	return (sj);
}
