/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:56:23 by aanette           #+#    #+#             */
/*   Updated: 2020/11/13 20:17:35 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;

	s2 = (char*)s1;
	if (!s1 || !set || !s2)
		return (NULL);
	while (*s2 && ft_strchr(set, *s2))
		s2++;
	i = ft_strlen((char*)s2);
	while (ft_strrchr(set, s2[i]) && i > 0)
		i--;
	return (ft_substr(s2, 0, i + 1));
}
