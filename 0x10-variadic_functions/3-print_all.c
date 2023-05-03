#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	float f;
	char c;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char) va_printf("%c", c);
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", (float) va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                {
                    printf("(nil)");
                }
                else
                {
                    printf("%s", str);
                }
                break;
            default:
                break;
        }
        if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
        {
            printf(", ");
        }
        i++;
    }

    printf("\n");
    va_end(args);
}
