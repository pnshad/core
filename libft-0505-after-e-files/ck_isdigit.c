/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:01:37 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/04 19:32:03 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_isdigit(void)
{
    printf("ft_isdigit  >>> testing...\n\n");

    printf("Test case 1: uppercase letter 'L'\n");
    printf("ft_isdigit: %d\n", ft_isdigit('L'));
    printf("   isdigit: %d\n", isdigit('L'));
    assert(ft_isdigit('L') == isdigit('L'));
    printf("\n");

    printf("Test case 2: lowercase letter 'z'\n");
    printf("ft_isdigit: %d\n", ft_isdigit('z'));
    printf("   isdigit: %d\n", isdigit('z'));
    assert(ft_isdigit('z') == isdigit('z'));
    printf("\n");

    printf("Test case 3: character 'è'\n");
    printf("ft_isdigit: %d\n", ft_isdigit('0xE9'));
    printf("   isdigit: %d\n", isdigit('0xE9'));
    assert(ft_isdigit('0xE9') == isdigit('0xE9'));
    printf("\n");

    printf("Test case 4: digit '7'\n");
    printf("ft_isdigit: %d\n", ft_isdigit('7'));
    printf("   isdigit: %d\n", isdigit('7'));
    assert(ft_isdigit('7') == isdigit('7'));
    printf("\n");

    printf("Test case 5: whitespace character ' '\n");
    printf("ft_isdigit: %d\n", ft_isdigit(' '));
    printf("   isdigit: %d\n", isdigit(' '));
    assert(ft_isdigit(' ') == isdigit(' '));
    printf("\n");

    printf("Test case 6: punctuation '\\t'\n");
    printf("ft_isdigit: %d\n", ft_isdigit('\t'));
    printf("   isdigit: %d\n", isdigit('\t'));
    assert(ft_isdigit('\t') == isdigit('\t'));
    printf("\n");

printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}
