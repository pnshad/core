/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strrchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:25:17 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 02:50:25 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Declare the function run_strrchr_test_case
static void run_strrchr_test_case(char *qry ,char tgt, char *des);

// Define the function ck_strrchr
void    ck_strrchr(void)
{
    // Initialize the test string
    char qry[] = "Hello, \tworld!";

    // Print a message indicating the start of the ft_strrchr testing
    printf("\nft_strrchr >>> testing...\n\n");

    // Test case 1: Searching for a character in the middle of a string
    run_strrchr_test_case(qry , 'w', "1: Searching for a character in the middle of a string\n");

    // Test case 2: Searching for a character in the beginning of a string
    run_strrchr_test_case(qry , 'H', "2: Searching for a character in the beginning of a string\n");

    // Test case 3: Searching for a character at the end of a string
    run_strrchr_test_case(qry , '!', "3: Searching for a character at the end of a string");

    // Test case 4: Searching for a character that does not appear in the string
    run_strrchr_test_case(qry , 'a', "4: Searching for a character that does not appear in the string\n");

    // Test case 5: Searching for a null character
    run_strrchr_test_case(qry , '\0', "5: Searching for a null character");

    // Test case 6: Searching for a character that appears multiple times in the string
    run_strrchr_test_case(qry , 'o', "6: Searching for a character that appears multiple times in the string");

    // Test case 7: Searching for an unprintable charachter in the string
    run_strrchr_test_case(qry , '\t', "7: Searching for an unprintable charachter in the string");

    // Print a message indicating that all test cases have passed
    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}

// Define the function run_strrchr_test_case
static void run_strrchr_test_case(char *qry ,char tgt, char *des)
{
    // Print a message indicating the current test case and the query and target characters
    printf("Test case %s", des);
    printf("\n           Query: ");
    my_printa(qry, strlen(qry) + 1, sizeof(char), "%c");
    printf("\nSearch character: ");
    my_printa(&tgt, 1, sizeof(char), "%c");

    // Print the result of ft_strrchr and strrchr, as well as their indices and contents
    printf("\n       ft_memchr: [%p]", ft_strrchr(qry, tgt));
    printf("\n        ft_index: [%ld]", ((ft_strrchr(qry, tgt)) - qry));
    printf("\n       ft_result: \"%s\"", ft_strrchr(qry, tgt));
    printf("\n       sy_memchr: [%p]", strrchr(qry, tgt));
    printf("\n        sy_index: [%ld]", ((strrchr(qry, tgt)) - qry));
    printf("\n       sy_result: \"%s\"", strrchr(qry, tgt));

    // Check if ft_strrchr and strrchr return the same result, and print a message indicating the result
    assert(ft_strrchr(qry, tgt) == strrchr(qry, tgt));
    printf("\n\n");
}
