/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:03:34 by xmatute-          #+#    #+#             */
/*   Updated: 2024/10/09 18:05:49 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap_p(void **p1, void **p2)
{
    void **tmp = p1;

    p1 = p2;
    p2 = tmp;
}