#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

// int main(void)
// {
// 	int	fd;
//     char *line;

// 	fd = open("myfile.txt", O_RDONLY);

// 	while(get_next_line(fd, &line))
// 	{
// 		printf("%s\n", line);
// 		free(line);
// 	}
// 	free(line);
// 	return (0);
//}

int main (void)
{
    int fd;
    char *line;
     fd = open("myfile.txt", O_RDONLY);
    while(get_next_line(fd, &line))
    {
        printf("%s\n", line);
        free(line);
    }
    free(line);
    return (0);
}