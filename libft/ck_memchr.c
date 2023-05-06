/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:25:15 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/04 19:41:49 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ck_memchr(void)
{
    char *test1 = "hello";
    char *test2 = "";
    char *test3 = "hel\0lo";
    char *test4 = "000";
    char *test5 = "12test";
    char *test6 = "\n\t";
    char *test7 = "\r\v\f";

    printf("ft_memchr  >>> testing...\n\n");

    printf("Test case 1: Search for 'l' in 'hello' (size 5)\n");
    printf("ft_memchr: %p\n", ft_memchr(test1, 'l', 5));
    printf("   memchr: %p\n", memchr(test1, 'l', 5));
    assert(ft_memchr(test1, 'l', 5) == memchr(test1, 'l', 5));
    printf("\n");

    printf("Test case 2: Search for 'k' in empty string (size 5)\n");
    printf("ft_memchr: %p\n", ft_memchr(test2, 'k', 5));
    printf("   memchr: %p\n", memchr(test2, 'k', 5));
    assert(ft_memchr(test2, 'k', 5) == memchr(test2, 'k', 5));
    printf("\n");

    printf("Test case 3: Search for 'o' in 'hel\\0lo' (size 6)\n");
    printf("ft_memchr: %p\n", ft_memchr(test3, 'o', 6));
    printf("   memchr: %p\n", memchr(test3, 'o', 6));
    assert(ft_memchr(test3, 'o', 6) == memchr(test3, 'o', 6));
    printf("\n");

    printf("Test case 4: Search for '0' in '000' (size 4)\n");
    printf("ft_memchr: %p\n", ft_memchr(test4, '0', 4));
    printf("   memchr: %p\n", memchr(test4, '0', 4));
    assert(ft_memchr(test4, '0', 4) == memchr(test4, '0', 4));
    printf("\n");

    printf("Test case 5: Search for 'l' in '12test' (size 0)\n");
    printf("ft_memchr: %p\n", ft_memchr(test5, 'l', 0));
    printf("   memchr: %p\n", memchr(test5, 'l', 0));
    assert(ft_memchr(test5, 'l', 0) == memchr(test5, 'l', 0));
    printf("\n");

    printf("Test case 6: Search for '\\t' in '\\n\\t' (size 12)\n");
    printf("ft_memchr: %p\n", ft_memchr(test6, '\t', 12));
    printf("   memchr: %p\n", memchr(test6, '\t', 12));
    assert(ft_memchr(test6, '\t', 12) == memchr(test6, '\t', 12));
    printf("\n");

    printf("Test case 7: Search for ' ' in '\\r\\v\\f' (size 3)\n");
    printf("ft_memchr: %p\n", ft_memchr(test7, ' ', 3));
    printf("   memchr: %p\n", memchr(test7, ' ', 3));
    assert(ft_memchr(test7, ' ', 3) == memchr(test7, ' ', 3));
    printf("\n");

printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}