#include "gs_stack.h"
#include "gs_prototypes.h"

void	_gs_snode_sort(t_snode *node, int (*cmp)(void *, void *))
{
	void	*tmp;
	int		swap;

	swap = 1;
	while (swap)
	{
		swap = 0;
		while (node->next)
		{
			if ((*cmp)(node->data, node->next->data) > 0)
			{
				tmp = node->data;
				node->data = node->next->data;
				node->next->data = tmp;
				swap = 1;
			}
			node = node->next;
		}
	}
	
}

void	gs_stack_sort(t_stack *stack, int (*cmp)(void *, void *))
{
	if (stack && stack->size > 1)
		_gs_snode_sort(stack->head, cmp);
}
