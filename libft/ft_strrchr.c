/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:47:46 by aanette           #+#    #+#             */
/*   Updated: 2020/11/17 17:35:01 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (((unsigned char)c) == '\0')
		return (&((char*)s)[i]);
	while (i != 0)
	{
		i--;
		if (((unsigned char*)s)[i] == ((unsigned char)c))
			return (&((char*)s)[i]);
	}
	return (NULL);
}
