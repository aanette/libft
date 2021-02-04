/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanette <aanette@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:57:05 by aanette           #+#    #+#             */
/*   Updated: 2020/11/17 15:40:47 by aanette          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_s(long int nbr)
{
	if (nbr >= 0)
		return (nbr);
	else
		return (-nbr);
}

static int		ft_l(long int nbr)
{
	int l;

	if (nbr <= 0)
		l = 1;
	else
		l = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		l++;
	}
	return (l);
}

char			*ft_itoa(int n)
{
	char	*s;
	int		k;
	int		i;

	if (n >= 0)
		i = 1;
	else
		i = -1;
	k = ft_l(n);
	s = (char*)(malloc(sizeof(char) * (k + 1)));
	if (!s)
		return (NULL);
	s[k] = '\0';
	k--;
	while (k >= 0)
	{
		s[k] = '0' + ft_s(n % 10);
		n = ft_s(n / 10);
		k--;
	}
	if (i == -1)
		s[0] = '-';
	return (s);
}
