/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_nd_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:53:32 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/04/09 05:55:55 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	long	data;
	t_stack	*tmp;
	data = 1;
	// data = pop_el(b, a);
	tmp = pop_el(b);
	if (!tmp)
		return ;
	ft_putstr_fd("pa\n", 1);
	if (!*a)
		tmp->size = 1;
	else
		tmp->size = (*a)->size + 1;
	ft_lstadd_front(a, tmp);
	ft_lstiter(*a, tmp->size);
	// push_el(a, tmp->x, (*a)->min, (*a)->max);
	// free(tmp);
}

void	pb(t_stack **a, t_stack **b)
{
	long	data;
	t_stack	*tmp;
	data = 1;
	// data = pop_el(b, a);
	tmp = (pop_el(a));
	if (!tmp)
		return ;
	ft_putstr_fd("pb\n", 1);
	if (!(*b)){
		tmp->size = 1;
	}
	else
		tmp->size = (*a)->size + 1;
	ft_lstadd_front(b, tmp);
	ft_lstiter(*b, tmp->size);
	// if (data == 0 && !((*a)->next) && ((*b)->size) == 0)
	// 	return ;
	// push_el(b, tmp->x, (*a)->min, (*a)->max);
	// free(tmp);
}

void	sa(t_stack	**a, int mode)
{
	t_stack	*first;
	t_stack	*second;

	if (!(*a)->next)
		return ;
	first = (*a);
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	if (mode == 1)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **b, int mode)
{
	t_stack	*first;
	t_stack	*second;

	if (!(*b)->next)
		return ;
	first = (*b);
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	if (mode == 1)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack	**a, t_stack **b)
{
	sa(a, 0);
	sb(b, 0);
	ft_putstr_fd("ss\n", 1);
}
