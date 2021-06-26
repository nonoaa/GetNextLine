/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:52:55 by byahn             #+#    #+#             */
/*   Updated: 2021/06/09 13:52:58 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_buff
{
	int				fd;
	char			buffer[BUFFER_SIZE + 1];
	struct s_buff	*next;
}					t_buff;
t_buff				*ft_lstnew(int fd);
int					ft_realloc(char **line, size_t len);
size_t				ft_strlen(char *str);
int					ft_copy_line(t_buff *find, char **line);
t_buff				*ft_find_buffer(int fd, t_buff *buffer);
int					get_next_line(int fd, char **line);
void				ft_list_remove_if(t_buff **head, int fd);
int					rd_error(char **line, t_buff **head, int fd);

#endif
