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
#include "libft.h"

// void	free_all(char *strfree, t_list listfree)
// {

// }

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
		// printf("multifile buf with first call %s\n", buf->content);
 		buf = buf->next;
 	}
 	if (buf)
 	 	// printf("multifile buf second %s\n", buf->content);
 	if (buf && buf->content_size == (size_t)fd)
 	{
 		// printf("multifile2 buf second %s\n", buf->content);
 		return (buf);
 	}
 	new = ft_lstnew("", 1);
 	// printf("pointer vika in multifile %p\n", vika);
 	// printf("pointer new %p\n", new);
 	new->content_size = fd;
 	ft_lstadd(vika, new);
 	return (*vika);
}

int get_in_list(char *tmp, t_list *list, char **line)
{
	int i;
	char *tmp2;
	char *g;
	
	i = 0;
	// printf("tmp before strsub in line %s\n", tmp);
	// printf("line before strsub from tmp %s\n", *line);
	g = tmp;
	*line = ft_strsub(tmp, 0, ft_countstrclen(tmp, '\n'));
	// printf("line after strsub from tmp %s\n", *line);
	// printf("tmp %s\n", tmp);
	if ((tmp = ft_strchr(tmp, '\n')) != NULL)
	{
		// printf("tmp before in list %s\n", tmp);
		tmp++;
		// printf("tmp after tmp++ %s\n", tmp);
		tmp2 = list->content;
		list->content = ft_strdup(tmp);
		free(tmp2);
		// printf("list after strdub from tmp %s\n", list->content);
		// printf("tmp after in list %s\n", tmp);
	}
	else
		ft_bzero(list->content, ft_strlen(list->content));
	// printf("pointer tmp in get in list %p\n", tmp);
	// printf("pointer list %p\n", list);
	// printf("pointer line %p\n", line);
	free(g);
	return (1);
}

int get_next_line(const int fd, char **line)
{
	char *buf;
	char *tmp;
	int ret;
	t_list *buf2;
	static t_list *vika;
	char *t;
	char *d;
	// t_list *vika2;

	buf = ft_strnew(BUFF_SIZE);
 	tmp = ft_strnew(BUFF_SIZE);
 	buf2 = multifile_get_in_list(fd, &vika);
	// printf("\nfd current %d\n", fd);
	// printf("vika in gnl %s fd in vika %zu\n", vika->content, vika->content_size);
	// vika2 = vika;
 // 	while (vika2)
 // 	{
 		// printf("vika2 in gnl %s fd in vika %zu\n", vika2->content, vika2->content_size);
 		// vika2 = vika2->next;
 	// }
 	// printf("buf2 %s fd in buf2 %zu\n", buf2->content, buf2->content_size);
 	// tmp = buf2->content; does not matter here
 	// printf("buf with first call %s\n", buf);
 	// printf("tmp with first call %s\n", tmp);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		// printf("buf before join in tmp %s\n", buf);
		t = tmp;
		tmp = ft_strjoin(tmp, buf);
		free(t);
		ft_strclr(buf);
		// printf("tmp after join with buf %s\n", tmp);
		// printf("buf after join to tmp %s\n", buf);
		if (ft_strchr(tmp, '\n'))
			break;
	}
	free(buf);
	d = tmp;
	tmp = ft_strjoin(buf2->content, tmp);
	free(d);
	// printf("tmp after while %s\n", tmp);
	if (ft_strlen(tmp) == 0 && ret == 0 && (vika == NULL || ft_strlen(buf2->content) == 0))
	{
		free(tmp);
		return (0);
	}
	if (ret == -1)
		return (-1);
	// if (vika)
	// 	tmp = ft_strjoin(vika->content, tmp);
	get_in_list(tmp, buf2, line);
	// printf("pointer buf in gnl %p\n", buf);
	// printf("pointer tmp in gnl %p\n", tmp);
	// printf("pointer buf2 %p\n", buf2);
	// printf("pointer vika in gnl %p\n", vika);
	// system("leaks gnl");
	return (1);
}

