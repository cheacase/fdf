/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayatsyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 02:46:14 by ayatsyny          #+#    #+#             */
/*   Updated: 2016/12/06 02:50:23 by ayatsyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *s)
{
	char *p;

	p = s;
	while (*p)
	{
		if (*p >= 'A' && *p <= 'Z')
			*p += 32;
		p++;
	}
	return (s);
}
