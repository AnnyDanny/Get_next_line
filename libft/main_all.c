/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdanylov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 22:25:21 by gdanylov          #+#    #+#             */
/*   Updated: 2017/11/15 22:25:22 by gdanylov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

// int	ft_iterative_factorial(int nb);

// int main(void)
// {
// 	int f;
// 	f = 5;
// 	printf("%d\n", ft_iterative_factorial(f));
// 	return (0);
// }

// int	ft_strnequ(char const *s1, char const *s2, size_t n);

// int main(void)


// size_t	ft_strlcat(char *dst, const char *src, size_t size);

// int main(void)
// {
// 	char dest[12] = "hello";
// 	char dest1[12] = "hello";
// 	char *src = "world";
// 	printf("%zu\n", strlcat(dest, src, 7));
// 	printf("%zu\n", ft_strlcat(dest1, src, 7));
// 	printf("%s\n %s\n", dest, dest1);
// 	return (0);
// }

// int main(void)
// {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
// 	size_t r1 = strlcat(buff1, str, max);
// 	size_t r2 = ft_strlcat(buff2, str, max);

// 	if (r1 != r2)
// 		printf("ko");
// 	char s1[4] = "";
// 	char s2[4] = "";
// 	r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
// 	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
// 	if (r1 != r2)
// 		printf("ko");
// 	else
// 		printf("ok");
// }


// void	ft_lstdel(t_list **alst, void(*del)(void*, size_t));

// int				__delNum = 0;

// void			lstdel_f(void *lst, size_t s) 
// {
// 	(void)lst;
// 	(void)s;
// 	__delNum++;
// 	printf("%d\n", __delNum);
// }

// int main(void)
// {
// 	t_list	*list;
// 	char *content = "hello !";

// 	list = malloc(sizeof(t_list));
// 	memset(list, 0, sizeof(t_list));
// 	list->next = malloc(sizeof(t_list));
// 	memset(list->next, 0, sizeof(t_list));
// 	list->content = content;
// 	list->next->content = content + 2;
// 	ft_lstdel(&list, lstdel_f);
// 	printf("%d\n", __delNum);
// 	if (__delNum == 2)
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// void	vika(void *con, size_t i)
// {
// 	i = 0;
// 	free(con);
// }

// int main(void)
// {
// 	t_list *one;
// 	one = ft_lstnew("abcd", 5);
// 	one->next = ft_lstnew("nbvck", 6);
// 	one->next->next = ft_lstnew("gfdsapo", 8);
// 	printf("%s\n %s\n %s\n", one->content, one->next->content, one->next->next->content);
// 	ft_lstdel(&one, &vika);
// 	printf("%s\n", (char *)one);
// 	return (0);
// }


// void	ft_lstdelone(t_list **alst, void(*del)(void*, size_t));

// void	vika(void *con, size_t i)
// {
// 	i = 0;
// 	free(con);
// }

// int main(void)
// {
// 	t_list *one;
// 	one = ft_lstnew("abcd", 5);
// 	printf("%s\n %zu\n", one->content, one->content_size);
// 	ft_lstdelone(&one, &vika);
// 	printf("%s\n", (char *)one);
// 	return (0);
// }

// t_list	*ft_lstnew(void const *content, size_t content_size);

// int main(void)
// {
// 	t_list *one;
// 	one = ft_lstnew("abcd", 5);
// 	printf("%s\n %zu\n", one->content, one->content_size);
// 	return (0);
// }
// int	ft_atoi(const char *str);

// int main(void)
// {
// 	char n[40] = "asa677676";
// 	int i1 = atoi(n);
// 	int i2 = ft_atoi(n);

// 	if (i1 == i2)
// 		printf("%d\n %d\n %s\n", i1, i2, "ok");
// 	else
// 		printf("%d %d", i1, i2);
// 	return (0);
// }

// int	main(void)
// {
// 	int n;
// 	char *str = "a\t\n\r\v\f-2147483649";

// 	n = ft_atoi(str);
// 	printf("%d\n", str, n);
// 	return (0);
// }

// void	ft_bzero(void *s, size_t n);

// int	main(void)
// {
// 	char str[5] = "12234";

// 	ft_bzero(str, 3);
// 	printf("%s", str);
// 	return (0);
// }

// int	ft_isalnum(int ch);

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d", ft_isalnum(atoi(argv[1])));
// 	return (0);
// }

// int	ft_isalpha(int c);

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d\n", ft_isalpha(atoi(argv[1])));
// 	return (0);
// }

// int	ft_isascii(int ch);

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d", ft_isascii(atoi(argv[1])));
// 	return (0);
// }

// int	ft_isdigit(int ch);

// int main(void)
// {
// 	int i;

// 	i = -1;
// 	while (i < 530)
// 	{
// 		if (ft_isdigit(i) != isdigit(i))
// 			printf("ko");;
// 		i++;
// 	}
// 	printf("ok");;
// }

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d", ft_isdigit(atoi(argv[1])));
// 	return (0);
// }

// int	ft_isprint(int ch);

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d", ft_isprint(atoi(argv[1])));
// 	return (0);
// }

// void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

// int	main(void)
// {
// 	char src[] = "test basic !";
// 	char dest1[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char dest2[] = "the cake is a lie !\0I'm hidden lol\r\n";
	// memset(dest1, 0, sizeof(dest1));
	// char *r1 = memccpy(dest1, src, 'm', 22);
	// char *r2 = ft_memccpy(dest1, src, 'm', 22);
	// printf("%s", r1);
	// if (r1 != r2)
	// 	printf ("ko");
	// char *r1 = memccpy(dest1, src, ' ', 13);
	// char *r2 = ft_memccpy(dest2, src, ' ', 13);
	// if (!memcmp(r1, r2, strlen(r2)))
	// 	printf ("%s\n %s\n", r1, r2);
	// else
	// 	printf ("ko");
	// memccpy(dest1, src, '\200', 21);
	// ft_memccpy(dest2, src, '\200', 21 );
	// if (!memcmp(dest1, dest2, 21))
	// 	printf("ok");
	// else
	// 	printf("ko");
	// ft_memccpy(dest, src, '7', 4);
	// printf ("%s", dest);
// 	return (0);
// }

// void	*ft_memchr(const void *s, int c, size_t n);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	if (str != NULL)
// 		while (*str)
// 			ft_putchar(*str++);
// }

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	ft_putstr(ft_memchr(argv[1], '3', 5));
// 	return (0);
// }

// int main(void)
// {
// 	char *src = "";
// 	int size_t = 10;

// 	if (memchr(src, '\200', size_t) == ft_memchr(src, '\200', size_t))
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int	ft_memcmp(const void *s1, const void *s2, size_t n);

// int main(void)
// {
// 	uint8_t *s1 = (uint8_t *)"\200";
// 	uint8_t *s2 = (uint8_t *)"\0";
// 	size_t size = 0;
// 	if (memcmp(s1, s2, size) == ft_memcmp(s1, s2, size))
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	uint8_t *s1 = (uint8_t *)"\xff\0\0\xaa\0\xde\xffMACOSX\xff";

// 	uint8_t *s2 = (uint8_t *)"\xff\0\0\xaa\0\xde\x00MBS";
// 	size_t size = 9;
// 	if (memcmp(s1, s2, size) == ft_memcmp(s1, s2, size))
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	uint8_t *s1 = (uint8_t *)"\xff\xaa\xde\200";

// 	uint8_t *s2 = (uint8_t *)"\xff\xaa\xde\0";
// 	size_t size = 8;
// 	if (memcmp(s1, s2, size) == ft_memcmp(s1, s2, size))
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	uint8_t *s1 = (uint8_t *)"atoms\0\0\0\0";

// 	uint8_t *s2 = (uint8_t *)"atoms\0abc";
// 	size_t size = 8;
// 	if (memcmp(s1, s2, size) == ft_memcmp(s1, s2, size))
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	uint8_t *s1 = (uint8_t *)"\xff\xaa\xde\x12";
// 	uint8_t *s2 = (uint8_t *)"\xff\xaa\xde\x12MACOSAAAAA";
// 	size_t size = 4;
// 	if (memcmp(s1, s2, size) == ft_memcmp(s1, s2, size))
// 		printf("ok");
// 	else
// 		printf("ko");
// }


// int	main(void)
// {
	// char *str1 = "\xff\xaa\xde\x12OLOL";
	// char *str2 = "\xff\xaa\xde\x12MACOSX";
	// size_t i = 7;
	// int i1 = ((memcmp(str1, str2, i) > 0) ? 1 : ((memcmp(str1, str2, i) < 0) ? -1 : 0));
	// int i2 = ((ft_memcmp(str1, str2, i) > 0) ? 1 : ((ft_memcmp(str1, str2, i) < 0) ? -1 : 0));
	// if (i1 == i2)
	// 	printf("ok");
	// else
	// 	printf("ko");
	// (void)argc;
	// ft_putstr(ft_memcmp(argv[1], argv[2], 7));
	// return (0);
// }
// int	main(void)
// {
// 	char *str1 = "\xff\xaa\xde\xffMACOSX\xff";
// 	char *str2 = "\xff\xaa\xde\x02";
// 	size_t i = 8;
// 	if (memcmp(str1, str2, i) == ft_memcmp(str1, str2, i))
// 		printf("ok");
// 	else
// 		printf("ko");
// 	return (0);
// }
// int main(void)
// {
// 	char *str1 = "\xff\xaa\xde\200";
// 	char *str2 = "\xff\xaa\xde\0";
// 	size_t size = 8;
// 	if (memcmp(str1, str2, size) == ft_memcmp(str1, str2, size))
// 		printf("ok");
// 	else
// 		printf("ko");
// }
// int main(void)
// {
// 	char *str1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
// 	char *str2 = "\xff\0\0\xaa\0\xde\x00MBS";
// 	size_t size = 9;
// 	if (memcmp(str1, str2, size) == ft_memcmp(str1, str2, size))
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// void	ft_memcpy(void *dst, const void *src, size_t n);

// int	ft_strlen(char *str);

// int	main(void)
// {
// 	char fsrc[] = "VikaVika";
// 	char fdest[100];
// 	ft_memcpy(fdest, fsrc, 6);
// 	// ft_memcpy(fdest, fsrc, ft_strlen(fsrc)+1);
// 	printf("%s", fdest);
// 	return (0);
// }

// void	*ft_memmove(void *dest, const void *src, size_t n);

// int main(void)
// {
// 	char src[50] = "world hello oleg vika";
// 	printf("%s\n", memmove(&src[12], &src[0], 5));
// }

// int main(void)
// {
// 	char dst1[0xF0];
// 	char dst2[0xF0];
// 	char *data = "thiÃŸ ÃŸ\xde\xad\xbe\xeftriÃ±g will be Ã¸vÃ©rlapÃ©d !\r\n";
// 	int size = 0xF0 - 0xF;

// 	memset(dst1, 'A', sizeof(dst1));
// 	memset(dst2, 'A', sizeof(dst2));
// 	memcpy(dst1, data, strlen(data));
// 	memcpy(dst2, data, strlen(data));
// 	memmove (dst1, dst1 + 3, size);
// 	ft_memmove(dst2, dst2 + 3, size);
// 	if (!memcmp(dst1, dst2, size))
// 		printf("%s\n %s\n", dst1, dst2);
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	char data1[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char data2[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	int size = strlen("the cake is a lie !\0I'm hidden lol\r\n");

// 	memmove(data1, data1, size);
// 	ft_memmove(data2, data2, size);
// 	if (!memcmp(data1, data2, size))
// 		printf("%s\n %s\n", data1, data2);
// 	else
// 		printf("ko");
// }
// int main(void)
// {
// 	unsigned long src = 0xdeadbeef;
// 	int size = sizeof(src);

// 	unsigned long dst1;
// 	unsigned long dst2;
// 	memmove(&dst1, &src, size);
// 	ft_memmove(&dst2, &src, size);
// 	if (!memcmp(&dst1, &dst2, size))
// 		printf("ok");
// 	else
// 		printf("%lu\n %lu\n %lu\n %d\n", src, dst1, dst2, size);
// }

// int	main(void)
// {
// 	char *src = "thanks to @apellicc for this test !\r\n";
// 	char dst1[0xF0];
// 	int size = strlen(src);
// 	char *r1 = memmove(dst1, src, size);
// 	char *r2 = ft_memmove(dst1, src, size);

// 	if (r1 != r2)
// 		printf("ko");
// 	r1 = memmove("", "" - 1, 0);
// 	r2 = ft_memmove("", "" - 1, 0);
// 	if (r1 != r2)
// 		printf("ko");
// 	else
// 		printf("ok");
// }


// void	*ft_memset(void *dest, int c, size_t num);

// int	main(void)
// {
// 	char str[5] = "12345";

// 	printf("%s", ft_memset(str, '8', 3));
// 	return (0);
// }

// char *ft_strcat(char *dest, const char *app);

// int	main(void)
// {
// 	char dest[100] = "first";
// 	char app[100] = "second";

// 	ft_strcat(dest, app);
// 	printf("%s", dest);
// 	return (0);
// }


// char	*ft_strchr(const char *str, int ch);

// int main(void)
// {
// 	char *src = "hghhgajkjkj";

// 	// strcpy(src, "123456789");
// 	ft_strchr(src, 'a');
// 	printf("ok");
// }

// int main(void)
// {
// 	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char *d1 = strchr(src, 't');
// 	char *d2 = ft_strchr(src, 't');

// 	if (d1 == d2)
// 		printf("ok");
// 	else
// 		printf("%s\n %s\n", d1, d2);
// }

// int main(void)
// {
// 	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char *d1 = strchr(src, ' ');
// 	char *d2 = ft_strchr(src, ' ');

// 	if (d1 == d2)
// 		printf("%s\n %s\n", d1, d2);
// 	else
// 		printf("%s\n %s\n", d1, d2);
// }

// int main(void)
// {
// 	ft_strchr(((void *)0), '\0');
// }

// int main(void)
// {
// 	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char *d1 = strchr(src, '\0');
// 	char *d2 = ft_strchr(src, '\0');

// 	if (d1 == d2)
// 		printf("ok");
// 	else
// 		printf("%s\n %s\n", d1, d2);
// }

// int	main(void)
// {
// 	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char *d1 = strchr(src, '\0');
// 	char *d2 = ft_strchr(src, '\0');
// 	if (d1 == d2)
// 		printf("ok");
// 	else
// 		printf("ko");
// 	return (0);
// }

// int	main(void)
// {
// 	char str[100] = "kkkde";
// 	int ch = '\0';

// 	printf("%s", ft_strchr(str, ch));
// 	return (0);
// }


// int	ft_strcmp(const char *s1, const char *s2);

// int main(void)
// {
// 	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char *s2 = "\x12\x02";
// 	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
// 	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));

// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	char *s1 = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char *s2 = "there is no stars in the sky";
// 	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
// 	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));

// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("%d\n %d\n", i1, i2);
// }

// int main(void)
// {
// 	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char *s2 = "\x12\x02";
// 	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
// 	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));

// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("%d %d", i1, i2);
// 	return (0);
// }

// int	main(void)
// {
// 	char *s1 = "\0";
// 	char *s2 = "\200";
// 	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
// 	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));

// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d\n", ft_strcmp(argv[1], argv[2]));
// 	return (0);
// }


// char *ft_strcpy(char *dest, const char *src);

// int main(void)
// {
// 	char *src = "zero test !";
// 	char dst1[80];
// 	size_t len = strlen(src);

// 	memset(dst1, 'A', 79);
// 	ft_strcpy(dst1, src);
// 	if (dst1[len])
// 	{
// 		printf("ko");
// 	}
// 	else
// 		printf("ok");
// }

// int main(void)
// {
// 	char *src = "--> nyancat <--\n\r";
// 	char dst1[30];
// 	char dst2[30];

// 	memset(dst1, 'A', sizeof(dst1));
// 	memset(dst2, 'A', sizeof(dst2));
// 	strcpy(dst1, src);
// 	ft_strcpy(dst2, src);
// 	if (strcmp(dst1, dst2))
// 	{
// 		printf("%s\n %s\n", dst1, dst2);
// 	}
// 	else
// 		printf("ok");
// }

// int main(void)
// {
// 	char *src = "AAAA";
// 	char dst1[80];
// 	char dst2[80];

// 	memset(dst1, 'B', sizeof(dst1));
// 	memset(dst2, 'B', sizeof(dst2));
// 	strcpy(dst1, src);
// 	ft_strcpy(dst2, src);
// 	if (memcmp(dst1, dst2, 20))
// 	{
// 		for (register int __i = 0; __i < 20; ++__i)
// 		for (register int __i = 0; __i < 20; ++__i)
// 		printf("%s\n %s\n", dst1, dst2);
// 	}
// 	else
// 		printf("ok");
// }


// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%s", ft_strcpy(argv[1], argv[2]));
// 	return (0);
// }

// 
// char	*ft_strdup(const char *str);

// int main(void)
// {
// 	char *ptr;

// 	ptr = ft_strdup("lol");
// 	if (!ptr)
// 		printf("ok");
// 	else
// 		printf("ko");
// }
// int main(void)
// {
// 	char *str;
// 	char *tmp = "HAHAHA \0 tu me vois pas !";

// 	str = ft_strdup(tmp);
// 	if (strcmp(str, tmp))
// 		printf("ko");
// 	free(str);
// 		printf("ok");
// }

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%s", ft_strdup(argv[1]));
// 	return (0);
// }


// int	ft_strlen(char *str);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	main(void)
// {
// 	int b;

// 	char a[] = "abcde";
// 	b = ft_strlen(a);
// 	ft_putchar (b + '0');
// 	ft_putchar('\n');
// 	return (0);
// }


// int	main(void)
// {
// 	char dest[40] = "vika";
// 	char app[40] = "viki";
// 	int n = 3;

// 	printf("%s", strncat(dest, app, n));
// 	return (0);
// }


// int	ft_strncmp(const char *s1, const char *s2, size_t n);

// int main(void)
// {
// 	char *s1 = "q";
// 	char *s2 = "a";
// 	size_t size = 0;

// 	int i1 = strncmp(s1, s2, size);
// 	int i2 = ft_strncmp(s1, s2, size);
// 	printf("%d\n %d\n", i1, i2 );
// 	return (0);

// }

// int main(void)
// {
// 	char *s1 = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char *s2 = "there is no stars in the sky";
// 	size_t size = strlen("the cake is a lie !\0I'm hidden lol\r\n");
// 	int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ? -1 : 0));
// 	int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));

// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("%d\n %d\n", i1, i2);
// }


// int main(void)
// {
// 	char *s1 = "\200";
// 	char *s2 = "\0";
// 	int i1 = ((strncmp(s1, s2, 1) > 0) ? 1 : ((strncmp(s1, s2, 1) < 0) ? -1 : 0));
// 	int i2 = ((ft_strncmp(s1, s2, 1) > 0) ? 1 : ((ft_strncmp(s1, s2, 1) < 0) ? -1 : 0));

// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
// 	char *s2 = "\x12\x02";
// 	size_t size = 6;
// 	int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ? -1 : 0));
// 	int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));

// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("ko");
// 	return (0);
// }

// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d\n", ft_strncmp(argv[1], argv[2], 3));
// 	return (0);
// }



// char *ft_strncpy(char *dest, const char *src, size_t n);

// int main(void)
// {
// 	char *src = "stars";
// 	char dst1[50];
// 	char dst2[50];
// 	size_t max = 50;

// 	memset(dst1, 'B', sizeof(dst1));
// 	memset(dst2, 'B', sizeof(dst2));
// 	strncpy(dst1, src, max);
// 	ft_strncpy(dst2, src, max);
// 	if (memcmp(dst1, dst2, max))
// 	{
// 		printf("%s\n %s\n", dst1, dst2);
// 	}
// 	else
// 		printf("ok");
// }

// int main(void)
// {
// 	char *src = "this is a string with a \0 inside";
// 	char dst1[50];
// 	char dst2[50];
// 	size_t max = 31;

// 	memset(dst1, 'B', sizeof(dst1));
// 	memset(dst2, 'B', sizeof(dst2));
// 	strncpy(dst1, src, max);
// 	ft_strncpy(dst2, src, max);
// 	if (strcmp(dst1, dst2))
// 	{
// 		printf("%s\n %s\n", dst1, dst2);
// 	}
// 	else
// 		printf("ok");
// }

// int main(void)
// {
// 	char *src = "";
// 	char dst1[30];
// 	char dst2[30];
// 	size_t max = 29;

// 	memset(dst1, 'B', sizeof(dst1));
// 	memset(dst2, 'B', sizeof(dst2));
// 	strncpy(dst1, src, max);
// 	ft_strncpy(dst2, src, max);
// 	if (memcmp(dst1, dst2, 29))
// 	{
// 		printf("%s\n %s\n", dst1, dst2);
// 	}
// 	else
// 		printf("ok");
// }

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char dest[100] = "vika";
// 	char src[100] = "anny";

// 	strncpy(dest, src, 3);
// 	printf("%s", dest);
// 	return  (0);
// }


// char *ft_strnstr(const char *strB, const char *strA, size_t n);

// int main(void)
// {
// 	char *s1 = "";
// 	char *s2 = "asdfgh";
// 	size_t max = 5;
// 	char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(((void *)0), "fake", 3);

// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("%s\n %s\n", i1, i2);

// }

// int main(void)
// {
// 	char *s1 = "MZIRIBMZIRIBMZE123";
// 	char *s2 = "MZIRIBMZE";
// 	size_t max = strlen(s2);
// 	char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, max);

// 	if (i1 == i2)
// 		printf("ok");
// 	else
// 		printf("%s\n %s\n", i1, i2);
// }

// void	ft_putchar(char c)
// {
// 	write (1, &c, 1);
// } 

// void	ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	(void)argc;
	// ft_putstr(ft_strnstr(argv[1], argv[2], 3));
// 	return (0);
// }


// char *ft_strrchr(const char *str, int ch);

// int	main(void)
// {
// 	char str[100] = "viki";
// 	int ch = 'k';

// 	printf("%s", ft_strrchr(str, ch));
// 	return (0);
// }


// char *ft_strstr(const char *strB, const char *strA);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char *s1 = "abcdevika";
// 	char *s2 = "vika";

// 	printf("%s", ft_strstr(s1, s2));
// 	return (0);
// }


// int	ft_toupper(int c);

// int main(void)
// {
// 	int i;

// 	i = -100;
// 	while (i < 530)
// 	{
// 		if (ft_toupper(i) != toupper(i))
// 		{
// 			printf("%d", i);
// 		}
// 		i++;
// 	}
// 	printf("ok");
// 	return (0);
// }

// int	main(void)
// {
// 	int c = 'A';
// 	printf("%d", ft_toupper(c));
// 	return (0);
// }


// int	ft_toupper(int c);

// int	main(void)
// {
// 	int c = 'a';
// 	printf("%d", ft_toupper(c));
// 	return (0);
// }


// char	*ft_itoa(int n);

// int	main(void)
// {
// 	int i;

// 	i = 00000;
// 	printf("%s", ft_itoa(i));
// 	return (0);
// }

// void	*ft_memalloc(size_t size);

// int	main(void)
// {
// 	char *buf;

// 	buf = ft_memalloc(16);
// 	buf = "annydanny";
// 	printf("%s\n", buf);
// 	free(buf);
// 	printf("%s\n", buf);
// 	return (0);
// }

// void	ft_memdel(void **ap);

// int main(void)
// {
// 	void *m = malloc(42);

// 	ft_memdel(&m);
// 	if (m == ((void *)0))
// 		printf("ok");
// 	else
// 		printf("ko");
// 	return (0);
// }

// int main(void)
// {
// 	void *m = malloc(42);
// 	ft_memdel(&m);
// 	if (m != ((void *)0))
// 		free(m);
// 	write(1, "", 1);
// 	write(1, "", 1);
// 	return (0);
// }

// void	ft_putendl(char const *s);

// int	main(void)
// {
// 	char *s;
// 	s = "vika";
// 	ft_putendl(s);
// 	return (0);
// }


// void	ft_putendl_fd(char const *str, int fd);

// int	main(void)
// {
// 	char *str;
// 	str = "vika";
// 	ft_putendl_fd(str, 1);
// 	return (0);
// }


void	ft_putnbr(int n);

int	main(void)
{
	long long int i;

	i = -327679999999999;
	ft_putnbr(i);
	return (0);
}


// void	ft_putstr(char const *s);

// int	main(void)
// {
// 	char *str;
// 	str = "vika";
// 	ft_putstr(str);
// 	return (0);
// }



// void	ft_putstr_fd(char const *s, int fd);

// int	main(void)
// {
// 	char *str;
// 	str = "vika";
// 	ft_putstr_fd(str, 2);
// 	return (0);
// }



// void	ft_strclr(char *s);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		ft_putchar(*str++);
// }

// int	main(void)
// {
// 	char *str;

// 	str = "jjj";
// 	ft_strclr(str);
// 	// printf("%s", str);
// 	return (0);
// }



// int	ft_strnequ(char const *s1, char const *s2, size_t n);

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d\n", ft_strnequ(argv[1], argv[2], 5));
// 	return (0);
// }



// int	ft_strequ(char const *s1, char const *s2);

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%d\n", ft_strequ(argv[1], argv[2]));
// 	return (0);
// }



// void	ft_striter(char *s, void(*f)(char *));

// void	ft_check(char *str)
// {
// 	printf("%s\n", str);
// }

// int	main(void)
// {
// 	char *s;
// 	s = "vika";
// 	ft_striter(s, &ft_check);
// 	return (0);
// }



// void	ft_striteri(char *s, void (*f)(unsigned int, char *));

// // void	ft_putchar(char c)
// // {
// // 	write(1, &c, 1);
// // }

// // void	ft_put(unsigned int index, char *str)
// // {
// // 	int i;
// // 	int t;

// // 	i = 0;
// // 	// t = 3;
// // 	while (str[i] != '\0')
// // 	{
// // 		// printf("%d\n", index);
// // 		if (index % 2)
// // 		{
// // 			ft_putchar(str[i]);
// // 		}
// // 		i++;
// // 	}
// // 	ft_putchar('\n');
// // }

// void	ft_put(unsigned int i, char *s)
// {
// 	printf("%s\n %d\n", s, i);
// }

// int	main(void)
// {
// 	char *s;
// 	s = "hello";
// 	ft_striteri(s, &ft_put);
// 	return (0);
// }



// char *ft_strjoin(char const *s1, char const *s2);

// int main(void)
// {
// 	char *s1 = "where is my ";
// 	char *s2 = "malloc ???";

// 	char *res = ft_strjoin(s2, s1);
// 	if (res == ((void *)0))
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	char *s1 = "my favorite animal is";
// 	char *s2 = " ";
// 	char *s3 = "the nyancat";
// 	char *tmp = ft_strjoin(s1, s2);
// 	char *res = ft_strjoin(tmp, s3);

// 	free(tmp);
// 	if (!strcmp(res, "my favorite animal is the nyancat"))
// 	{
// 		free(res);
// 		printf("ok");
// 	}
// 	else
// 	{
// 		free(res);
// 		printf("ko");
// 	}
// }

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		ft_putchar(*str++);
// }

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	ft_putstr(ft_strjoin(argv[1], argv[2]));
// 	return (0);
// }



// char	*ft_strmap(char const *s, char (*f)(char));

// char			f_strmap(char c)
// { 
// 	return (c + 7);
// }


// // void			test_ft_strmap_basic(void *ptr) 
// // {
// // 	char	*b = "override this !";
// // 	char	b2[0xF0];
// // 	size_t	size = strlen(b);
	
// // 	for (size_t i = 0; i < size; i++)
// // 	b2[i] = f_strmap(b[i]);
// // 	b2[size] = 0;
// // 	char	*ret = ft_strmap(b, f_strmap);
// // 	if (!strcmp(b2, ret))
// // 	exit(TEST_SUCCESS);
// // 	SET_DIFF(ret, b2);
// // 	exit(TEST_FAILED);
// // }


// int main(void)
// {
// 	char *b = "vika oleg!";

// 	// char *newstr = ft_strmap(b, f_strmap);
// 	printf("%s\n", ft_strmap(b, &f_strmap));
// 	// if (newstr == ((void *)0))
// 	// 	printf("ok");
// 	// else
// 	// 	printf("ko");
// }

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		ft_putchar(*str++);
// }

// char	vika(char c)
// {
// 	if (c <= 'z' && c >= 'a')
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char *s;
// 	s = "abbcd";
// 	ft_putstr(ft_strmap(s, &vika));
// 	return (0);
// }



// char 	*ft_strmapi(char const *s, char(*f)(unsigned int, char));

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		ft_putchar(*str++);
// }

// char	vika(unsigned int index, char c)
// {
// 	if (index % 2 == 0)
// 			return (c);
// 	return ('a');
// }

// int	main(void)
// {
// 	char *str;
// 	str = "vikahghghg";
// 	printf("%s\n", ft_strmapi(str, &vika));
// 	return (0);
// }


// void	ft_strdel(char **as);

// int main(void)
// {
// 	void *m = malloc(42);

// 	(char *) m;
// 	ft_strdel(&m);
// 	if (m == ((void *)0))
// 		printf("ok");
// 	else
// 		printf("ko");
// 	return (0);
// }

// char 	*ft_strnew(size_t size);

// int	main(void)
// {
// 	printf("%s", ft_strnew(5));
// 	return (0);
// }


// char	**ft_strsplit(char const *s, char c);

// int main(void)
// {
// 	char	**ret = (char*[2]){"olol", NULL};
// 	char *s = "olol                     ";
// 	char **r = ft_strsplit(s, ' ');

// 	while (*r)
// 	{
// 		if (strcmp(*r, *ret))
// 		{
// 			printf("ko");
// 		}
// 		r++;
// 		ret++;
// 	}
// 	printf("ok");
// }

// int main(void)
// {
// 	char	**ret = (char*[1]){NULL};
// 	char *s = "                  ";
// 	char **r = ft_strsplit(s, ' ');

// 	while (*r)
// 	{
// 		if (strcmp(*r, *ret))
// 		{
// 			printf("ko");
// 		}
// 		r++;
// 		ret++;
// 	}
// 	printf("ok");
// }

// int main(void)
// {
// 	char **ret = (char*[6]){"split", "this", "for", "me", "!", NULL};
// 	char *s = "     split       this for   me  !       ";
// 	char **r = ft_strsplit(s, ' ');

// 	while (*r)
// 	{
// 		if (strcmp(*r, *ret))
// 		{
// 			printf("ko");
// 		}
// 		r++;
// 		ret++;
// 	}
// 	printf("ok");
// }

// int	main(void)
// {
// 	char *str;
// 	char **array;
// 	int num;

// 	str = "*hello*fellow*students*";
// 	array = ft_strsplit(str, '*');
// 	num = 0;
// 	while (array[num] != NULL)
// 	{
// 		printf("%s\n", array[num]);
// 		num++;
// 	}
// 	return (0);
// }


// char	*ft_strsub(char const *s, unsigned int start, size_t len);

// int main(void)
// {
// 	char *str = "i just want this part #############";
// 	size_t size = 20;
// 	char *ret = ft_strsub(str, 5, size);

// 	if (!strncmp(ret, str + 5, size))
// 	{
// 		// free(ret);
// 		printf("ok");
// 	}
// 	// free(ret);
// 	printf("%s\n", ret);
// 	return (0);
// }

// int main(void)
// {
	
// }

// int	main(void)
// {
// 	char *s;

// 	s = "vika";
// 	printf("%s", ft_strsub(s, 2, 10));
// 	return (0);
// }


// char	*ft_strtrim(char const *s);

// int main(void)
// {
// 	char *s1 = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	int r_size = strlen(s2);
// 	int size;

// 	ft_strtrim(s1);
// 	size = get_last_malloc_size();
// 	if (size == r_size + 1)
// 		exit(TEST_SUCCESS);
// 	exit(TEST_KO);
// }

// int main(void)
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
// 	char *s2 = "";
// 	char *ret = ft_strtrim(s1);

// 	if (!strcmp(ret, s2))
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// 	char *s2 = "Hello \t  Please\n Trim me !";

// 	char *ret = ft_strtrim(s1);
// 	if (!strcmp(s2, ret))
// 	{
// 		// free(ret);
// 		printf("ok");
// 	}
// 	else
// 	// free(ret);
// 		printf("ko");
// }

// int main(void)
// {
// 	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	char *ret = ft_strtrim(s1);

// 	if (!strcmp(ret, s2))
// 	{
// 		// free(ret);
// 		printf("ok");
// 	}
// 	else
// 	// free(ret);
// 		printf("ko");
// }

// int main(void)
// {
// 	char *s1 = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	int r_size = strlen(s2);
// 	int size;

// 	ft_strtrim(s1);
// 	size = get_last_malloc_size();
// 	if (size == r_size + 1)
// 		printf("ok");
// 	else
// 		printf("ko");
// }

// int main(void)
// {
// 	char *s1 = "Hello \t  Please\n Trim me !";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	char *ret = ft_strtrim(s1);

// 	if (!strcmp(ret, s2))
// 		printf("ok");
// 	else
// 		printf("%s\n %s\n", ret, s2);
// }

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		ft_putchar(*str++);
// }

// int	main(void)
// {
// 	char *s;

// 	s = "vika";
// 	ft_putstr(ft_strtrim(s));
// 	return (0);
// }











































