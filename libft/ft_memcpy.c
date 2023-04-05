/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 01:15:44 by pnourish          #+#    #+#             */
/*   Updated: 2023/04/05 02:46:20 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	while (n > 0)
	{
		((unsigned char *)dst)[n - 1 ] = ((unsigned char *)src)[n - 1];
		n--;
	}
	return (dst);
}
