/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscottie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:17:12 by sscottie          #+#    #+#             */
/*   Updated: 2019/04/24 21:34:00 by sscottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	k;
	const char		*str;

	str = haystack;
	if (!*needle)
		return ((char*)str);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = 1;
			while (needle[k] != '\0' && haystack[i + k] == needle[k])
				k++;
			if (needle[k] == '\0')
				return ((char*)&str[i]);
		}
		i++;
	}
	return (0);
}
