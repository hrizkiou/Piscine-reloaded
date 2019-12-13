/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrizkiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:04:08 by hrizkiou          #+#    #+#             */
/*   Updated: 2019/04/06 15:25:30 by hrizkiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		{
			c++;
		}
		i++;
	}
	return (c);
}
