/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayatsyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 05:19:20 by ayatsyny          #+#    #+#             */
/*   Updated: 2016/11/26 20:17:36 by ayatsyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	if (c < 'a' || c > 'z')
		return (c);
	if (c < 0)
		return (c + 32);
	else
		return (c - 32);
}
