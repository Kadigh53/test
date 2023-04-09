/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_construction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaoutem- <aaoutem-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 05:44:09 by aaoutem-          #+#    #+#             */
/*   Updated: 2023/04/09 00:05:47 by aaoutem-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"







// long	pop_el(t_stack **stack)
// {
// 	long	data;
// 	t_stack	*tmp;

// 	tmp = (*stack);
// 	if (!is_empty(stack))
// 		return (2147483647 + 2);
// 	data = tmp->x;
// 	((*stack)->next)->size = tmp->size - 1;
// 	*stack = tmp->next;
// 	ft_lstiter(*stack, (*stack)->size);
// 	return (data);
// }

void	init_init(int *k, int *l, t_stack **stack)
{
	int	i;

	int	min;
	int	max;

	i = 0;
	min = k[0];
	max = k[0];
	while (i < *l)
	{
		if (k[i] < min)
			min = k[i];
		if (k[i] > max)
			max = k[i];
		i++;
	}
	(*stack)->min = min;
	(*stack)->max = max;
	(*stack)->next = NULL;
	(*stack)->size = 0;
	(*stack)->x = 0;
}

void	stack_init(int *k, t_stack **A, t_stack **B, int *l)
{
	int	i;
	int	min;
	int	max;

	i = 0;
	min = k[0];
	max = k[0];
	while (i < *l)
	{
		if (k[i] < min)
			min = k[i];
		if (k[i] > max)
			max = k[i];
		i++;
	}
	i = 0;
	// *A = ft_malloc(sizeof(t_stack));
	// *B = ft_malloc(sizeof(t_stack));
	// init_init(k, l, A);
	// init_init(k, l, B);
	*A = NULL;
	*B = NULL;
	while (i < *l)
	{
		push_el(A, k[*l - i - 1], min, max);
		i++;
	}
// 	t_stack	*tmp ;
// 	i =0;
// 	tmp = *A;
// 	printf("\n===========\n\n");
// 	while (tmp)
// 	{
// 			printf("a %d\t|| : max %d || size : %d\n",tmp->x,tmp->max,tmp->size);
// 		tmp = tmp->next;
// 	}
// 	t_stack *pop;
// 	pop = pop_el(A);
// 	int t = pop->x;
// 	push_el(B, t, min, max);
// 	pop = pop_el(A);
// 	push_el(B, pop->x, min, max);
// 	tmp = *B;
// 	printf("\n===========\n\n");
// 	while (tmp)
// 	{
// 			printf("b \t%d\t|| : max %d || size : %d\n",tmp->x,tmp->max,tmp->size);
// 		tmp = tmp->next;
// 	}
// 	tmp = *A;
// 	printf("\n===========\n\n");
// 	while (tmp)
// 	{
// 			printf("a %d\t|| : max %d || size : %d\n",tmp->x,tmp->max,tmp->size);
// 		tmp = tmp->next;
// 	}
}
