/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madavid <madavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:09:01 by madavid           #+#    #+#             */
/*   Updated: 2023/01/08 22:49:21 by madavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int			i;
	int			j;
	char		*s_new;

	i = 0;
	j = 0;
	if (!s1 || ! s2)
		return (NULL);
	s_new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (s_new == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s_new[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
		s_new[i++] = s2[j++];
	if (ft_strlen(s1) != 0)
		free(s1);
	return (s_new[i] = 0, s_new);
}

int	find_new_line(char *buffer)
{
	int	i;

	i = 0;
	if (buffer == NULL)
		return (0);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n' && (i != ft_strlen(buffer)))
		return (i + 1);
	else
		return (0);
}
