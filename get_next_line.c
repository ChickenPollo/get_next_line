/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:27:48 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/29 21:19:50 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
t_list	*handle_file(t_list **files, int fd)
{
	t_list	*file;
	t_file	f;

	file = *files;
	while (file)
	{
		if (((t_file*)((file->content)))->fd == fd)
			return (file);
		file = file->next;
	}
	f.fd = fd;
	f.content = ft_strnew(1);
	f.start_content = f.content;
	ft_lstadd((files), ft_lstnew((void*)&f, sizeof(t_file)));
	return (*files);
}

char	*retrive_line(char **buff)
{
	char	*line;
	size_t	len;

	if (ft_strchr(*buff, '\n'))
	{
		len = ft_strchr(*buff, '\n') - *buff;
		line = ft_strncpy(ft_strnew(len), *buff, len);
		*buff += (len + 1);
	}
	else
	{
		len = ft_strlen(*buff);
		line = ft_strncpy(ft_strnew(len), *buff, len);
		*buff += len;
	}
	return (line);
}

int		get_next_line(int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	size_t			ret;
	static t_list	*files;
	t_list			*file;

	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0) || BUFF_SIZE < 1)
		return (-1);
	file = handle_file(&files, fd);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		IS_ALLO((CONT(file) = ft_strjoin(CONT(file), buf)));
		ft_strdel(&(START(file)));
		START(file) = CONT(file);
		if (ft_strchr(CONT(file), '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(CONT(file)))
		return (0);
	IS_ALLO((*line = retrive_line(&CONT(file))));
	return (1);
}
