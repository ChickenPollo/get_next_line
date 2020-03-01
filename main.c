/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 20:55:19 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/29 21:19:52 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	const int fd = open("test", O_RDONLY);
	printf("fd: %d\n", fd);

	char *line;

	int result = get_next_line(fd, &line);

	printf("%s\n", line);

	if (close(fd < 0))
	{
		printf("Error closing\n");
		exit(1);
	}
	return (0);
}
