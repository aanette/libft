/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:21:53 by aanette           #+#    #+#             */
/*   Updated: 2020/11/10 11:15:11 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		k;
	char	*str2;

	i = 0;
	k = 0;
	while (str[k] != '\0')
		k++;
	str2 = (char*)(malloc(sizeof(char) * (k + 1)));
	if (!str2)
		return (NULL);
	while (i != k)
	{
		str2[i] = str[i];
		i++;
	}
	str2[k] = '\0';
	return (str2);
}
