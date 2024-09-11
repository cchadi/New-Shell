/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:31:09 by csaidi            #+#    #+#             */
/*   Updated: 2024/09/06 15:46:25 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	if (!s || !s[len])
		return (0);
	while (s[len])
	{
		len++;
	}
	return (len);
}
