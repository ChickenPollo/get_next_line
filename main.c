/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 20:55:19 by luimarti          #+#    #+#             */
/*   Updated: 2020/03/04 15:05:25 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	const int fd = open("test", O_RDONLY);
	printf("fd: %d\n", fd);

	const int fd2 = open("test2", O_RDONLY);
	printf("fd2: %d\n", fd2);

	const int fd3 = open("test3", O_RDONLY);
	printf("fd3: %d\n", fd3);

	char *line;
	char *line2;
	char *line3;
	int res;
	int res2;
	int res3;

	
	
	res = get_next_line(fd, &line);
	res2 = get_next_line(fd2, &line2);
	res3 = get_next_line(fd3, &line3);
	printf("read 1: |%s|\n", line);
	printf("read 2: |%s|\n", line2);
	printf("read 3: |%s|\n", line3);

	res = get_next_line(fd, &line);
	res2 = get_next_line(fd2, &line2);
	res3 = get_next_line(fd3, &line3);
	printf("read 1: |%s|\n", line);
	printf("read 2: |%s|\n", line2);
	printf("read 3: |%s|\n", line3);

	res = get_next_line(fd, &line);
	res2 = get_next_line(fd2, &line2);
	res3 = get_next_line(fd3, &line3);
	printf("read 1: |%s|\n", line);
	printf("read 2: |%s|\n", line2);
	printf("read 3: |%s|\n", line3);


	close(fd);
	close(fd2);
	close(fd3);
	return (0);
}
