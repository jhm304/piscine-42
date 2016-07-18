/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 21:43:47 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/15 14:26:22 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = (((str[i] - 'a') + 42) % 26) + 'a';
		}
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = (((str[i] - 'A') + 42) % 26) + 'A';
		}
		i++;
	}
	return (str);
}
