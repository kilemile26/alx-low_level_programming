#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list args;
    char *str;
    int num;
    float fnum;
    int i = 0, j = 0;

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                num = va_arg(args, int);
                printf("%d", num);
                break;
            case 'f':
                fnum = va_arg(args, double);
                printf("%f", fnum);
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
                j = 1;
                break;
        }
        if (format[i + 1] && !j)
        {
            printf(", ");
        }
        i++;
    }
    printf("\n");

    va_end(args);
}
