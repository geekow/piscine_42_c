/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 17:31:14 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/13 02:01:56 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (*(str + index) != '\0')
	{
		ft_putchar(*(str + index));
		index++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	index = 0;
	while (s1[index] == s2[index])
	{
		index++;
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
	}
	result = s1[index] - s2[index];
	return (result);
}

void	sort_args(int argc, char **argv)
{
	char	*temp;
	int		i_1;
	int		i_2;

	i_1 = 1;
	i_2 = 1;
	while (i_1 < argc)
	{
		while (i_2 < argc)
		{
			if (ft_strcmp(argv[i_1], argv[i_2]) < 0)
			{
				temp = argv[i_1];
				argv[i_1] = argv[i_2];
				argv[i_2] = temp;
			}
			i_2++;
		}
		i_2 = 1;
		i_1++;
	}
}

int		main(int argc, char **argv)
{
	int counter;

	counter = 1;
	if (argc > 1)
	{
		sort_args(argc, argv);
		while (counter < argc)
		{
			ft_putstr(argv[counter]);
			ft_putchar('\n');
			counter++;
		}
	}
	else if (argc == 1)
	{
		return (0);
	}
	return (0);
}
