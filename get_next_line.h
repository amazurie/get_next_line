/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amazurie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 10:10:16 by amazurie          #+#    #+#             */
/*   Updated: 2016/11/30 13:38:52 by amazurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>

# define BUFF_SIZE 8

typedef struct	s_line
{
	int				fd;
	char			*line;
	struct s_line	*next;
}				t_line;

int				get_next_line(const int fd, char **line);

#endif
