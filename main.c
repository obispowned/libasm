/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <agutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:07:53 by agutierr          #+#    #+#             */
/*   Updated: 2021/03/02 18:17:01 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "libasm.h"

int		main()
{
	char	buffer[137];

	/*==============================++============================*/
	/************************** FT_STRLEN *************************/
	/*==============================++============================*/
	printf("*****************\n");
	printf("*** FT_STRLEN ***\n");
	printf("*****************\n");
	printf("strlen: \n|%ld|\n", strlen("cinco"));
	printf("ft_strlen: \n|%ld|\n\n", ft_strlen("cinco"));

	printf("strlen: \n|%ld|\n", strlen(""));
	printf("ft_strlen: \n|%ld|\n\n", ft_strlen(""));

	printf("strlen: \n|%ld|\n", strlen("ey que pasa, esto es una broma o que_??"));
	printf("ft_strlen: \n|%ld|\n\n", ft_strlen("ey que pasa, esto es una broma o que_??"));

	printf("strlen: \n|%ld|\n", strlen("asodnaosbpabspibapsibdapiusbdauibsdpaibspduiabspidubapsidbapisbdpaibsdpabuisdpaibsdpuiabspdabpsdbapsduabpsiudbapisdbpasiudbapsiudbapisbd"));
	printf("ft_strlen: \n|%ld|\n\n", ft_strlen("asodnaosbpabspibapsibdapiusbdauibsdpaibspduiabspidubapsidbapisbdpaibsdpabuisdpaibsdpuiabspdabpsdbapsduabpsiudbapisdbpasiudbapsiudbapisbd"));

	/*==============================++============================*/
	/************************** FT_STRCPY *************************/
	/*==============================++============================*/
	printf("*****************\n");
	printf("*** FT_STRCPY ***\n");
	printf("*****************\n");
	printf("strcpy: \n|%s|\n", strcpy(buffer, "comes comodo comiendo con el codo?"));
	printf("ft_strcpy: \n|%s|\n\n", ft_strcpy(buffer, "comes comodo comiendo con el codo?"));

	printf("strcpy: \n|%s|\n", strcpy(buffer, "casco el casco y se la casco en la cascada"));
	printf("ft_strcpy: \n|%s|\n\n", ft_strcpy(buffer, "casco el casco y se la casco en la cascada"));

	printf("strcpy: \n|%s|\n", strcpy(buffer, "asodnaosbpabspibapsibdapiusbdauibsdpaibspduiabspidubapsidbapisbdpaibsdpabuisdpaibsdpuiabspdabpsdbapsduabpsiudbapisdbpasiudbapsiudbapisbd"));
	printf("ft_strcpy: \n|%s|\n\n", ft_strcpy(buffer, "asodnaosbpabspibapsibdapiusbdauibsdpaibspduiabspidubapsidbapisbdpaibsdpabuisdpaibsdpuiabspdabpsdbapsduabpsiudbapisdbpasiudbapsiudbapisbd"));

	/*==============================++============================*/
	/************************** FT_STRCMP *************************/
	/*==============================++============================*/
	printf("*****************\n");
	printf("*** FT_STRCMP ***\n");
	printf("*****************\n");
	printf("strcmp: \n|%d|\n", strcmp("iguales", "iguales"));
	printf("ft_strcmp: \n|%d|\n\n", ft_strcmp("iguales", "iguales"));

	printf("strcmp: \n|%d|\n", strcmp("baja", "alta"));
	printf("ft_strcmp: \n|%d|\n\n", ft_strcmp("baja", "alta"));

	printf("strcmp: \n|%d|\n", strcmp("alta","baja"));
	printf("ft_strcmp: \n|%d|\n\n", ft_strcmp("alta","baja"));

	/*==============================++============================*/
	/*************************** FT_WRITE *************************/
	/*==============================++============================*/
	printf("*****************\n");
	printf("*** FT_WRITE ***\n");
	printf("*****************\n");
	
	printf("write: \n");
	write(1, "alvar", 3);
	printf("\n");
	printf("ft_write: \n");
	ft_write(1, "alvar", 3);
	printf("\n\n");
	
	printf("write: \n");
	write(1, "e",1);
	printf("\n");
	printf("ft_write: \n");
	ft_write(1, "e",1);
	printf("\n\n");

	printf("write: \n");
	write(1, "croquetas",6);
	printf("\n");
	printf("ft_write: \n");
	ft_write(1, "croquetas",6);
	printf("\n\n");

	/*==============================++============================*/
	/**************************  FT_READ  *************************/
	/*==============================++============================*/
	printf("*****************\n");
	printf("*** FT_READ ***\n");
	printf("*****************\n");
	int fd;
	int ret;
	char buff1[9000];
	
	printf("- ARCHIVO.TXT Funcion READ - \n");
	fd = open("archivo.txt", O_RDONLY);
	ret = read(fd, buff1, 2);
	buff1[ret] = 0;
	printf("[return : %d][lectura: %s]\n", ret, buff1);
	printf("\n");
	close(fd);

	printf("- ARCHIVO.TXT Funcion FT_READ -\n");
	fd = open("archivo.txt", O_RDONLY);
	ret = ft_read(fd, buff1, 2);
	buff1[ret] = 0;
	printf("[return : %d][lectura: %s]\n", ret, buff1);
	printf("\n");
	close(fd);
	
	/*==============================++============================*/
	/************************** FT_STRDUP *************************/
	/*==============================++============================*/

	printf("*****************\n");
	printf("*** FT_STRDUP ***\n");
	printf("*****************\n");
	
	char *str = "";

	printf("strdup \n|%s|\n", strdup(str));
	printf("ft_strdup \n|%s|\n\n", ft_strdup(str));

	str = "que paisha";
	printf("strdup \n|%s|\n", strdup(str));
	printf("ft_strdup \n|%s|\n\n", ft_strdup(str));
	
	system("leaks libasm");

	return(0);
}