/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clipping.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baudiber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 00:27:28 by baudiber          #+#    #+#             */
/*   Updated: 2018/06/21 00:46:30 by baudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_hpt	clipping(t_hpt p1)
{
	if (p1.x < 0)
		p1.x = 1;
	if (p1.y < 0)
		p1.y = 1;
	if (p1.x > WIDTH - 2)
		p1.x = WIDTH - 2;
	if (p1.y > HEIGHT - 2)
		p1.y = HEIGHT - 2;
	return (p1);
}
