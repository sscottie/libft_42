/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscottie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:40:18 by sscottie          #+#    #+#             */
/*   Updated: 2019/04/24 21:47:43 by sscottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		k = 0;
		while (needle[k] != '\0')
		{
			if (i + k >= len || haystack[i + k] != needle[k])
				break ;
			k++;
		}
		if (needle[k] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
