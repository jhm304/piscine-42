/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:15:06 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/12 21:06:13 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str[i] -= 32;
	while (str[i] != '\0')
	{
		if (str[i - 1] < 65
				|| (str[i - 1] > 90
					&& str[i - 1] < 97) || str[i - 1] > 122)
			if (str[i] > 96 && str[i] < 123
					&& (str[i - 1] < 48 || str[i - 1] > 57))
				str[i] -= 32;
		i++;
	}
	return (str);
}
