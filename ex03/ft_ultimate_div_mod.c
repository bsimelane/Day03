/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsimelan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:18:11 by bsimelan          #+#    #+#             */
/*   Updated: 2020/06/24 15:55:24 by bsimelan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod) 
{
	int i;

	int j;

	div = &i;

	mod = &j;

	i  = a / b;

	j = a % b;
}	

