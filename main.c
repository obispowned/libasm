/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <agutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:07:53 by agutierr          #+#    #+#             */
/*   Updated: 2021/02/24 18:47:45 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "libasm.h"

int		main()
{
	char	buffer[137];

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

	printf("original: %ld\n", strlen("asodnaosbpabspibapsibdapiusbdauibsdpaibspduiabspidubapsidbapisbdpaibsdpabuisdpaibsdpuiabspdabpsdbapsduabpsiudbapisdbpasiudbapsiudbapisbd"));
	printf("mi resultado: %ld\n\n", ft_strlen("asodnaosbpabspibapsibdapiusbdauibsdpaibspduiabspidubapsidbapisbdpaibsdpabuisdpaibsdpuiabspdabpsdbapsduabpsiudbapisdbpasiudbapsiudbapisbd"));

	/*==============================++============================*/
	/************************** FT_STRCPY *************************/
	/*==============================++============================*/
	printf("\n*** FT_STRCPY ***\n");
	printf("original: %s\n", strcpy(buffer, "comes comodo comiendo con el codo?"));
	printf("mi resultado: %s\n\n", ft_strcpy(buffer, "comes comodo comiendo con el codo?"));

	printf("original: %s\n", strcpy(buffer, "casco el casco y se la casco en la cascada"));
	printf("mi resultado: %s\n\n", ft_strcpy(buffer, "casco el casco y se la casco en la cascada"));

	printf("original: %s\n", strcpy(buffer, "asodnaosbpabspibapsibdapiusbdauibsdpaibspduiabspidubapsidbapisbdpaibsdpabuisdpaibsdpuiabspdabpsdbapsduabpsiudbapisdbpasiudbapsiudbapisbd"));
	printf("mi resultado: %s\n\n", ft_strcpy(buffer, "asodnaosbpabspibapsibdapiusbdauibsdpaibspduiabspidubapsidbapisbdpaibsdpabuisdpaibsdpuiabspdabpsdbapsduabpsiudbapisdbpasiudbapsiudbapisbd"));
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
	printf("original: \n");
	write(1, "alvar", 3);
	printf("\n");
	printf("mi resultado: \n");
	ft_write(1, "alvar", 3);
	printf("\n");
	
	printf("original: \n");
	write(1, "e",1);
	printf("\n");
	printf("mi resultado: \n");
	ft_write(1, "e",1);
	printf("\n");

	/*==============================++============================*/
	/**************************  FT_READ  *************************/
	/*==============================++============================*/
	printf("*** FT_READ ***\n");
	printf("-ARCHIVO.TXT TEST ORIGINAL-\n");
	int fd;
	int ret;
	char buff1[9000];
	fd = open("archivo.txt", O_RDONLY);
	ret = read(fd, buff1, 2);
	buff1[ret] = 0;
	printf("[return : %d][lectura: %s]\n", ret, buff1);
	printf("\n");
	close(fd);

	printf("-ARCHIVO.TXT TEST MI RESULTADO-\n");
	fd = open("archivo.txt", O_RDONLY);
	ret = ft_read(fd, buff1, 2);
	buff1[ret] = 0;
	printf("[return : %d][lectura: %s]\n", ret, buff1);
	printf("\n");
	close(fd);
	
	/*==============================++============================*/
	/************************** FT_STRDUP *************************/
	/*==============================++============================*/
	printf("*** FT_STRDUP ***\n");
	char *str = "ey tu";
	char *str2 = strdup(str);
	printf("str2 = %s\n", str2);
	system("leaks libasm");
	
	

	return(0);
}