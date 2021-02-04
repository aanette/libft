/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:55:34 by aanette           #+#    #+#             */
/*   Updated: 2020/11/19 16:25:20 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	k;
	char			*su;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(su = (char*)(malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	while (s[k] != '\0')
		k++;
	if (start >= k)
	{
		su[i] = '\0';
		return (su);
	}
	while (i < len)
	{
		su[i] = s[start + i];
		i++;
	}
	su[i] = '\0';
	return (su);
}
