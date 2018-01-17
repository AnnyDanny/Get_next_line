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

t_list	*multifile_get_in_list(int fd, t_list **vika)
{
	t_list *buf;
	t_list *new;

	if (!vika)
	{
		*vika = ft_lstnew("", 1);
		(*vika)->content_size = fd;
		return (*vika);
	}
	buf = *vika;
	while (buf && (size_t)fd != buf->content_size)
 	{
 		buf = buf->next;
 	}
 	if (buf && buf->content_size == (size_t)fd)
 		return (buf);
 	new = ft_lstnew("", 1);
 	new->content_size = fd;
 	ft_lstadd(vika, new);
 	return (*vika);
}

int get_in_list(char *tmp, t_list *list, char **line)
{
	int i;
	
	i = 0;
	// printf("tmp before strsub in line %s\n", tmp);
	// printf("line before strsub from tmp %s\n", *line);
	*line = ft_strsub(tmp, 0, ft_countstrclen(tmp, '\n'));
	// printf("line after strsub from tmp %s\n", *line);
	if ((tmp = ft_strchr(tmp, '\n')) != NULL)
	{
		// printf("tmp before in list %s\n", tmp);
		tmp++;
		// printf("tmp after tmp++ %s\n", tmp);
		list->content = ft_strdup(tmp);
		// printf("list after lstnew from tmp %s\n", list->content);
		// printf("tmp after in list %s\n", tmp);
	}
	else
		list = ft_lstnew("", 1);
	return (1);
}

int get_next_line(const int fd, char **line)
{
	char *buf;
	char *tmp;
	int ret;
	t_list *buf2;
	static t_list *vika;

	buf = ft_strnew(BUFF_SIZE);
 	// tmp = ft_strnew(BUFF_SIZE);
 	buf2 = multifile_get_in_list(fd, &vika);
 	// printf("buf2 %s\n", buf2->content);
 	tmp = buf2->content;
 	// printf("buf with first call %s\n", buf);
 	// printf("tmp with first call %s\n", tmp);
	while ((ret = read(fd, buf, BUFF_SIZE)) >= 1)
	{
		// printf("buf before join in tmp %s\n", buf);
		tmp = ft_strjoin(tmp, buf);
		// printf("tmp after join with buf %s\n", tmp);
		// printf("buf after join to tmp %s\n", buf);
		if (ft_strchr(tmp, '\n'))
			break;
	}
	// printf("tmp after while %s\n", tmp);
	if (ft_strlen(tmp) == 0 && ret == 0 && (vika == NULL || ft_strlen(vika->content) == 0))
		return (0);
	if (ret == -1)
		return (-1);
	// if (vika)
	// 	tmp = ft_strjoin(vika->content, tmp);
	get_in_list(tmp, buf2, line);
	return (1);
}

// int main(void)
//  {
//  	char *str;
//  	int fd;
//  	// int fd1;
//  	// int fd2;

// 	fd = open("test_gnl.c", O_RDONLY);
// 	// fd1 = open("test_gnl2.c", O_RDONLY);
// 	// fd2 = open("test_gnl3.c", O_RDONLY);
//  	if (fd == -1)
//  		return (0);
//  	// if (fd1 == -1)
//  	// 	return (0);
//  	// if (fd2 == -1)
//  	// 	return (0);
//  	printf("%d\n", get_next_line(fd, &str));
//  	printf("str1 %s\n", str);
//  	// printf("fd %d\n", fd);

//  	printf("%d\n", get_next_line(fd, &str));
//  	printf("str2 %s\n", str);
//  	// printf("fd1 %d\n", fd1);

//  	printf("%d\n", get_next_line(fd, &str));
//  	printf("str3 %s\n", str);
//  	// printf("fd2 %d\n", fd2);
//  	printf("%d\n", get_next_line(fd, &str));
//  	printf("str4 %s\n", str);
//  	// printf("fd %d\n", fd);
//  	// // // get_next_line(fd, &str);
//  	// printf("%d\n", get_next_line(fd1, &str));
//  	// printf("str2.2 %s\n", str);
//  	// printf("fd1 %d\n", fd1);
//  	// printf("%d\n", get_next_line(fd2, &str));
//  	// printf("str3.2 %s\n", str);
//  	// printf("fd2 %d\n", fd2);
// 	// // get_next_line(fd, &str);
//  // 	printf("str4 %s\n", str);
// 	// get_next_line(fd, &str);
//  // 	printf("str5 %s\n", str);
//  	if (close(fd) == -1)
//  		return (0);
//  	// if (close(fd1) == -1)
//  	// 	return (0);
//  	// if (close(fd2) == -1)
//  	// 	return (0);
//  	return (0);
//  }
