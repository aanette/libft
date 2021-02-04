/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:11:01 by aanette           #+#    #+#             */
/*   Updated: 2020/11/10 11:01:00 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*m;

	i = 0;
	if (!(m = malloc(nmemb * size)))
		return (NULL);
	else
	{
		while (i < nmemb * size)
		{
			((unsigned char*)m)[i] = 0;
			i++;
		}
	}
	return ((void*)m);
}
