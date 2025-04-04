/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclee <niclee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:09:51 by niclee            #+#    #+#             */
/*   Updated: 2025/03/30 15:30:27 by niclee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <stdio.h>
# include <string.h>
# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"

void    child_process(char *cmd, char **envp);
char    *get_cmd_path(char *cmd, char **envp);
void    execute_command(char *cmd, char **envp);
void    here_doc_mode(char *limiter);

#endif
