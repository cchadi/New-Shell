/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:55:09 by achakour          #+#    #+#             */
/*   Updated: 2024/09/04 21:59:10 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

t_shell	*tokens_new(void)
{
	t_shell	*new;

	new = malloc(sizeof(t_shell));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->args = NULL;
	new->cmd = NULL;
	new->err = 0;
	new->out = 1;
	new->in = 0;
	return (new);
}

t_arg	*arg_new(char *cmd)
{
	t_arg	*new;

	new = malloc(sizeof(t_arg));
	if (!new)
		return (NULL);
	new->arg = ft_strdup(cmd);
	new->next = NULL;
	return (new);
}

void	lst_rje3_lor(t_arg **lst, t_arg *new)
{
	t_arg	*head;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	head = *lst;
	while (head->next != NULL)
		head = head->next;
	head->next = new;
}
