#include "main.h"
#include <stdarg.h>

int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, k;
	char *str;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			if (format[i + 1] == 'c')
			{
				i++;
				_putchar(va_arg(args, int));
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				k = 0;
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
			}

		}
		i++;
	}

	va_end(args);

	return (0);
}
