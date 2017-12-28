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
#include "libft.h"
#include "gnl.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
// t_list	fill_line(char **line, t_list *oneelem)
// {
	
// }

int get_in_list(char *tmp, t_list *list, char **line)
{
	int i;
	int countstr;
	t_list *oneelem;
	
	i = 0;
	oneelem = ft_lstnew(tmp, ft_strlen(tmp));
	oneelem->content = tmp;
	*line = oneelem->content;
	// while (list->next)
	// 	list = 
	printf("%s\n", *line);
	return (1);
}

 int get_next_line(const int fd, char **line)
 {
 	char *buf;
 	char *tmp;
 	int ret;
 	t_list *vika;
 	int fd1;
 	
 	fd1 = (int)fd;
	fd1 = open("test_gnl.c", O_RDONLY);
 	if (fd1 == -1)
 		return (0);
 	buf = ft_strnew(BUFF_SIZE);
 	tmp = ft_strnew(BUFF_SIZE);
 	while ((ret = (read(fd1, buf, BUFF_SIZE)) >= 1))
 	{
 		tmp = ft_strjoin(tmp, buf);
		if (ft_strchr(tmp, '\n'))
		{
		 	get_in_list(tmp, vika, line);
		 	break;
		}
 	}
	ft_strdel(&buf);
 	if (close(fd1) == -1)
 		return (0);
 	printf("%s\n", buf);
 	return (1);
 }

 int main(void)
 {
 	char *str;
 	int fd;

 	printf("%d\n", get_next_line(fd, &str));
 	return (0);
 }


