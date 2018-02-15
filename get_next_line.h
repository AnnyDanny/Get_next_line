/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdanylov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 14:12:41 by gdanylov          #+#    #+#             */
/*   Updated: 2017/12/25 14:12:42 by gdanylov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef GNL_H
# define GNL_H

# define BUFF_SIZE 5

typedef struct	t_struct
{
	char		*t;
	char		*d;
	int			ret;
	char		*buf;
	char		*tmp;
	t_list		*buf2;
	// static		t_list *vika;
}				t_struct;

int 	get_next_line(const int fd, char **line);

#endif
