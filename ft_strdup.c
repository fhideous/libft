/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhideous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 16:49:31 by fhideous          #+#    #+#             */
/*   Updated: 2020/11/09 19:35:07 by fhideous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strdup(const char *s1)
{
	char		*dup;
	const char	*ptr_s1;
	char		*ptr_dup;

	if (!(dup = (char *)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	ptr_dup = dup;
	ptr_s1 = s1;
	while (*ptr_s1)
		*dup++ = *ptr_s1++;
	*dup = '\0';
	return (ptr_dup);
}
