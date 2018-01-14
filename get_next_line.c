/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdanylov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 21:07:01 by gdanylov          #+#    #+#             */
/*   Updated: 2018/01/13 21:07:03 by gdanylov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int get_in_list(char *tmp, t_list **list, char **line)
{
	int i;
	
	i = 0;
	*line = ft_strsub(tmp, 0, ft_countstrclen(tmp, '\n'));
	if ((tmp = ft_strchr(tmp, '\n')) != NULL)
	{
		tmp++;
		*list = ft_lstnew(tmp, ft_strlen(tmp));
	}
	else
		*list = ft_lstnew("", 1);
	return (1);
}

int get_next_line(const int fd, char **line)
{
	char *buf;
	char *tmp;
	int ret;
	static t_list *vika;

	buf = ft_strnew(BUFF_SIZE);
 	tmp = ft_strnew(BUFF_SIZE);
	while ((ret = read(fd, buf, BUFF_SIZE)) >= 1)
	{
		// printf("tmpbeforejoin %s\n", tmp);
		tmp = ft_strjoin(tmp, buf);
		// printf("tmpafterjoin %s\n", tmp);
		if (ft_strchr(tmp, '\n'))
			break;
	}
	if (ft_strlen(tmp) == 0 && ret == 0 && (vika == NULL || ft_strlen(vika->content) == 0))
		return (0);
	if (ret == -1)
		return (-1);
	if (vika)
		tmp = ft_strjoin(vika->content, tmp);
	get_in_list(tmp, &vika, line);
	return (1);
}

// int main(void)
//  {
//  	char *str;
//  	int fd;

// 	fd = open("test_gnl2.c", O_RDONLY);
//  	if (fd == -1)
//  		return (0);
//  	printf("%d\n", get_next_line(fd, &str));
//  	printf("str1 %s\n", str);
//  	printf("%d\n", get_next_line(fd, &str));
//  	printf("str1 %s\n", str);
//  	// get_next_line(fd, &str);
//  	printf("%d\n", get_next_line(fd, &str));
//  	printf("str2 %s\n", str);
//  	printf("%d\n", get_next_line(fd, &str));
//  	printf("str1 %s\n", str);
//  	// // get_next_line(fd, &str);
//  	// printf("%d\n", get_next_line(fd, &str));
//  	// printf("str3 %s\n", str);
//  	// printf("%d\n", get_next_line(fd, &str));
//  	// printf("str4 %s\n", str);
// 	// // get_next_line(fd, &str);
//  // 	printf("str4 %s\n", str);
// 	// get_next_line(fd, &str);
//  // 	printf("str5 %s\n", str);
//  	if (close(fd) == -1)
//  		return (0);
//  	return (0);
//  }
