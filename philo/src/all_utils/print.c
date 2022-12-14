/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <lter-zak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:26:26 by lter-zak          #+#    #+#             */
/*   Updated: 2022/11/26 19:33:29 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	error(char *str)
{
	printf("%s\n", str);
	return (1);
}

void	ft_printf(char *str, t_philo *philo)
{	
	pthread_mutex_lock(philo->write);
	if (str[0] == 'O' && str[1] == 'K')
		printf("OK\n");
	else
	{
		printf("time -> %lld\t", ft_time() - philo->start_time);
		printf("%d\t", philo->id);
		printf("%s\n", str);
		pthread_mutex_unlock(philo->write);
	}
}
