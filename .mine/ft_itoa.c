/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:54:41 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 21:54:45 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_cntstr(long int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		x++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		x++;
	}
	return (x);
}

char	*ft_null(void)
{
	char	*p;

	p = ft_calloc(2, 1);
	p[0] = 48;
	return (p);
}

char	*ft_itoa(int n)
{
	int			x;
	long int	nb;
	long int	nm;
	char		*p;

	nb = n;
	if (nb == 0)
		return (p = ft_null());
	x = ft_cntstr(nb);
	p = ft_calloc((x + 1), sizeof(char));
	if (!p)
		return (NULL);
	if (nb < 0)
	{
		nb = nb * -1;
		p[0] = '-';
	}
	while (nb > 0)
	{
		nm = nb % 10;
		p[--x] = nm + 48;
		nb = nb / 10;
	}
	return (p);
}
