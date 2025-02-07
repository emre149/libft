/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 11:57:55 by ededemog          #+#    #+#             */
/*   Updated: 2025/02/07 13:09:20 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 04:00:05 by ededemog          #+#    #+#             */
/*   Updated: 2024/02/05 02:25:06 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct sg_list
{
	char			*content;
	struct s_list	*next;
}	tg_list;

char	*get_next_line(int fd);

void	read_to_stash(int fd, tg_list **stash);

tg_list	*ft_lstlast(tg_list *list);

int		newline(tg_list *stash);

void	stash_to_line(tg_list *stash, char **line);

void	line_allocation(char **line, tg_list *stash);

int		ft_strlen(const char *str);

void	add(t_list **stash, char *buf, int already_read);

void	free_stash(t_list *stash);

void	clean(t_list **stash);

#endif