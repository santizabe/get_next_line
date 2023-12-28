/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szapata- <szapata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:54:01 by szapata-          #+#    #+#             */
/*   Updated: 2023/12/27 23:10:01 by szapata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	char	*tmp;
	int		s1_len;
	int		s2_len;
	int		i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s = (char *)malloc(s1_len + s2_len + 1);
	if (!s)
		return (s);
	tmp = s;
	i = 0;
	while (s1_len--)
		*s++ = s1[i++];
	while (s2_len--)
		*s++ = *s2++;
	*s = 0;
	if (s1)
		free(s1);
	return (tmp);
}

size_t	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	check_read(int r_status, char **buffer, char **line, size_t *len)
{
	if (r_status < 1)
	{
		if (*buffer)
			free(*buffer);
		*buffer = 0;
		*len = 0;
		if (r_status < 0)
		{
			if (*line)
				free(*line);
			*line = 0;
		}
		return (1);
	}
	if (*len == ft_strlen(*buffer))
		*len = 0;
	if (r_status < BUFFER_SIZE)
		buffer[0][r_status] = '\0';
	return (0);
}
