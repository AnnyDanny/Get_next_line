/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdanylov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/23 15:12:16 by gdanylov          #+#    #+#             */
/*   Updated: 2017/12/23 15:12:16 by gdanylov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
// t_list	fill_line(char **line, t_list *oneelem)
// {
	
// }

int get_in_list(char *tmp, t_list **list, char **line)
{
	int i;
	// int countstr;
	t_list *oneelem;
	
	i = 0;
	// printf("what is tmp %s\n", tmp);
	*line = ft_strsub(tmp, 0, ft_countstrclen(tmp, '\n'));
	// printf("line %p\n", *line);
	// printf("%s\n", tmp);
	// while (tmp)
	// {
	// 	printf("%s\n", tmp);
	if (ft_strchr(tmp, '\n') != NULL)
	{
		tmp = ft_strchr(tmp, '\n');
		tmp++;
		oneelem = ft_lstnew(tmp, ft_strlen(tmp));
	}
	else
		oneelem = ft_lstnew("", 1);
	// }
	// printf("tmp %p\n", &tmp);
	ft_lstadd(&(*list), oneelem);
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
 	while (vika && (size_t)fd != vika->content_size)
 	{
 		vika = vika->next;
 	}
 	if (vika->content_size == (size_t)fd && vika->content)
 	{
 		if ((tmp = ft_strchr(tmp, '\n')))
 		{
 			
 		}

 	}

 	if (vika)
 		tmp = vika->content;
 	while ((ret = read(fd, buf, BUFF_SIZE)) >= 1)
 	{
	 	// printf("buf1 %s\n", buf);
	 	// printf("pointer of tmp %p\n", tmp);
	 	// printf("pointer of buf1 %p\n", buf);
	 	// printf("ret %p\n", &ret);
	 	// printf("vika %p\n", &vika);
	 	// printf("vika->content %p\n", &vika->content);
 		tmp = ft_strjoin(tmp, buf);
		if (ft_strchr(tmp, '\n'))
		 	break;
	}
	if (ret == 0 && )
	get_in_list(tmp, &vika, line);
 	// printf("buf2 %s\n", buf);
 	return (1);
 }

 int main(void)
 {
 	char *str;
 	int fd;

	fd = open("test_gnl.c", O_RDONLY);
 	if (fd == -1)
 		return (0);
 	get_next_line(fd, &str);
 	printf("str %s\n", str); 
 	// printf("pointer of str %p\n", str);
 	get_next_line(fd, &str);
 	printf("str %s\n", str);
 	get_next_line(fd, &str);
 	printf("str %s\n", str);
 	if (close(fd) == -1)
 		return (0);
 	return (0);
 }


