/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szapata- <szapata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:30:32 by szapata-          #+#    #+#             */
/*   Updated: 2023/12/27 18:18:18 by szapata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
void	set_new_line(char **line, char *buffer, size_t len);
int		init_buffer(char **buffer, int fd);
int		check_read(int r_status, char **buffer, char **line, size_t *len);

// typedef struct s_list
// {
// 	int				fd;
// 	char			*bytes_read;
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;
#endif