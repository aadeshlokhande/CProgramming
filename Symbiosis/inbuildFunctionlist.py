# In C programming, several standard library functions are available, categorized into different libraries such as stdio.h, stdlib.h, string.h, math.h, and more. Below is a list of some common functions from these libraries:

### <stdio.h> (Standard Input/Output Library)
"printf(): Prints formatted output to stdout.",
"scanf(): Reads formatted input from stdin.",  
"putchar(): Writes a character to stdout.",
"getchar(): Reads a character from stdin.",
"puts(): Writes a string to stdout followed by a newline.",
"gets(): Reads a string from stdin (not safe, use fgets() instead).",  

### <stdlib.h> (Standard Library)
"malloc(): Allocates memory dynamically.", 
"calloc(): Allocates memory for an array and initializes it to zero.", 
"free(): Frees dynamically allocated memory.", 
"realloc(): Resizes previously allocated memory.", 
"exit(): Terminates the program.", 
"atoi(): Converts a string to an integer.",
"atof(): Converts a string to a double.",  
"atoi(): Converts a string to a long integer.",
"rand(): Generates a pseudo-random number.",   
"srand(): Sets the seed for rand().",  

### <string.h> (String Handling Library)
"strlen(): Returns the length of a string.",   
"strcpy(): Copies a string.",  
"strncpy(): Copies a specified number of characters from a string.",   
"strcat(): Concatenates two strings.", 
"strncat(): Concatenates a specified number of characters from one string to another.",
"strcmp(): Compares two strings.", 
"strncmp(): Compares a specified number of characters from two strings.",  
"strchr(): Finds the first occurrence of a character in a string.",
"strrchr(): Finds the last occurrence of a character in a string.",
"strstr(): Finds the first occurrence of a substring in a string.",

### <math.h> (Mathematics Library)
"sqrt(): Calculates the square root.", 
"pow(): Calculates the power of a number.",
"sin(): Calculates the sine of an angle.", 
"cos(): Calculates the cosine of an angle.",   
"tan(): Calculates the tangent of an angle.",  
"log(): Calculates the natural logarithm.",
"log10(): Calculates the base-10 logarithm.",  
"exp(): Calculates the exponential function.", 
"ceil(): Rounds up to the nearest integer.",   
"floor(): Rounds down to the nearest integer.",
"fabs(): Calculates the absolute value of a floating-point number.",   

### <ctype.h> (Character Handling Library)
"isalnum(): Checks if a character is alphanumeric.",   
"isalpha(): Checks if a character is alphabetic.", 
"isdigit(): Checks if a character is a digit.",
"islower(): Checks if a character is lowercase.",  
"isupper(): Checks if a character is uppercase.",  
"tolower(): Converts a character to lowercase.",   
"toupper(): Converts a character to uppercase.",   

### <time.h> (Time Library)
"time(): Returns the current calendar time.",  
"clock(): Returns the processor clock time.",  
"difftime(): Returns the difference between two times.",   
"mktime(): Converts a struct tm to time_t.",   
"strftime(): Formats date and time.",  

### <limits.h> (Sizes of Integer Types)
"CHAR_BIT: Number of bits in a char.", 
"INT_MAX: Maximum value for an int.",  
"INT_MIN: Minimum value for an int.",  
"LONG_MAX: Maximum value for a long.", 
"LONG_MIN: Minimum value for a long.", 
"SCHAR_MAX: Maximum value for a signed char.", 
"SCHAR_MIN: Minimum value for a signed char.", 
"SHRT_MAX: Maximum value for a short.",
"SHRT_MIN: Minimum value for a short.",
"UCHAR_MAX: Maximum value for an unsigned char.",  
"UINT_MAX: Maximum value for an unsigned int.",
"ULONG_MAX: Maximum value for an unsigned long.",  
"USHRT_MAX: Maximum value for an unsigned short.", 

### <float.h> (Floating-Point Limits)
"FLT_MAX: Maximum value for a float.", 
"FLT_MIN: Minimum value for a float.", 
"DBL_MAX: Maximum value for a double.",
"DBL_MIN: Minimum value for a double.",
"LDBL_MAX: Maximum value for a long double.",  
"LDBL_MIN: Minimum value for a long double.",  
