/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:04:26 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/03 21:19:19 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ck_calloc(void)
{
	size_t	count;
	size_t	size;
	char	*str_ft;
	char	*str_sy;
	int		i;

	printf("ft_calloc testing...\n\n");

	count = 10;
	size = sizeof(char);
	printf("Test case 1: element count = %zu, element size = %zu \n", count, size);
	str_ft =(char *)ft_calloc(count, size);
	str_sy =(char *)calloc(count, size);
	printf("The memory address of ft_calloc output is: %p\n", (void *)str_ft);	
	printf("The memory address of sy_calloc output is: %p\n", (void *)str_sy);	
	printf("ft_calloc:");
    for (i = 0; i < count; i++)
		printf("%d", str_ft[i]);
	printf("\n");
	printf("   calloc:");
    for (i = 0; i < count; i++)
		printf("%d", str_sy[i]);
	printf("\n");
	assert(memcmp(str_ft, str_sy, count)==0);
	printf("\n");
	free(str_ft);
	free(str_sy);

	count = 0;
	size = sizeof(char);
	printf("Test case 2: element count = %zu, element size = %zu \n", count, size);
	str_ft =(char *)ft_calloc(count, size);
	str_sy =(char *)calloc(count, size);
	printf("The memory address of ft_calloc output is: %p\n", (void *)str_ft);	
	printf("The memory address of sy_calloc output is: %p\n", (void *)str_sy);	
	printf("ft_calloc:");
    for (i = 0; i < count; i++)
		printf("%d", str_ft[i]);
	printf("\n");
	printf("   calloc:");
    for (i = 0; i < count; i++)
		printf("%d", str_sy[i]);
	printf("\n");
	assert(memcmp(str_ft, str_sy, count)==0);
	printf("\n");
	free(str_ft);
	free(str_sy);

	count = 10;
	size = 0;
	printf("Test case 3: element count = %zu, element size = %zu \n", count, size);
	str_ft =(char *)ft_calloc(count, size);
	str_sy =(char *)calloc(count, size);
	printf("The memory address of ft_calloc output is: %p\n", (void *)str_ft);	
	printf("The memory address of sy_calloc output is: %p\n", (void *)str_sy);	
	printf("ft_calloc:");
    for (i = 0; i < count; i++)
		printf("%d", str_ft[i]);
	printf("\n");
	printf("   calloc:");
    for (i = 0; i < count; i++)
		printf("%d", str_sy[i]);
	printf("\n");
	assert(ft_memcmp(str_ft, str_sy, count)==0);
	printf("\n");
	free(str_ft);
	free(str_sy);
	

	count = SIZE_MAX;
	size = sizeof(char);
	printf("Test case 4: element count = %zu, element size = %zu \n", count, size);
	str_ft =(char *)ft_calloc(count, size);
	str_sy =(char *)calloc(count, size);
	printf("The memory address of ft_calloc output is: %p\n", (void *)str_ft);	
	printf("The memory address of sy_calloc output is: %p\n", (void *)str_sy);	
	printf("ft_calloc:");
    if (str_ft)
	{	
		for (i = 0; i < count; i++)
			printf("%d", str_ft[i]);
	}
	printf("\n");
	printf("   calloc:");
    if (str_sy)
	{
	for (i = 0; i < count; i++)
		printf("%d", str_sy[i]);
	}
	printf("\n");
	assert(str_ft == str_sy);
	printf("\n");
	free(str_ft);
	free(str_sy);

	printf("ft_calloc passed all test cases successfully!\n");
    printf("\n---- ---- ---- ---- ---- ---- ---- ---- ----\n\n");
}