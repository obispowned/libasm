/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <agutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:07:53 by agutierr          #+#    #+#             */
/*   Updated: 2021/02/06 18:03:58 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "libasm.h"

int		main()
{
	char buffer[50];
	/*==============================++============================*/
	/************************** FT_STRLEN *************************/
	/*==============================++============================*/
	printf("*** FT_STRLEN ***\n");
	printf("original: %ld\n", strlen("cinco"));
	printf("mi resultado: %ld\n\n", ft_strlen("cinco"));

	printf("original: %ld\n", strlen(""));
	printf("mi resultado: %ld\n\n", ft_strlen(""));

	printf("original: %ld\n", strlen("ey que pasa, esto es una broma o que_??"));
	printf("mi resultado: %ld\n\n", ft_strlen("ey que pasa, esto es una broma o que_??"));


	/*==============================++============================*/
	/************************** FT_STRCPY *************************/
	/*==============================++============================*/
	printf("\n*** FT_STRCPY ***\n");
	printf("original: %s\n", strcpy(buffer, "42 school"));
	printf("mi resultado: %s\n\n", ft_strcpy(buffer, "42 school"));

	printf("original: %s\n", strcpy(buffer, "casco el casco y se la casco en la cascada"));
	printf("mi resultado: %s\n\n", ft_strcpy(buffer, "casco el casco y se la casco en la cascada"));

	printf("original: %s\n", strcpy(buffer, "al"));
	printf("mi resultado: %s\n\n", ft_strcpy(buffer, "al"));
	/*==============================++============================*/
	/************************** FT_STRCMP *************************/
	/*==============================++============================*/
	printf("*** FT_STRCMP ***\n");
	printf("original: %d\n", strcmp("iguales", "iguales"));
	printf("mi resultado: %d\n\n", ft_strcmp("iguales", "iguales"));

	printf("original: %d\n", strcmp("baja", "alta"));
	printf("mi resultado: %d\n\n", ft_strcmp("baja", "alta"));

	printf("original: %d\n", strcmp("alta","baja"));
	printf("mi resultado: %d\n\n", ft_strcmp("alta", "baja"));

	/*==============================++============================*/
	/*************************** FT_WRITE *************************/
	/*==============================++============================*/
	printf("*** FT_WRITE ***\n");

	/*==============================++============================*/
	/**************************  FT_READ  *************************/
	/*==============================++============================*/
	printf("*** FT_READ ***\n");

	/*==============================++============================*/
	/************************** FT_STRDUP *************************/
	/*==============================++============================*/
	printf("*** FT_STRDUP ***\n");
	

	return(0);
}