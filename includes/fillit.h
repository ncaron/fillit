/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:56:05 by Niko              #+#    #+#             */
/*   Updated: 2016/12/05 17:22:04 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE 2048
# include "libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

char	*reader(char *file);
char	**assign(char *t_read);
void	assign_ts(char **ts, char *file, int file_len);
void	assign_letters(char **ts);
void	validator(char **ts);
void	check_ts(char **ts);
void	check_conn(char **ts);
void	throw_error(int code);
void	init_map(char **ts);
#endif
