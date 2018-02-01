#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"


int main(void)
 {
 // 	char *str;
 // 	int fd;


	// fd = open("test_gnl.c", O_RDONLY);
 	// printf("fd %d\n", fd);

 	// printf("%d\n", get_next_line(fd, &str));
 	// printf("str2 %s\n", str);
 	// // // printf("fd1 %d\n", fd1);

 	// printf("%d\n", get_next_line(fd, &str));
 	// printf("str3 %s\n", str);
 	// // printf("fd2 %d\n", fd2);
 	// printf("%d\n", get_next_line(fd, &str));
 	// printf("str4 %s\n", str);
 	// printf("fd %d\n", fd);
 	// // // get_next_line(fd, &str);
 	// printf("fd1 %d\n", fd1);
 	// printf("fd2 %d\n", fd2);
	// // get_next_line(fd, &str);
 // 	printf("str4 %s\n", str);
	// get_next_line(fd, &str);
 // 	printf("str5 %s\n", str);


	char *str;
 	int fd;
 	int fd1;
 	int fd2;
 	int p;

 	p = 0;
	fd = open("test_gnl.c", O_RDONLY);
	fd1 = open("test_gnl2.c", O_RDONLY);
	fd2 = open("test_gnl3.c", O_RDONLY);

	while (p < 3)
	{
		if (get_next_line(fd, &str) == 1)
			printf("str1 %s\n", str);
		else
			p++;
		if (get_next_line(fd1, &str) == 1)
			printf("str2.2 %s\n", str);
		else
			p++;
		if (get_next_line(fd2, &str) == 1)
			printf("str3.2 %s\n", str);
		else
			p++;
	}

 	if (close(fd) == -1)
 		return (0);
 	if (close(fd1) == -1)
 		return (0);
 	if (close(fd2) == -1)
 		return (0);
 	return (0);
 }
