/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrizkiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:58:58 by hrizkiou          #+#    #+#             */
/*   Updated: 2019/04/06 15:18:31 by hrizkiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		l;

	l = 0;
	while (src[l] != '\0')
		l++;
	str = (char*)malloc(sizeof(*str) * (l + 1));
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}
