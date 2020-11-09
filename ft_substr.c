/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhideous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:06:46 by fhideous          #+#    #+#             */
/*   Updated: 2020/11/09 19:36:36 by fhideous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub_str;

	if (s == NULL)
		return (NULL);
	if (start >= len)
	{
		start = 0;
		len = 0;
	}
	sub_str = (char *)malloc(len + 1);
	if (!sub_str)
		return (NULL);
	ft_memcpy(sub_str, s + start, len);
	*(sub_str + len) = '\0';
	return (sub_str);
}
