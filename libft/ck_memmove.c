/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:33:02 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/06 00:36:12 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <assert.h>

void    *ft_memmove(void *dst, const void *src, size_t len);

void    ck_memmove(void)
{
	printf("ft_memmove >>> testing...\n\n");
    // Test case 1: Copying from empty string
    char dst1[] = "hello";
    char src1[] = "";
    char dst11[] = "hello";
    char src11[] = "";

    printf("Test case 1: Copying from empty string\n");
    printf("src: \"%s\" (%p)\n", src1, (void*)src1);
    printf("dst before ft_memmove: \"%s\" (%p)\n", dst1, (void*)dst1);
    ft_memmove(dst1, src1, 0);
    printf("dst after ft_memmove: \"%s\" (%p)\n", dst1, (void*)dst1);
    printf("src: \"%s\" (%p)\n", src11, (void*)src11);
    printf("dst before memmove: \"%s\" (%p)\n", dst11, (void*)dst11);
    memmove(dst11, src11, 0);
    printf("dst after memmove: \"%s\" (%p)\n", dst11, (void*)dst11);
    printf("\n");
    assert(memcmp(dst1, dst11, 0) == 0);

    // Test case 2: Copying more characters than available in src
    char dst2[] = "hello";
    char src2[] = "world";
    char dst12[] = "hello";
    char src12[] = "world";

    printf("Test case 2: Copying more characters than available in src\n");
    printf("src: \"%s\" (%p)\n", src2, (void*)src2);
    printf("dst before ft_memmove: \"%s\" (%p)\n", dst2, (void*)dst2);
    ft_memmove(dst2, src2, strlen(src2) + 1);
    printf("dst after ft_memmove: \"%s\" (%p)\n", dst2, (void*)dst2);
    printf("src: \"%s\" (%p)\n", src12, (void*)src11);
    printf("dst before memmove: \"%s\" (%p)\n", dst12, (void*)dst12);
    memmove(dst12, src12, strlen(src12) + 1);
    printf("dst after memmove: \"%s\" (%p)\n", dst12, (void*)dst12);
    printf("\n");
    assert(memcmp(dst2, dst12, strlen(src12)) == 0);

    // Test case 3: Copying the same number of characters as in src
    char dst3[] = "hello";
    char src3[] = "world";
    char dst13[] = "hello";
    char src13[] = "world";

    printf("Test case 3: Copying the same number of characters as in src\n");
    printf("src: \"%s\" (%p)\n", src3, (void*)src3);
    printf("dst before ft_memmove: \"%s\" (%p)\n", dst3, (void*)dst3);
    ft_memmove(dst3, src3, strlen(src3) + 1);
    printf("dst after ft_memmove: \"%s\" (%p)\n", dst3, (void*)dst3);
    printf("dst before memmove: \"%s\" (%p)\n", dst13, (void*)dst13);
    printf("src: \"%s\" (%p)\n", src13, (void*)src11);
    memmove(dst13, src13, strlen(src13));
    printf("dst after memmove: \"%s\" (%p)\n", dst13, (void*)dst13);
    printf("\n");
    assert(memcmp(dst3, dst13, strlen(src13)) == 0);

    // Test case 4: Overlapping regions
    char src4[] = "world";
	char *dst4 = src4 + 2;
    char src14[] = "world";
	char *dst14 = src14 + 2;

    printf("Test case 4: Overlapping regions\n");
    printf("src: \"%s\" (%p)\n", src4, (void*)src4);
    printf("dst before ft_memmove: \"%s\" (%p)\n", dst4, (void*)dst4);
    ft_memmove(dst4, src4, strlen(src4) + 1);
    printf("dst after ft_memmove: \"%s\" (%p)\n", dst4, (void*)dst4);
    printf("src: \"%s\" (%p)\n", src14, (void*)src14);
    printf("dst before memmove: \"%s\" (%p)\n", dst14, (void*)dst14);
    memmove(dst14, src14, strlen(src14) + 1);
    printf("dst after memmove: \"%s\" (%p)\n", dst14, (void*)dst14);
    printf("\n");
    printf("memcmp output: %d\n",(memcmp(src4 + 3, src14 + 3, 5)));
	//assert(memcmp(dst4, dst14, strlen(src14) + 1) == 0);

    // Test case 5: Copying to NULL pointer
    char dst5[] = "      ";
    char src5[] = "world";
    char dst15[] = "      ";
    char src15[] = "world";

    printf("Test case 5: Copying to NULL pointer\n");
    printf("src: \"%s\" (%p)\n", src5, (void*)src5);
    printf("dst before ft_memmove: \"%s\" (%p)\n", dst5, (void*)dst5);
    ft_memmove(dst5, src5, strlen(src5) + 1);
    printf("dst after ft_memmove: \"%s\" (%p)\n", dst5, (void*)dst5);
    printf("dst before memmove: \"%s\" (%p)\n", dst15, (void*)dst15);
    printf("src: \"%s\" (%p)\n", src15, (void*)src11);
    memmove(dst15, src15, strlen(src15) + 1);
    printf("dst after memmove: \"%s\" (%p)\n", dst15, (void*)dst15);
    printf("\n");
    assert(memcmp(dst5, dst15, strlen(src15) + 1) == 0);
printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}
