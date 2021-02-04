/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:34:37 by aanette           #+#    #+#             */
/*   Updated: 2020/11/17 17:33:45 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t k;
	size_t j;

	i = 0;
	k = 0;
	j = 0;
	while (src[k])
		k++;
	if (dstsize == 0)
		return (k);
	while (dst[i] && i < dstsize)
		i++;
	if (i >= dstsize)
		return (k + dstsize);
	while ((src[j]) && ((i + j) < (dstsize - 1)))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + k);
}
