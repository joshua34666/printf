#include "main.h"

/**
<<<<<<< HEAD
 * get_precision - gets the precision from the format string
 * @p: the format string
 * @params: the parameters struct
 * @ap: the argument pointer
 *
 * Return: new pointer
=======
 * print_str - writes the string to stdout
 * @arguments: input string
 * @buf: pointer to buffer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
>>>>>>> 677e03caf1de706733629c8cfa85d1439cdf6add
 */
char *get_precision(char *p, params_t *params, va_list ap)
{
	int d = 0;

	if (*p != '.')
		return (p);
	p++;
	if (*p == '*')
	{
		d = va_arg(ap, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}

	params->precision = d;
	return (p);
}
