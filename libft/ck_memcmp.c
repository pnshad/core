/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:42:28 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/05 16:32:11 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_memcmp(void)
{
    char str1[] = "Hello";
    char str2[] = "this \n adds a new line";
    char str3[] = "";
    char str4[] = "this has NULL \0 in it";
    int dig1[] = {1, 2, 3, 4, 5};
    int dig2[] = {1, 2, 3, 0, 0};

    printf("ft_memcmp >>> testing...\n\n");

    printf("Test case 1: comparing 'Hello' with itself\n");
    printf("ft_memcmp: %d\n", ft_memcmp(str1, str1, strlen(str1)));
    printf("   memcmp: %d\n", memcmp(str1, str1, strlen(str1)));
    assert(ft_memcmp(str1, str1, strlen(str1)) == memcmp(str1, str1, strlen(str1)));
    printf("\n");

    printf("Test case 2: comparing 'Hello' with 'this \\n adds a new line'\n");
    printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, strlen(str1)));
    printf("   memcmp: %d\n", memcmp(str1, str2, strlen(str1)));
    assert(ft_memcmp(str1, str2, strlen(str1)) == memcmp(str1, str2, strlen(str1)));
    printf("\n");

    printf("Test case 3: comparing an empty string with 'this has NULL \\0 in it'\n");
    printf("ft_memcmp: %d\n", ft_memcmp(str3, str4, strlen(str3)));
    printf("   memcmp: %d\n", memcmp(str3, str4, strlen(str3)));
    assert(ft_memcmp(str3, str4, strlen(str3)) == memcmp(str3, str4, strlen(str3)));
    printf("\n");

    printf("Test case 4: comparing 'this has NULL \\0 in it' with 'Hello'\n");
    printf("ft_memcmp: %d\n", ft_memcmp(str4, str1, strlen(str4)));
    printf("   memcmp: %d\n", memcmp(str4, str1, strlen(str4)));
    assert(ft_memcmp(str4, str1, strlen(str4)) == memcmp(str4, str1, strlen(str4)));
    printf("\n");

    printf("Test case 5: comparing {1, 2, 3, 4, 5} with {1, 2, 3, 0, 0}\n");
    printf("ft_memcmp: %d\n", ft_memcmp(dig1, dig2, sizeof(dig1)));
    printf("   memcmp: %d\n", memcmp(dig1, dig2, sizeof(dig1)));
    assert(ft_memcmp(dig1, dig2, sizeof(dig1)) == memcmp(dig1, dig2, sizeof(dig1)));
    printf("\n");

printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}
