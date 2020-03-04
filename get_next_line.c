/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:27:48 by luimarti          #+#    #+#             */
/*   Updated: 2020/03/02 20:49:16 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*
t_file	*get_fd_buffer(int fd, t_file *descriptors)
{
	t_file	*new_descriptor;
	while (descriptors->next)
	{
		if (descriptors->fd == fd)
			return (descriptors);
		descriptors = descriptors->next;
	}
	if (!(new_descriptor = (t_file *)malloc(sizeof(t_file))))
		return (NULL);
	descriptors->next = new_descriptor;
	new_descriptor->fd = fd;
	new_descriptor->next = NULL;
}
*/
int	get_next_line(const int fd, char **line)
{
	static char		*fds[255];
	char			buf[BUFF_SIZE + 1];
	int				ret;
	char			*temp;

	if (fd < 0 || line == NULL)
		return (-1);
	while (ret = read(fd, buf, BUFF_SIZE))
	{
		buf[ret] = '\0';
		if (fds[fd] == NULL)
			fds[fd] = ft_strnew(1);
		temp = ft_strjoin(fds[fd], buf);
		free(fds[fd]);
		fds[fd] = temp;
		if (ft_strchr(buf, '\n'))
			break;
	}
	if (ret < 0)
		return (-1);
	
}
