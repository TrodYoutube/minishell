#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "libft/libft.h"

int	main(int ac, char *av[], char **envp)
{
	char *line;
	(void)av;
	(void)envp;
	(void)ac;
	while (1)
	{
		line = readline("minishell$ ");
		if (!line)
			break;
		ft_putstr_fd(line, 1);
		printf("\n");
		free(line);
	}
	ft_putstr_fd("exit", 1);
	printf("\n");
	return 0;
}