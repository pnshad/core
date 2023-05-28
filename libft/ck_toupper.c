/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_toupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:09:21 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/14 18:08:57 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "my_libmy.h"

// Declare a function that will be used only within this file
static void run_ft_toupper_test_case(int c, char *description);

// Define a function that will run multiple test cases for ft_toupper
void ck_toupper(void)
{
    // Print a message to indicate that we're starting the tests
    printf("ft_toupper  >>> testing...\n\n");

    // Run several test cases, each with a different input character and description
    run_ft_toupper_test_case('L', "1: uppercase letter");
    run_ft_toupper_test_case('z', "2: lowercase letter");
    run_ft_toupper_test_case('0xE9', "3: character");
    run_ft_toupper_test_case('7', "4: digit");
    run_ft_toupper_test_case(' ', "5: whitespace character");
    run_ft_toupper_test_case('\t', "6: Tabulation");

    // Print a message to indicate that all test cases passed successfully
    printf("function passed all test cases successfully!");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}

// Define a function that will run a single test case for ft_toupper
static void run_ft_toupper_test_case(int c, char *description)
{
	char out_ft;
	char out_sy;
	
	out_ft = ft_toupper(c);
	out_sy = toupper(c);
    // Print the description and input character if possible as ASCII, if not as HEX
    if (isprint(c))
	{
        printf("Test case %s '%c'\n", description, (char)c);
    // Print the result of ft_toupper and toupper for the input character
    	printf("ft_toupper: '%c'\n", out_ft);
    	printf("   toupper: '%c'\n", out_sy);
	}
    else
    {
		printf("Test case %s '0x%02X'\n", description, (unsigned char)c);
    // Print the result of ft_toupper and toupper for the input character
    	printf("ft_toupper: '0x%02X'\n", out_ft);
    	printf("   toupper: '0x%02X'\n", out_sy);
	}
    // Use an assertion to verify that the results of ft_toupper and toupper are the same
    assert(out_ft == out_sy);

    // Print a blank line to separate this test case from the next one
    printf("\n");
}
