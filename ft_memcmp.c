/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhideous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:23:44 by fhideous          #+#    #+#             */
/*   Updated: 2020/11/09 19:31:07 by fhideous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int							ft_memcmp(const void *s1,
		const void *s2, size_t n)
{
	const unsigned char		*ptr1;
	const unsigned char		*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (n--)
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		else
		{
			ptr1++;
			ptr2++;
		}
	return (0);
}
