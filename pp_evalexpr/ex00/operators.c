/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 11:08:36 by jjacobi           #+#    #+#             */
/*   Updated: 2016/08/18 14:07:40 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		addition(int one, int two)
{
	int result;

	result = one + two;
	return (result);
}

int		substraction(int one, int two)
{
	int result;

	result = one - two;
	return (result);
}

int		multiplication(int one, int two)
{
	int result;

	result = one * two;
	return (result);
}

int		division(int one, int two)
{
	int result;

	result = one / two;
	return (result);
}

int		modulo(int one, int two)
{
	int result;

	result = one % two;
	return (result);
}
