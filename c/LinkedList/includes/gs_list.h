#ifndef GS_LIST_H
# define GS_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif
