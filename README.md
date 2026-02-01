*This project has been created as part of the 42 curriculum by adak.*

# Libft - Your Very First Own Library

## Description

**Libft** is the first project in the 42 curriculum, designed to create a personal C library containing fundamental functions that will be used throughout your entire 42 journey. This project serves as the foundation for understanding how standard C library functions work by implementing them from scratch.

### Project Goals

- **Master C fundamentals**: Deepen understanding of pointers, memory allocation, and data structures
- **Build a reusable library**: Create a collection of functions that will serve as a toolkit for future projects
- **Learn standard library internals**: Understand how libc functions work by reimplementing them
- **Develop debugging skills**: Learn to write robust, error-free code through rigorous testing

### Overview

The library is divided into three main parts:
1. **Part 1 - Libc Functions**: Reimplementation of standard C library functions
2. **Part 2 - Additional Functions**: Utility functions for string and memory manipulation
3. **Part 3 - Linked Lists**: Functions to manipulate linked list structures

---

## Instructions

### Compilation

To compile the library, simply run:

```bash
make
```

This will generate `libft.a`, a static library containing all the mandatory functions.

```

### Cleaning

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile everything from scratch:

```bash
make re
```

### Using the Library in Your Project

1. Include the header in your source files:
```c
#include "libft.h"
```

2. Compile your project with the library:
```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft your_program
```

### Testing

Example of a simple manual test:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    if (str)
    {
        printf("%s\n", str);
        free(str);
    }
    return (0);
}
```

---

## Function Reference

### Part 1 - Libc Functions

#### Character Classification & Conversion
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |

#### String Functions
| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculates string length |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strchr` | Locates first occurrence of character |
| `ft_strrchr` | Locates last occurrence of character |
| `ft_strncmp` | Compares two strings up to n bytes |
| `ft_strnstr` | Locates substring in string |
| `ft_strdup` | Duplicates a string |

#### Memory Functions
| Function | Description |
|----------|-------------|
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeros out a memory area |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlap) |
| `ft_memchr` | Scans memory for a character |
| `ft_memcmp` | Compares memory areas |
| `ft_calloc` | Allocates and zeros memory |

#### Conversion Functions
| Function | Description |
|----------|-------------|
| `ft_atoi` | Converts string to integer |

### Part 2 - Additional Functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts substring from string |
| `ft_strjoin` | Concatenates two strings into new string |
| `ft_strtrim` | Trims characters from beginning and end |
| `ft_split` | Splits string by delimiter into array |
| `ft_itoa` | Converts integer to string |
| `ft_strmapi` | Applies function to each character (with index) |
| `ft_striteri` | Applies function to each character (in place) |
| `ft_putchar_fd` | Outputs character to file descriptor |
| `ft_putstr_fd` | Outputs string to file descriptor |
| `ft_putendl_fd` | Outputs string + newline to file descriptor |
| `ft_putnbr_fd` | Outputs integer to file descriptor |

### Part 3 - Bonus (Linked Lists)

#### Data Structure
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates new list node |
| `ft_lstadd_front` | Adds node at beginning of list |
| `ft_lstsize` | Counts number of nodes in list |
| `ft_lstlast` | Returns last node of list |
| `ft_lstadd_back` | Adds node at end of list |
| `ft_lstdelone` | Deletes and frees a single node |
| `ft_lstclear` | Deletes and frees all nodes |
| `ft_lstiter` | Applies function to each node's content |
| `ft_lstmap` | Creates new list by applying function |

---

## Resources

### Official Documentation
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) - The definitive C reference
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) - Comprehensive libc documentation
- [Linux man pages](https://man7.org/linux/man-pages/) - Manual pages for standard functions
- [C Standard Library Reference](https://en.cppreference.com/w/c) - Modern C reference

### Useful Articles & Tutorials
- [Understanding Pointers in C](https://www.geeksforgeeks.org/c-pointers/) - Essential for memory manipulation
- [Dynamic Memory Allocation](https://www.programiz.com/c-programming/c-dynamic-memory-allocation) - malloc, calloc, free
- [Linked Lists Tutorial](https://www.learn-c.org/en/Linked_lists) - Data structure fundamentals
- [Makefile Tutorial](https://makefiletutorial.com/) - Understanding compilation automation
- [The 42 Norm](https://github.com/42School/norminette) - Coding standards for 42 projects

### Technical Deep Dives
- [Memory Layout in C](https://www.geeksforgeeks.org/memory-layout-of-c-program/) - Understanding stack vs heap
- [Undefined Behavior in C](https://blog.regehr.org/archives/213) - What to avoid
- [String Handling Best Practices](https://www.gnu.org/software/libc/manual/html_node/String-and-Array-Utilities.html)

### Community Resources
- [42 Intranet](https://intra.42.fr) - Official project resources
- Stack Overflow - For specific technical questions

---

## AI Usage Declaration

In accordance with 42's AI policy for foundational projects (Stage 1), AI tools were used with **extreme caution** to preserve the learning process and develop genuine coding skills.

### How AI Was Used

#### Permitted Usage

1. **Concept Clarification** (After attempting to understand independently)
   - Understanding the difference between `memcpy` and `memmove`
   - Clarifying pointer arithmetic edge cases
   - Understanding static vs extern variables

2. **Documentation Lookup**
   - Quick access to man page information
   - Syntax verification for standard functions
   - Understanding compiler flags and Makefile rules

3. **Debugging Assistance** (After attempting to debug independently)
   - Understanding segmentation fault causes
   - Identifying memory leak patterns
   - Explaining valgrind output

4. **Verification** (After implementation)
   - Confirming understanding of edge cases
   - Validating approach to problem-solving
   - Cross-referencing with peer implementations

#### Avoided Practices

- **Direct code generation**: All functions were written manually after understanding the logic
- **Copy-pasting solutions**: Every line of code was typed and understood
- **Using AI as primary resource**: Peers and documentation were consulted first
- **Replacing peer-learning**: AI never substituted human interaction and collaborative learning

### Learning Approach

The project was completed following the "**think-ask peers-research-then AI if stuck**" methodology:

1. **Personal Reasoning**: Attempted to solve each function independently first
2. **Peer Learning**: Discussed approaches and edge cases with fellow students
3. **Documentation**: Thoroughly read man pages and official documentation
4. **AI as Last Resort**: Only used AI for specific clarifications after exhausting other resources

### Verification Process

- Every AI-suggested concept was verified with peers
- All code was tested extensively with personal and community test suites
- Implementation details were explained to peers during evaluation prep
- No code was used without complete understanding

### Skills Developed

This cautious approach ensured the development of:
- Strong C fundamentals and pointer manipulation
- Problem-solving and debugging skills
- Ability to read and understand documentation
- Collaborative learning through peer interaction
- Critical thinking about AI outputs (not blindly trusting)

**Key Takeaway**: AI was a supplement, not a replacement, for genuine learning. The ability to implement these functions without AI assistance was verified through peer evaluations and personal testing.

---

## Technical Choices

### Memory Management
- All dynamic allocations are properly freed in calling code
- Functions return `NULL` on allocation failure
- No memory leaks (verified with `valgrind --leak-check=full`)

### Error Handling
- All functions handle edge cases (NULL pointers, zero sizes, etc.)
- No undefined behavior for valid inputs
- Consistent return values across similar functions

### Code Organization
- Helper functions are declared `static` to limit scope
- Functions follow the 25-line norm limit
- Clear separation between parts in file structure

### Optimization Considerations
- Efficient algorithms chosen for string operations
- Minimal memory overhead
- Single-pass solutions where possible

---

## Key Learnings

1. **Memory is precious**: Understanding malloc/free is fundamental
2. **Edge cases matter**: Testing with NULL, empty strings, and boundary values
3. **Documentation is your friend**: Man pages contain everything you need
4. **Peer learning is invaluable**: Different approaches lead to deeper understanding
5. **Debugging skills**: Valgrind, gdb, and systematic testing are essential tools

---

## Contact

For questions or discussions about the project:
- 42 Intranet: adak
- Email: adak@student.42istanbul.com.tr
