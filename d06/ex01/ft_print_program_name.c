/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 06:36:41 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/11 17:56:05 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*prog_name;
	int		i;

	prog_name = argv[0];
	i = 0;
	if (argc)
	{
		while (prog_name[i] != '\0')
		{
			ft_putchar(prog_name[i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
