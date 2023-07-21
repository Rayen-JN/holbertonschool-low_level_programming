3 - calc.h

#ifndef HEADER
#define HEADER

#include <stdlib.h>

	/**
	 * struct op - struct op
	 * @op: operator
	 * @f: function
	 */
	typedef struct op
{
	char op;
	int (*f)(int a, int b);
} op_t;

int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
