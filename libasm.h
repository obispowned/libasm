/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <agutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:34:12 by agutierr          #+#    #+#             */
/*   Updated: 2021/02/22 17:09:52 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

size_t		ft_strlen(const char *str);
char		*ft_strcpy(char * dst, const char * src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(unsigned int fd, char *buf, size_t count);
ssize_t		ft_read(unsigned int fd, const char *buf, size_t count);
char		*ft_strdup(const char *str);

#endif