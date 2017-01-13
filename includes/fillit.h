/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:14:16 by Niko              #+#    #+#             */
/*   Updated: 2017/01/12 20:57:05 by Niko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE 2048
# include "libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define I1 "#....#....#....#"
# define I2 "####"
# define J1 ".#....#...##"
# define J2 "#....###"
# define J3 "##...#....#"
# define J4 "###....#"
# define L1 "#....#....##"
# define L2 "###..#"
# define L3 "##....#....#"
# define L4 "..#..###"
# define O1 "##...##"
# define S1 ".##..##"
# define S2 "#....##....#"
# define T1 "###...#"
# define T2 ".#...##....#"
# define T3 ".#...###"
# define T4 "#....##...#"
# define Z1 "##....##"
# define Z2 ".#...##...#"

char	*create_map(int size);
char	*reader(char *file);
char	**assign(char *t_read, int file_len);
char	**check_ts(char **tmp, int t_count, char **to_compare);
char	**load_to_compare(void);
char	**resize_pieces(char **tmp, int t_count, int size);
int		check_piece(char *map, char *t, int piece_num);
int		consecutive_letter(char *t);
int		remove_piece(char *map, int piece_num);
int		smallest_square(char **ts, int size);
int		attempt_solve(char *map, char **ts);
void	solve(char **ts, char **map);
void	add_nl(char **ts);
void	assign_letters(char **ts);
void	assign_new_piece(char *tmp, char *t, int to_add);
void	check_file(char **tmp);
void	place_piece(char *map, char *t, int piece_num);
void	throw_error(int code);
#endif
