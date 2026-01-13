*This project has been created as part of the 42 curriculum by gtomas*

## **Description**

This project consists in a library of basic functions in C. Those functions are meant to be useful for later projects of the 42 School.  
It includes three sections : 
- recreation of chosen functions from the libc library. Those functions should work exactly like their counterpart in libc.
- additional functions on string manipulations and writing in files.
- basic functions on linked lists.

## **Instructions**

The library is compiled using a makefile. running the command make at the root of the repositery generates an library file "libft.a". To compile using the library the ususal command cc -l ft should be used. The prototypes on all the functions are written in the header libft.h and the functions themselves are written on separate .c files in the ft_functions folder.
Makefile commands :
- **make/make all** : all is the rule by default, it compiles all c files into object files and generates the library libft.a
- **make clean** : deletes all object files (.o files).
- **make fclean** : deletes all object files and the library file.
- **make re** : runs fclean then all.


## **Ressources**

No specific ressources were necessary to write this project. For the first part the description of each function can be found using the man command. 

### Ai usage

Ai was only used to clarify some edge cases, and get explanations on general concepts/conventions. All the code is original and written independantely.

## **Library description**

//list type
### 1. Libc Functions
Standard C library recreations.

* **ft_isalpha**: Checks if the character is alphabetic.
* **ft_isdigit**: Checks if the character is a digit.
* **ft_isalnum**: Checks if the character is alphanumeric.
* **ft_isascii**: Checks if the character is part of the ASCII set.
* **ft_isprint**: Checks if the character is printable.
* **ft_strlen**: Returns the length of a string.
* **ft_memset**: Fills a memory block with a specific byte.
* **ft_bzero**: Sets a byte string to zero.
* **ft_memcpy**: Copies a memory area.
* **ft_memmove**: Copies a memory area safely for overlapping regions.
* **ft_strlcpy**: Copies a string up to a size and returns the length of the string it tried to copy (see man strlcpy for full details).
* **ft_strlcat**: Concatenates a string up to a size and returns the length of the string it tried to create (see man strlcat for full details).
* **ft_toupper**: Converts a character to uppercase.
* **ft_tolower**: Converts a character to lowercase.
* **ft_strchr**: Locates the first occurrence of a character in a string.
* **ft_strrchr**: Locates the last occurrence of a character in a string.
* **ft_strncmp**: Compares two strings up to a specific number of characters.
* **ft_memchr**: Searches memory for a specific byte.
* **ft_memcmp**: Compares two memory blocks.
* **ft_strnstr**: Locates a substring within a string, limited by length.
* **ft_atoi**: Converts a string to an integer.
* **ft_calloc**: Allocates memory and initializes it to zero.
* **ft_strdup**: Duplicates a string using malloc.

### 2. Additional Functions
Utility functions for strings and writing in files.

* **ft_substr**: Extracts a substring from a string.
* **ft_strjoin**: Concatenates two strings into a new string.
* **ft_strtrim**: Trims specific characters from the start and end of a string.
* **ft_split**: Splits a string into an array of strings using a delimiter.
* **ft_itoa**: Converts an integer into a string.
* **ft_strmapi**: Applies a function to each character of a string to create a new string.
* **ft_striteri**: Applies a function to each character of a string via its index.
* **ft_putchar_fd**: Writes a character to a file descriptor.
* **ft_putstr_fd**: Writes a string to a file descriptor.
* **ft_putendl_fd**: Writes a string followed by a newline to a file descriptor.
* **ft_putnbr_fd**: Writes an integer to a file descriptor.

### 3. Linked List Functions
Functions used to manipulate the `t_list` structure.

* **ft_lstnew**: Creates a new list element.
* **ft_lstadd_front**: Adds an element to the beginning of the list.
* **ft_lstsize**: Counts the number of elements in the list.
* **ft_lstlast**: Returns the last element of the list.
* **ft_lstadd_back**: Adds an element to the end of the list.
* **ft_lstdelone**: Deletes a list element and frees its content.
* **ft_lstclear**: Deletes and frees an entire list.
* **ft_lstiter**: Iterates through a list and applies a function to each element.
* **ft_lstmap**: Iterates through a list and creates a new list resulting from applying f to each element.
