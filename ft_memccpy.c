/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhideous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:53:10 by fhideous          #+#    #+#             */
/*   Updated: 2020/11/06 21:46:59 by fhideous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src,
	int c, size_t len)
{
	unsigned char		*ptr;
	const unsigned char *src_ptr;

	ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	while (len--)
	{
		*ptr = *src_ptr;
		if (*src_ptr == (unsigned char)c)
			return (++ptr);
		ptr++;
		src_ptr++;
	}
	return (NULL);
}
