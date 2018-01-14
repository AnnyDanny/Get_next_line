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

#ifndef GNL_H
# define GNL_H

# define BUFF_SIZE 10

typedef	struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int 	get_next_line(const int fd, char **line);
int 	get_in_list(char *tmp, t_list **list, char **line);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *str, int ch);
void	ft_lstadd(t_list **alst, t_list *new);
t_list	*ft_lstnew(void const *content, size_t content_size);
size_t	ft_strlen(const char *str);
char	*ft_strnew(size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_countstrclen(char *str, int c);
t_list	*multifile_get_in_list(int fd, t_list **vika);
void	ft_lstadd(t_list **alst, t_list *new);

#endif
