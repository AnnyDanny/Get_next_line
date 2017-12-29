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

int get_in_list(char *tmp, t_list **list, char **line)
{
	int i;
	int countstr;
	t_list *oneelem;
	
	i = 0;
	printf("what is tmp %s\n", tmp);
	*line = ft_strsub(tmp, 0, ft_countstrclen(tmp, '\n'));
	tmp = ft_strchr(tmp, '\n');
	oneelem = ft_lstnew(tmp, ft_strlen(tmp));
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
 	if (vika)
 		tmp = vika->content;
 	while ((ret = (read(fd, buf, BUFF_SIZE)) >= 1))
 	{
 		tmp = ft_strjoin(tmp, buf);
		if (ft_strchr(tmp, '\n'))
		{
		 	get_in_list(tmp, &vika, line);
		 	break;
		}
 	}
	ft_strdel(&buf);
 	// printf("%s\n", buf);
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
 	printf("%s\n", (str));
 	get_next_line(fd, &str);
 	printf("%s\n", (str));
 	if (close(fd) == -1)
 		return (0);
 	return (0);
 }


