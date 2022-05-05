/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:09:53 by yeongele          #+#    #+#             */
/*   Updated: 2022/05/05 11:25:06 by yeongele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_str_fill(char *str, int size, char id);
char	**ft_split(char *data, char *charset);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *src);
void	free_matrix(char **strs);
#endif
