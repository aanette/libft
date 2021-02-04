/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:32:54 by aanette           #+#    #+#             */
/*   Updated: 2020/11/10 12:27:25 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (!(*needle) || (haystack == needle))
		return ((char*)haystack);
	while ((len > i) && (haystack[i] != '\0'))
	{
		k = 0;
		if (haystack[i] == needle[k])
		{
			while ((needle[k] == haystack[i + k]) && ((i + k) < len))
			{
				k++;
				if (needle[k] == '\0')
					return ((char*)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
