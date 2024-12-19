/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <mapareci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:12:47 by mapareci          #+#    #+#             */
/*   Updated: 2024/12/19 15:12:54 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

/* INCLUDES */
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "../libft/libft.h"

/* FUNCTIONS ON PIPEX.C */
int		main(int argc, char **argv, char **envar);

/* FUNCTIONS ON PPX_PROCESSES.C */
int		open_file(char *fname, int flags);
void	low_process(char **argv, char **envar, int *fd);
void	high_process(char **argv, char **envar, int *fd);

/* FUNCTIONS ON PPX_PATH.C */
void	freethe(char **cmdpath);
char	*getcmd_path(char *cmd, char **envar);

/* FUNCTIONS ON PPX_UTILS.C */
void	errorexit(void);
void	execmd(char *argv, char **envar);
void	print_usage(void);
int		emptycmd(const char *str);

#endif