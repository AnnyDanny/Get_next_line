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
// void	fill_line(char **line)
// {
	
// }

// void	move_buf_and_cp_to_line(char **line, char *buf)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (check_buf(str) == 1)
// 		{
// 			if (countstr == 1)
// 			{
// 				buf = ft_memmove()
// 			}
// 		}
// 	}	
// }

int get_in_list(char *tmp, t_list *list)
{
	int i;
	int countstr;
	size_t lentmp;

	i = 0;
	while (tmp[i])
	{
		oneelem = ft_lstnew(tmp, ft_strlen(tmp))
	}
	return (1);
}

 int get_next_line(const int fd, char **line)
 {
 	char *buf;
 	char *tmp;
 	int ret;
 	t_list *vika;
 	
	fd = open("test_gnl.c", O_RDONLY);
 	if (fd == -1)
 		return (0);
 	buf = ft_strnew(BUFF_SIZE + 1);
 	while (ret = ((buf = read(fd, buf, BUFF_SIZE + 1) >= 1)))
 	{
 		tmp = buf;
		if (ft_strchr(tmp, '\n'))
			break;
 	}
 	get_in_list(tmp, vika);
 	if (close(fd) == -1)
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


