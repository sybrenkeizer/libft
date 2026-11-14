*This project has been created as part of the 42 curriculum by sybkeize*

# libft


---


## Description

**Libft** is the first major project at 42. The goal is to recreate a subset
of the C standard library (`libc`) from scratch, along with a collection of
other useful utility functions that do not exist or are restricted interfere
standard C.

This static library (`libft.a`) serves as a foundational toolkit for future
C projects in the curriculum, emphasizing deep low-level memory management,
pointer manipulation, and rigorous adherence to strict coding standards.


---


## Functions


### Character

**Checks and tests individual characters based on ASCII values**

ft_isalpha: Checks whether a character is alphabetic (a-z, A-Z).
ft_isdigit: Checks whether a character is a decimal digit (0-9).
ft_isalnum: Checks whether a character is alphanumeric (alphabetic or numeric).
ft_isascii: Checks whether a character fits into the 7-bit ASCII set (values 0 to 127).
ft_isprint: Checks whether a character is printable, including space (32 to 126).

### Conversion

**Converts characters or strings between types and formats**

ft_tolower: Converts an uppercase letter to its lowercase equivalent.
ft_toupper: Converts a lowercase letter to its uppercase equivalent.
ft_atoi: Converts a string representation of an integer to an int value, handling leading whitespace and optional signs.
ft_itoa: Dynamically allocates memory (malloc) and converts an int value into a null-terminated string.

### String

**Operations for measuring, searching, copying, concatenating, and manipulating null-terminated strings**

ft_strlen: Calculates and returns the length of a string (excluding the null terminator).
ft_strncmp: Compares two strings up to n bytes based on ASCII values.
ft_strchr: Locates the first occurrence of a character in a string.
ft_strrchr: Locates the last occurrence of a character in a string.
ft_strnstr: Locates a substring within a main string, searching at most len characters.
ft_strlcpy: Copies up to size - 1 characters from source to destination, guaranteeing null-termination.
ft_strlcat: Appends the source string to the end of destination, guaranteeing total size does not exceed size and ensuring null-termination.
ft_strdup: Duplicates a string by allocating dynamic memory and copying its contents.
ft_substr: Allocates and returns a substring from a string, starting at index start with maximum length len.
ft_strjoin: Allocates and returns a new string formed by concatenating s1 and s2.
ft_strtrim: Allocates and returns a copy of a string with specified set characters removed from both the beginning and the end.
ft_split: Allocates and returns an array of strings obtained by splitting a string using a delimiter character c.
ft_strmapi: Applies a function f to each character of a string to create a new string (allocating memory).
ft_striteri: Applies a function f to each character of a string in-place, passing its index as an argument.

### Memory

**Direct byte-level operations on arbitrary memory blocks**

ft_memset: Fills a block of memory with a constant byte value.
ft_bzero: Erases data in a block of memory by setting all bytes to zero (\0).
ft_memcpy: Copies n bytes from a source memory area to a destination area (memory areas must not overlap).
ft_memmove: Copies n bytes from source to destination safely, handling overlapping memory regions.
ft_memchr: Searches a block of memory for the first occurrence of a specific byte value.
ft_memcmp: Compares two memory blocks byte-by-byte.
ft_calloc: Allocates memory for an array of elements, initializing all bytes to zero.

### File Descriptor Output

**Utility functions designed to output primitive types directly to a specified file descriptor**

ft_putchar_fd: Outputs a single character c to the given file descriptor fd.
ft_putstr_fd: Outputs a string s to the given file descriptor fd.
ft_putendl_fd: Outputs a string s followed by a newline \n to the given file descriptor fd.
ft_putnbr_fd: Outputs an integer n as a string representation to the given file descriptor fd.

### Linked List

**Functions designed to manipulate single linked-list nodes structured as:**

ft_lstnew: Allocates and returns a new node with the given content.
ft_lstadd_front: Adds a node to the beginning of a linked list.
ft_lstsize: Counts the number of nodes in a linked list.
ft_lstlast: Returns the last node of a linked list.
ft_lstadd_back: Adds a node to the end of a linked list.
ft_lstdelone: Frees a node's memory using a deletion function on its content and deallocates the node itself.
ft_lstclear: Deletes and frees all nodes in a linked list starting from a given node using a deletion function.
ft_lstiter: Iterates through a linked list and applies a given function to the content of each node.
ft_lstmap: Iterates through a linked list, applies a function to each node's content, and creates a new resulting list.


---


## Instructions

### Prerequisites

- A C compiler
- `make`

### Installation

**Clone the repository**

```bash
git clone https://github.com/sybren.keizer/libft.git libft
cd libft
```

### Compilation

**Compile the static library**

- make all: Compile standard library source files;
- make clean: Remove object files;
- make fclean: Remove object files and archive;
- make re: Recompile everything from scratch;

```
make <target>
```

### Use

**Include the header file and link the static library during compilation:**

```
#include "libft.h"

int main(void)
{
  ...
}
```

```
cc -Werror -Wextra -Wall main.c libft.a -o program
```


---


## Testing

### Install tests

**Clone the test repository**

```bash

cd libft
git clone https://github.com/sybren.keizer/libft_tests.git tests

```

### Compile tests

**Compile and run tests**

- make test: Compile library with tests and execute;
- make fsan: Compile library with tests and execute with fsanitizer;
- make valgrind: Compile library with tests and execute with valgrind;


---


## Resources

- Web
  - Geeksforgeeks
  - Stack Overflow
  - Medium

- Youtube
  - Oceano | <https://www.youtube.com/@onaecO>
  - CodeVault | <https://www.youtube.com/@CodeVault>
  - Kris Jordan | <https://www.youtube.com/@KrisJordan>

- Man pages
  - Terminal
  - <https://man.netbsd.org>

- Articles
  - ft_memset
    - <https://pvs-studio.com/en/blog/posts/cpp/0360/>
  - ft_memcpy / ft_memmove
    - <https://book-of-gehn.github.io/articles/2024/09/21/Behind-memcpy-memmove.html>
  - ft_strncmp
    - <https://www.geeksforgeeks.org/cpp/difference-strncmp-strcmp-c-cpp/>
  - Makefile
    - <https://makefiletutorial.com>
  - Essential c compiler flags
    - <https://ccompiler.in/blog/gcc-compiler-flags-guide>
  - Linked lists
    - <https://medium.com/@jalal92/linked-lists-a79f6a9478d8>
    - <https://www.geeksforgeeks.org/dsa/linked-list-data-structure/>
  - Void pointers
    - <https://medium.com/@iiesbanglore/void-pointers-in-c-syntax-examples-uses-and-common-mistakes-d1c9889d255b>

- Gemini
  - Tests
  - Readme
  - Hints
  - Debugging
  - Concepts


---


## AI

- Tests: Gemini has been a source of ideas and feedback of all of the current tests;
- Discussing and clarifying concepts;
- Superficial directions and hint;
- Concrete directions and debugging:
  - ft_split - While debugging with Gemini I adapted my strategy
    to be more congruent to pointer arithmetic and integrate clean coding
    behaviour.
  - ft_strtrim - To a degree similar to ft_split. While fixing the trailing
    trimming I learned with AI a better strategy which is applied in the
    current code;
  - ft_lstmap - Got shown why a leakages appear when not all memory is freed
  upon broken node;
- Creation of exercises (including answers) on linked lists to practice;


---


## Notes

- **Makefile**
  - Makefile variables are essentially macro expansions;
  - The execution is driven entirely by dependency resolution rather than
 top-to-bottom procedural scripting;
  - If a dependency's file modification time is newer than the target file,
  or if the target file does not exist at all, that target is marked as dirty
  (out of date);
  - .PHONY is used to make clear certain targets are not a physical file. Always
 run this recipe when invoked, regardless of whether a file with that name exists;

- **Header**
  - The file for anything that needs to be shared across multiple .c files;
    - Function prototypes inform the compiler about function signatures
    (return types, parameter counts, and data types) before those functions are actually
  compiled or linked;
    - Type Definitions (typedef & structs);
    - Global Macros and Constants (\#define);
    - External Variable Declarations (extern);
  - Source files are compiled one at a time, completely independently;
  - Adding \#include "libft.h" at the top of a .c file, instructs the C Preprocessor
  (cpp) to copy and paste the contents of libft.h directly into your .c file
  right at that line before compilation even begins;

- **Signed & unsigned data types**
  - Ensure type correctness, cast when unnecessary;
  - Signed
    - latest bit - MSB - is used for value below zero (1xx..);
  - size_t
    - Can not be negative;
    - Designed to represent the size of any object in memory (measured in bytes);
    - Scales with the architecture, size_t is guaranteed to be large enough to
      hold the index or size of any array or string your computer can possibly
      address;
    - Use for storing any lengths and sizes etc;
  - unsigned int
    - Unsigned integer type (can not be negative);
    - Unlike size_t, its size is generally fixed to at least 32 bits on modern
      systems, regardless of whether the system is 32-bit or 64-bit;
    - Use for storing lengths and sizes that will not exceed standard integer
      limits;
  - unsigned char
    - Hold up to 8 bits, 256 options;
    - Can be used to store beyond ascii values (177);

- **Type casting**
  - Type casting changes a data type into another by manually overriding the
    compiler's safety checks;
  - Signedness only matters when reading the bytes;
  - Do use when:
    - Interfacing with generic memory (void *). Generic pointers do not have a
      size, to perform pointer arithmetic or dereference them they need to be cast
      on a concrete type;
    - Changing data interpretation. For floating point calculations an int can be
      cast into a double;
  - Do not use when:
    - Implicit promotions. C automatically promotes smaller types to larger types
      when there is no loss of data;
    - Masking compiler warnings;
    - Integer promotion:
      - Any integer arithmetic or comparison involving types smaller than int
   (like char or short) automatically undergoes integer promotion;
      - char and int reading/comparison happen between two int values at the CPU
   level;
	- C has well-defined usual arithmetic conversions and integer promotions.
	Forcing an explicit cast often overrides these safety rules, leading to
	incorrect comparisons (like comparing a signed negative number to an
	unsigned size_t) where the signed number gets implicitly promoted to
	unsigned, making it look larger than any valid size;

- **Locale**
  - A locale defines cultural and linguistic conventions, such as:
    - Character classification and case-conversion;
    - Date and time formatting;
    - Numeric and monetary formatting;

- **Bitmasks**
  - A bitmask is a sequence of bits (bitset or bit field) and is used to perform
  bitwise operations on the given data, deciding which bits you want to keep,
  and which bits you want to clear;

- **Buffer**
  - A temporary memory area where data waits before being moved elsewhere;
  - Used to:
    - Smooth out data transfer;
    - Increase speed;
    - Reduce unnecessary system calls;

- **File Descriptor**
  - A process-unique identifier (handle) that the OS uses to keep track of
 an open file or other input/output resource, such as a keyboard, pipe
 or network socket;
  - Files all over. Processes are always files;
  - Abstract away hardware details. Whether your program is reading from a
 text file on a hard drive, receiving data from a website over a network
 socket, or taking input from your keyboard, to your code, it's all just
 reading and writing to an integer file descriptor;
  - Standard file descriptors:
    - 0: Standard Input (stdin) — usually the keyboard;
    - 1: Standard Output (stdout) — usually the terminal screen;
    - 2: Standard Error (stderr) — usually the terminal screen for error
   messages;
  - Core system calls
    - open(): Asks the OS to open a file. If successful, the OS hands back a file
   descriptor integer;
    - read(): Pulls raw bytes from the file descriptor into a buffer;
    - write(): Pushes raw bytes from a buffer into the file descriptor;
    - close(): Tells the OS you are done, freeing up the file descriptor and
   system resources;

- **Bitshifting**
  - Process of taking all the bits in a number and shifting them either to the
    left or to the right by a specific number of positions;
    - When a bit gets pushed off the edge, it disappears;
    - Empty spaces left behind are filled with zeros (0);
    - Left shift <<
      - Every position moved multiplies the number by 2;
    - Right shift >>
      - Every position moved divides the number by 2 (dropping any remainders).
  - Even though bitwise operators operate on only one bit at a time they cannot
 accept anything smaller than a byte as their input - a byte is normally the
 smallest unit of addressable memory;

- **Function pointer**
  - When a program compiles, every function is loaded into memory at a specific
    address, just like integer or character variables;
  - A function pointer is a variable that holds the address of a function;

- **Non-Destructive Tokenization**
  - Breaking a stream or string of text into individual segments (tokens)
    without mutating, altering, or destroying the underlying source data;
  - Components:
    - Input Immutability (const Correctness);
    - Stream-Driven Pointer Iteration (Scanning)
      Instead of treating a string as a static array indexed by integer offsets
      (s\[i\]), non-destructive tokenization treats text as a streaming data pipe.
      The pointer acts as a read head moving forward through memory (s++). This
      eliminates the cognitive overhead of tracking absolute index math across
      the entire string length and aligns naturally with how hardware and
      low-level parsers process data;
    - Decoupling Measurement from Allocation
      A great parser splits its responsibilities into two distinct phases:
      - A) The Scan Phase (Zero-Cost Analysis): The algorithm skips noise
        (like leading delimiters) and measures the size of a token by advancing
        a pointer until it hits a boundary condition. No memory is allocated
        during this step;
      - B) The Allocation Phase (Commit): Once the exact boundaries (start and len)
        are known, memory is requested from the heap precisely once for that
        token via ft_substr;
      - The Benefit: This separation prevents wasted allocations and makes error
        handling much cleaner. If an allocation fails, you know exactly what
        failed without corrupting partial states;
    - Clean Lifetime and Ownership Boundaries
      In non-destructive tokenization, the ownership of memory is strictly partitioned:
      - The Caller owns the original source string and is responsible for its eventual
        cleanup (if it was heap-allocated);
      - The Array & Substrings are a completely isolated set of fresh allocations
        returned to the caller;
      - The Benefit: Freeing the returned char ** array and its constituent strings
        does not affect, invalidate, or touch the original source string;
  - In contrast, destructive tokenization (strtok):
    - Mutates the Source: You cannot pass a const char * to strtok because it
      breaks read-only memory protections (leading to segmentation faults if
      the string is a string literal);
    - Stateful and Unsafe: strtok uses an internal static variable to remember
      where it left off, making it non-reentrant. If two parts of your program
      try to tokenize different strings simultaneously, they will interfere
      with each other;
    - Destroys Context: Once tokenized, your original string is mangled and
      can no longer be used as a cohesive whole;

- **Struct**
  - Container structure that bundles different data types;

- **Linked list**
  - Structure containing another structure, a node, pointing to another struct,
    and other eventual data of various types;
  - Accessing members
    - Dot operator (.) is used when the actual struct instance is stored
      locally on the stack;
    - Arrow operator (->) is used when there is a pointer to a struct which stored
      dynamically in the heap. Because root holds a memory address rather than
      the struct itself, you cannot write root.data;
    - root->data is shorthand for dereferencing the pointer first: (*root).data;
      - second.data
      - root.next->data
      - (*root.next).data

- **Testing**
  - Test cases:
    - Boundaries;
    - Data type/signedness correctness;
    - Arguments;
  - Print clear distinction in actual and expected result;
  - Scalable tests;
  - Separate test cases;

- **Memory**
  - **Stack**
    - A region of memory that stores temporary variables created by each function;
    - Last in, first out: when a function is called, its local variables are
   added onto the stack. When the function returns, those variables are
   automatically removed and destroyed;
    - The compiler and CPU handle stack allocation and deallocation automatically.
    - Size is limited (set by the operating system, often a few megabytes).
   Creating massive arrays or deep recursion can lead to a stack overflow;
  - **Heap**
    - A large pool of memory used for dynamic memory allocation;
    - Memory on the heap is allocated and freed in any order of choice.
    - The user is responsible for managing heap memory. It should be freed once
   done using it, failing to do so causes memory leaks;
    - Slower than the stack because it requires searching for a suitable block of
   free memory, and pointers must be dereferenced to access the data;
    - Limited only by your system's available RAM and virtual memory;
  - **Memory leaks**
    - A memory leak happens when memory is allocated on the heap, and is never
   freed. It remains locked up until the program terminates and can not be
   used by other sources;
  - **Dangling pointer**
    - Pointer to a memory address that has already been freed or is no longer
   valid. Attempt to read or write to a dangling pointer leads to undefined
   behavior, crashes, or severe security vulnerabilities;
    - Skip nullifying when the pointer variable is about to disappear anyway:
   function and its local variables ceize to exist;
    - Remove dangling pointer when pointer variable does continue to exist
   and possible used after the memory is freed. This turns a dangerous
   bug into a safe, easily debuggable one;
    - Calling free() on a NULL pointer is completely safe. But calling free()
   twice on the same active pointer causes undefined behavior and often
   crashes the program (fsan: double-free error);
  - **Buffer overflow**
    - A buffer overflow occurs when a program tries to store more data in a
   fixed-size block of memory than it was allocated to hold. C does not
   perform automatic bounds checking on arrays: the extra data overflows
   into adjacent memory locations, overwriting whatever happens to be
   stored there;
    - Writing past the bounds of an allocated array can corrupt adjacent
   memory, crash the program, or allow attackers to inject malicious code;
      - Segmentation fault: If the overflow corrupts critical system pointers or
  memory management structures, the operating system catches the invalid
  memory access and abruptly terminates the program;
      - Data Corruption (Unpredictable Behavior): If the bound-past data
  overwrites another local variable in your function, your variables will
  suddenly change values for no apparent reason, leading to bizarre,
  hard-to-debug logic errors;
      - Security Vulnerabilities: malicious input that overflows the buffer and
  precisely overwrites the stack's return address. When the function
  returns, instead of going back to the normal program code, the CPU jumps
  straight to machine code injected by the attacker (stack-smashing-attacks);

- **General arrays and string literal pointers**
  - Pointer to string literal (char *s = "xyz")
    - s is stored in read-only memory (often called the rodata or text segment)
   compiled into your program;
    - s itself is just a variable, can be changed to what it points to;
    - s lives in read-only memory, the characters can not be modified. Attempt
   results in seg-fault;
  - String array (char s[] = "xyz")
    - Declaring a local array and initializing it using the string literal as a
   template;
    - The array is allocated on the stack if inside a function or in
   global/static memory if declared outside functions;
    - Compiler takes characters (x, y, z, \0) from read-only memory and copies
   them into this newly allocated stack space;
    - Free to modify because characters live in local stack memory that you own;

- **NULL, nill, 0**
  - NILL
    - Does not exist in standard C;
    - Usually belongs to other programming languages like Objective-C, Swift,
   Ruby, or Lisp;
    - In standard C, the compiler will throw an error;
    - nil is returned printing a pointer with no address (*ptr = NULL) using %p
   printf, to make clear the pointer is empty;
  - 0
    - Used for math, counting, array indices, evaluating boolean conditions
   (false), comparing numbers;
    - C allows you to use integer 0 as a null pointer constant. Writing
   *int \*ptr = 0* is technically legal and means the exact same thing as
   *int \*ptr = NULL*, though modern C style prefers NULL for pointers to make
   your intent clear;
  - NULL
    - Used exclusively to indicate that a pointer does not point to any valid
   memory address;
    - Use NULL instead of 0 for readability and documentation;
  - Return value
    - Match return value to the function's return type;

  - **Defensive programming**
    - Assume the caller is malicious or incompetent and guard against every
 possible error at runtime;
    - Used at operating system kernels, network drivers, security-critical code,
   and public-facing APIs;
    - Can hide bugs since a function silently handles a NULL pointer by doing
 nothing - difficult to realize writing of a bug upstream;
    - Preventing program from crashing with segmentation fault when a NULL
   pointer is passed in;
    - Validating arguments
      - Pointer check: check address is NULL (0x0), prevent segmentation faults;
      - Content check: check first array item for null terminator (string is
  empty). Prevent logical errors or wasted processing on empty inputs. Only use
  if the case is an invalid state for your function. A function that parsers
  a configuration file key, an empty string is meaningless, so reject it. A
  string-concatenation function, appending an empty string is valid, so it
  should not be rejected;
        - Check from outside-in, never check content before pointer;
    - Apply for function that other developers will call, always check for NULL.
   Can not control what callers pass you;
    - No need to check for NULL at static functions (private), calling it always
 with valid memory - control redundancy. May use assert to NULL-check
 during development;

  - **Fail-Fast Programming**
    - Search and solve invalid input immediately by crashing or assert;
    - Used in high-performance libraries, game engines, and internal enterprise
 systems;
    - assert() is used to catch bad inputs during testing. If assert(s != NULL)
 triggers, it forces the programmer to fix the root cause rather than papering
 over it with an if statement;
