/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapareci <mapareci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:11:46 by mapareci          #+#    #+#             */
/*   Updated: 2024/12/19 15:11:46 by mapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

int	main(int argc, char **argv, char **envar)
{
	int		fd[2];
	pid_t	lppid;

	if (argc != 5)
	{
		print_usage();
		return (1);
	}
	if (emptycmd(argv[2]) || emptycmd(argv[3]))
	{
		ft_putstr_fd("\033[31mError: One or more commands are empty.\n\033[0m",
			2);
		return (1);
	}
	if (pipe(fd) == -1)
		errorexit();
	lppid = fork();
	if (lppid == -1)
		errorexit();
	if (lppid == 0)
		low_process(argv, envar, fd);
	waitpid(lppid, NULL, WNOHANG);
	high_process(argv, envar, fd);
	return (0);
}
