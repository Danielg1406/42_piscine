/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchikita <mchikita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:32:17 by mchikita          #+#    #+#             */
/*   Updated: 2024/03/27 23:28:56 by mchikita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <fcntl.h>  // For open flags
#include <stdlib.h> // For malloc, free
#include <unistd.h> // For read, write, open, close

char	*read_line_size(int fd, char *line, size_t *len, ssize_t *bytes_read)
{
	size_t	current_size;
	char	byte;

	current_size = 3;
	*bytes_read = read(fd, &byte, 1);
	while (*bytes_read > 0)
	{
		if (*len + 1 > current_size)
		{
			line = ft_simple_realloc(line, current_size, current_size * 2 + 1);
			current_size *= 2;
			if (!line)
			{
				free(line);
				return (NULL);
			}
		}
		line[(*len)++] = byte;
		if (byte == '\n')
			break ;
		*bytes_read = read(fd, &byte, 1);
	}
	return (line);
}

// Reads a single line from a file descriptor 'fd' up to a
// newline character or BUFFER_SIZE characters, whichever comes first.
// Returns the line or NULL on failure.
char	*read_line(int fd)
{
	char	*line;
	ssize_t	bytes_read;
	size_t	len;

	line = malloc(3 * sizeof(char));
	if (!line)
		return (NULL);
	len = 0;
	bytes_read = 0;
	line = read_line_size(fd, line, &len, &bytes_read);
	if (bytes_read <= 0 && len == 0)
	{
		free(line);
		return (NULL);
	}
	line[len] = '\0';
	return (line);
}

// Reads 'line_count' lines from a file descriptor 'fd' into
// an array 'lines'. Returns true on success, false on failure,
// freeing any allocated lines.
char	**read_lines(int fd, size_t *line_count)
{
	char	**lines;
	size_t	current_size;

	lines = (char **)malloc(sizeof(char *));
	if (!lines)
		return (NULL);
	current_size = 1;
	*line_count = 0;
	lines[*line_count] = read_line(fd);
	while (lines[(*line_count)++])
	{
		if (*line_count + 1 > current_size)
		{
			lines = ft_simple_realloc(lines, current_size * 8, 16
					* current_size);
			current_size *= 2;
			if (!lines)
				return (NULL);
		}
		lines[*line_count] = read_line(fd);
	}
	(*line_count)--;
	return (lines);
}

// Opens a file specified by 'filename', counts the lines,
// reads them into an array of strings 'lines', and closes the file.
// Returns the array or NULL on failure.
char	**read_file(const char *filename, size_t *line_count)
{
	int		fd;
	char	**lines;

	if (filename)
		fd = open(filename, O_RDONLY);
	else
		fd = 0;
	if (fd == -1)
		return (false);
	lines = read_lines(fd, line_count);
	if (!lines)
	{
		if (filename)
			close(fd);
		return (NULL);
	}
	if (filename)
		close(fd);
	return (lines);
}

void	free_lines(char **lines)
{
	char	**start;

	start = lines;
	while (*lines)
		free(*lines++);
	free(start);
}
