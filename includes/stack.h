#ifndef STACK_H
# define STACK_H

typedef struct		s_node
{
	int				value;
	size_t			index;

	struct s_node	*next;
}					t_node;

typedef struct		s_stack
{
	t_node			*head;
	t_node			*tail;
	size_t			length;

	struct s_stack	*(*new_stack)();
	t_node			*(*push_node)(struct s_stack *stack, int value);
	t_node			*(*pop_node)(struct s_stack *stack);
}					t_stack;
/*
** stack interface
*/
t_stack				*new_stack();
t_node				*push_node(struct s_stack *stack, int value);
t_node				*pop_node(struct s_stack *stack);
void				rm_stack(struct s_stack *stack);

#endif
