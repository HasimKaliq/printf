#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

int _printf(const char *format, ...) {
   
    va_list args; 
    va_start(args, format);
  
    int formatCounter, indexer = 0;
    unsigned int i;
    int strCounter = 0;
    char *s;

    for(formatCounter = 0; format[formatCounter] != '\0'; formatCounter++) {
        if(format[formatCounter] == '%') { 
          formatCounter++; 
          
            if(format[formatCounter] == 'c'){
                   i = va_arg(args, int);
                    puts(i);
                    break;
            }
            else if (format[formatCounter] == 's'){
                    s - va_arg(args, char *);
                    puts(s);
                    while (s[strCounter] != '\0')
                    {
                        strCounter++;
                    }
                    return (strCounter);
                    break;
            }
            else if(format[formatCounter] == '%'){

            }

        }
       
    }
}
