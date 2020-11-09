/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhideous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:40:21 by fhideous          #+#    #+#             */
/*   Updated: 2020/11/06 21:47:56 by fhideous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr;
	const unsigned char	*src_ptr;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr = (unsigned char*)dst;
	src_ptr = (unsigned char*)src;
	if (src_ptr < ptr)
		while (len--)
			*(ptr + len) = *(src_ptr + len);
	else
		while (len--)
			*ptr++ = *src_ptr++;
	return (dst);
}
