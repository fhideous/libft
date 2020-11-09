/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhideous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:31:41 by fhideous          #+#    #+#             */
/*   Updated: 2020/11/06 21:49:21 by fhideous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		src_len;
	size_t		dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if ((dstsize > dst_len))
	{
		if (dstsize - dst_len <= src_len)
		{
			ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
			dst[dstsize - 1] = '\0';
		}
		else
		{
			ft_memcpy(dst + dst_len, src, src_len + 1);
			return (dst_len + src_len);
		}
		return (dst_len + src_len);
	}
	return (dstsize + src_len);
}
