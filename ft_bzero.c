/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouhaouas <ouhaouas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:21:03 by ouhaouas          #+#    #+#             */
/*   Updated: 2024/11/23 15:25:39 by ouhaouas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
{
	char	*string;
	size_t	d;

	string = (char *)s;
	d = 0;
	while (d < n)
	{
		string[d] = 0;
		d++;
	}
}
