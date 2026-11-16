/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neph <neph@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:48:27 by nepcohen          #+#    #+#             */
/*   Updated: 2026/11/16 02:24:22 by neph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PROG ===================================================================== */
int	ft_atoi(const char *nptr)
{
	int	count;
	int	result;
	int	symbol;

	count = 0;
	result = 0;
	symbol = 1;
	while (nptr[count] == 32 || (nptr[count] >= 9 && nptr[count] <= 13))
		count++;
	if (nptr[count] == '-' || nptr[count] == '+')
	{
		if (nptr[count] == '-')
			symbol = -1;
		count++;
	}
	while (nptr[count] >= '0' && nptr[count] <= '9')
	{
		result = result * 10 + (nptr[count] - '0');
		count++;
	}
	return (symbol * result);
}
/* MAIN ===================================================================== */
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		printf("Merci de saisir un argument");
	else
		printf("INT : `%d`\n", ft_atoi(argv[1]));
	return (0);
}
*/
/* ========================================================================== */
/* END ============================================================= 42_ ==== */
/* ================================================================= NEPHCODE */
