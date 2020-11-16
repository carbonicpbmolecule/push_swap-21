#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	node->value = value;
	node->index = 0;
	node->next = NULL;
	return (node);
}

t_node	*push_node(struct s_stack *stack, int value)
{
	t_node	*node;

	node = new_node(value);
	if (node == NULL || stack == NULL)
	{
		free(node);
		return (NULL);
	}
	if (stack->head == NULL)
	{
		stack->head = node;
		stack->tail = node;
	}
	else
	{
		node->next = stack->head;
		stack->head = node;
	}
	stack->length++;
	return (stack->head);
}

t_node	*pop_node(struct s_stack *stack)
{
	t_node	*tmp;

	if (stack == NULL)
	{
		return (NULL);
	}
	tmp = stack->head;
	if (tmp != NULL)
	{
		stack->head = stack->head->next;
		free(tmp);
		stack->length--;
	}
	if (stack->length == 0)
	{
		stack->tail = NULL;
	}
	return (stack->head);
}

void	rm_stack(struct s_stack *stack)
{
	t_node	*pointer;
	t_node	*tmp;
	size_t	i;

	if (stack->head != NULL)
	{
		pointer = stack->head->next;
		tmp = stack->head;
		i = 0;
		while (i < stack->length)
		{
			free(tmp);
			tmp = pointer;
			if (pointer != NULL)
			{
				pointer = pointer->next;
			}
			i++;
		}
	}
	free(stack);
}

t_stack	*new_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (stack == NULL)
	{
		return (NULL);
	}
	stack->head = NULL;
	stack->tail = NULL;
	stack->length = 0;
	stack->new_stack = new_stack;
	stack->push_node = push_node;
	stack->pop_node = pop_node;
	return (stack);
}
