/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarcia- <igarcia-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:26:36 by igarcia-          #+#    #+#             */
/*   Updated: 2022/03/01 18:41:27 by igarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **str, int size)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			j++;
			s++;
		}
		i++;
	}
	return (s);
}

int	ft_strlong(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char **strs, char *sep, int size)
{
	int	i;
	int	c;
	int	j;

	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		dest[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			dest[c++] = sep[j++];
		i++;
	}
	dest[c] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		l;
	char	*dest;

	if (size == 0)
	{
		dest = (char *) malloc (1 * (sizeof(char)));
		dest[0] = '\0';
		return (dest);
	}
	l = ft_strlen(strs, size) + (ft_strlong(sep) * (size - 1)) + 1;
	dest = (char *) malloc (l * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, strs, sep, size);
	return (dest);
}

int main() {
    char *cadena[3];
    cadena[0] = "holacrack";
    cadena[1] = "adioscrack";
    cadena[2] = "guapo";
    printf("%s", ft_strjoin(3, cadena, "   "));
}
