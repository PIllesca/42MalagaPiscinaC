/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:56:55 by pillesca          #+#    #+#             */
/*   Updated: 2024/10/02 19:44:36 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/**
 * Función que imprime un mensaje al recibir una señal
 * 
 * @param[in] signum Número de la señal
 * @param[in] info Información de la señal
 * @param[in] context Contexto de la señal
 */
static void	ft_receive_sig(int signum, siginfo_t *info, void *context)
{
	(void)signum;
	(void)info;
	(void)context;
	ft_putstr("Confirmation signal received\n");
	exit(EXIT_SUCCESS);
}

/**
 * Función que envia un caracter mediante señales
 * 
 * @param[in] pid PID del proceso al que se le enviará la señal
 * @param[in] c Caracter a enviar
 */
static void	ft_send_sig(int pid, char c)
{
	unsigned long	i;

	i = 0;
	while (i < 8)
	{
		if (c & (1 << i))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i++;
	}
}

/**
 * Función principal
 * Recibe un PID y un mensaje y envia el mensaje caracter por caracter
 * 
 * @param[in] argc Cantidad de argumentos
 * @param[in] argv Argumentos
 */
int	main(int argc, char *argv[])
{
	int					pid;
	int					i;
	struct sigaction	s_sa;

	if (argc != 3)
	{
		ft_putstr("Error, Usage: ./client [PID] [Message]\n");
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	i = 0;
	s_sa.sa_flags = SA_SIGINFO;
	s_sa.sa_sigaction = ft_receive_sig;
	sigaction(SIGUSR1, &s_sa, NULL);
	while (argv[2][i])
	{
		ft_send_sig(pid, (unsigned char)argv[2][i]);
		i++;
	}
	ft_send_sig(pid, '\0');
	pause();
	exit(EXIT_SUCCESS);
}
