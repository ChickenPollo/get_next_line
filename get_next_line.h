/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:24:23 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/29 20:52:50 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>
# include <unistd.h>

# define BUFF_SIZE 32
# define IS_ALLO(x) if (!x) return (-1);
# define CONT(x) ((t_file*)((x->content)))->content
# define START(x) ((t_file*)((x->content)))->start_content


typedef	struct	s_file
{
	int				fd;
	char			*content;
	char			*start_content;
	struct s_file	*next;
}				t_file;

int				get_next_line(const int fd, char **line);

#endif
