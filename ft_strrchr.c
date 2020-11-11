/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhideous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:24:31 by fhideous          #+#    #+#             */
/*   Updated: 2020/11/11 15:44:23 by fhideous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	int		len;

	len = ft_strlen(s);
	ptr_s = (char*)s + len;
	while (len-- && *ptr_s != c)
	{
		ptr_s--;
	}
	if (*ptr_s == c)
		return (ptr_s);
	return (0);
}
