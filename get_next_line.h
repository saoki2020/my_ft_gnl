/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoki <saoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 06:03:40 by saoki             #+#    #+#             */
/*   Updated: 2021/02/06 23:17:09 by saoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define MAX_FD 256

int		get_next_line(int fd, char **line);
char	*ft_read_char(int fd, char **remainder, int *read_num);
int		ft_rewrite_line(char *temp, char **remainder, char **line);
char	*ft_gnl_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char *s, size_t start, size_t end);
size_t	ft_get_len(size_t len, size_t start, size_t s_len);

#endif
