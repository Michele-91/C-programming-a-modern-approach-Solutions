/**********************************************************************************
Write the following function:

bool test_extension(const char *file_name, 
                   const char *extension);

file_name points to a string containing a file name. 
The function should return true if the file's extension matches the string 
pointed to by extension, ignoring the case of letters. 
For example, call test_extension("memo.txt", "TXT") would return true. 
Incorporate the "search for the end of a string" idiom into your function. 
Hint: Use the toupper function to convert characters into 
upper-case before comparing them.
***********************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main(void)
{
    const char file_name[] = "memo.txt";
    const char extension[] = "TXT";

    printf("%s", test_extension(file_name, extension) ? "True" : "False");
}

bool test_extension(const char *file_name, const char *extension)
{
    

    while(*file_name++ != '.');

    if(strlen(file_name) != strlen(extension))
        return false;

    while(*file_name)
        if(toupper(*file_name++) != *extension++)
            return false;
        
    
    return true;
}
