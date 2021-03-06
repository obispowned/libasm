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

int		main()
{
	char buffer[30];
	/*==============================++============================*/
	/************************** FT_STRLEN *************************/
	/*==============================++============================*/
	printf("*** FT_STRLEN ***\n");
	printf("original: %d\n", strlen("cinco"));
	printf("mi resultado: %d\n\n", ft_strlen("cinco"));

	printf("original: %d\n", strlen(""));
	printf("mi resultado: %d\n\n", ft_strlen(""));

	printf("original: %d\n", strlen("ey que pasa, esto es una broma o que_??"));
	printf("mi resultado: %d\n\n", ft_strlen("ey que pasa, esto es una broma o que_??"));


	/*==============================++============================*/
	/************************** FT_STRCPY *************************/
	/*==============================++============================*/
	printf("*** FT_STRCPY ***\n");
	/*printf("original: %s\n", strcpy(buffer, "caca"));
	printf("mi resultado: %s\n\n", ft_strcpy(buffer, "caca"));

	printf("original: %s\n", strcpy(buffer, "casco el casco y se la casco en la cascada"));
	printf("mi resultado: %s\n\n", ft_strcpy(buffer, "casco el casco y se la casco en la cascada"));*/

	printf("original: %s\n", strcpy(buffer, "al"));
	printf("mi resultado: %s\n\n", ft_strcpy(buffer, "al"));
	/*==============================++============================*/
	/************************** FT_STRCMP *************************/
	/*==============================++============================*/
	printf("*** FT_STRCMP ***\n");

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