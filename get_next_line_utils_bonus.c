/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:52:15 by byahn             #+#    #+#             */
/*   Updated: 2021/06/09 13:52:18 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

t_buff		*ft_lstnew(int fd)
{
	t_buff	*out;

	if (!(out = (t_buff *)malloc(sizeof(t_buff))))
		return (0);
	out->fd = fd;
	out->buffer[0] = 0;
	out->next = 0;
	return (out);
}

int			ft_realloc(char **line, size_t len)
{
	char	*out;
	size_t	i;

	if (!(out = (char *)malloc(sizeof(char) * (len + BUFFER_SIZE + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		out[i] = (*line)[i];
		i++;
	}
	out[i] = '\0';
	free(*line);
	*line = out;
	return (1);
}

size_t		ft_strlen(char *str)
{
	size_t		len;

	if (!str)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
