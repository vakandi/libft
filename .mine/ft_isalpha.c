/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:57:48 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 21:57:49 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int b)
{
	if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
		return (1);
	return (0);
}
