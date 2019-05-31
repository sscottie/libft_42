/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscottie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 22:09:14 by sscottie          #+#    #+#             */
/*   Updated: 2019/04/29 01:41:28 by sscottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int					negative;
	unsigned long long	res;

	res = 0;
	negative = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\f' || *str == '\v' || *str == '\r')
		++str;
	if (*str == '-' && ++str)
		negative = -1;
	else if (*str == '+')
		++str;
	while ('0' <= *str && *str <= '9')
		res = res * 10 + ((unsigned long long)*str++ - 48);
	if (res > 9223372036854775807 && negative == 1)
		return (-1);
	else if (res > 9223372036854775807 && negative == -1)
		return (0);
	return ((int)res * negative);
}
int main()
{
	printf( "%d\n", ft_atoi("2222222222222222222"));
	printf( "%d\n", atoi("2222222222222222222"));
	return (0);
}