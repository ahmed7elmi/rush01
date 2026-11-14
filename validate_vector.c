/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dankubov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:12:47 by dankubov          #+#    #+#             */
/*   Updated: 2026/11/14 16:30:49 by dankubov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_vector(int v[], int left, int right, int size)
{
	int	i;
	int	view;
	int	truer;
	int	falser;

	truer = 1;
	falser = 0;
	i = 0;
	view = 0;
	while (v[i] < size)
	{
		if (v[i] > view)
			view++;
		if (view > left)
			return falser;
		i++;
	}
	if (view != left)
		return falser;
	while (v[i] > size)
	{
		if (v[i] > view)
			view++;
		if (view > right)
			return falser;
		i++;
	}
	if (view != right)
		return falser;
	else
		return truer;
}

int	main(void)
{
	int	v[] = {1, 2, 3, 4};

	validate_vector(v, 4, 1, sizeof(v));
	return (0);
}
