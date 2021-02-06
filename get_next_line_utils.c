/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoki <saoki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 22:29:29 by saoki             #+#    #+#             */
/*   Updated: 2021/02/06 06:03:19 by saoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *str)
{
	size_t	len;
	char	*dest;

	dest = (char *)malloc(ft_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	len = 0;
	while (str[len])
	{
		dest[len] = str[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_strchr(char *s, int c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return (NULL);
}

char	*ft_substr(char *s, int start, int end)
{
	char	*str;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start || end <= 0)
		str = (char *)malloc(1);
	else
	{
		str = (char *)malloc(ft_get_len(end, start, s_len) + 1);
		if (str == NULL)
			return (NULL);
		while (i < end && (start + i) < s_len)
		{
			str[i] = s[start + i];
				i++;
		}
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_get_len(size_t len, size_t start, size_t s_len)
{
	size_t	substr_len;

	if (len <= s_len - start)
		substr_len = len;
	else
		substr_len = s_len - start;
	return (substr_len);
}
