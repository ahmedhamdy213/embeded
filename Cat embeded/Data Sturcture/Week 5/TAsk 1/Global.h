#ifndef GLOBAL_H
#define GLOBAL_H






typedef struct elementtype{
	
	short int	etype; 
	union{
		int		year;
		float	age;
		void	*ptr;
		char	par;
	}info;
}ElementType;

#define MAXELEMENTS 2
#define maxQueue 2
typedef ElementType QueueEntry;
#define MAXQUEUE MAXELEMENTS


typedef void * StackEntry;
#define MAXSTACK MAXELEMENTS


#endif