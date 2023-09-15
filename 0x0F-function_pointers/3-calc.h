#ifndef CALC_H_3
#define CALC_H_3

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * struct - struct opp
 * @op: pointer to a string
 * @f: pointer to a function
 * Description: this structure contains pointers to string and functions
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}op_t;

#endif
