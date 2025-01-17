#include <stdio.h>
int main() {
    printf("starting...");
    return 0;
}

// - [ ] Keywords
//   - [ ] auto
//   - [ ] break
//   - [ ] case
//   - [ ] char
//   - [ ] const
//   - [ ] continue
//   - [ ] default
//   - [ ] do
//   - [ ] double
//   - [ ] else
//   - [ ] enum
//   - [ ] extern
//   - [ ] float
//   - [ ] for
//   - [ ] goto
//   - [ ] if
//   - [ ] inline
//   - [ ] int
//   - [ ] long
//   - [ ] register
//   - [ ] restrict
//   - [ ] return
//   - [ ] short
//   - [ ] signed
//   - [ ] sizeof
//   - [ ] static
//   - [ ] struct
//   - [ ] switch
//   - [ ] typedef
//   - [ ] union
//   - [ ] unsigned
//   - [ ] void
//   - [ ] volatile
//   - [ ] while
//   - [ ] _Alignas
//   - [ ] _Alignof
//   - [ ] _Atomic
//   - [ ] _Bool
//   - [ ] _Complex
//   - [ ] _Generic
//   - [ ] _Imaginary
//   - [ ] _Noreturn
//   - [ ] _Static_assert
//   - [ ] _Thread_local
// - [ ] Identifiers
//   - [ ] Variable names
//     - [ ] Example: `int x;`, `float balance;`, `char letter;`
//   - [ ] Function names
//     - [ ] Example: `int sum(int a, int b) { return a + b; }`, `void printMessage();`
//   - [ ] Typedef names
//     - [ ] Example: `typedef unsigned int uint;`, `typedef struct { int x; int y; } Point;`
//   - [ ] Label names
//     - [ ] Example: `start:`, `end:`, `retry:`
//   - [ ] Macro names
//     - [ ] Example: `#define MAX_SIZE 100`, `#define SQUARE(x) ((x) * (x))`
//   - [ ] Struct/union tag names
//     - [ ] Example: `struct Person { char name[20]; int age; };`, `union Data { int i; float f; };`
//   - [ ] Enum tag names
//     - [ ] Example: `enum Color { RED, GREEN, BLUE };`, `enum Day { MONDAY, TUESDAY, WEDNESDAY };`
//   - [ ] File-scope static variable names
//     - [ ] Example: `static int counter = 0;`, `static float temp = 0.0;`
//   - [ ] External variable names
//     - [ ] Example: `extern int global_var;`, `extern char* buffer;`
//   - [ ] Type names
//     - [ ] Example: `int`, `float`, `double`, `struct Point`, `typedef struct { int x; int y; } Point;`
//   - [ ] Function pointer names
//     - [ ] Example: `int (*func_ptr)(int, int);`, `void (*callback)(void);`
// - [ ] Constants
//   - [ ] Integer literals
//     - [ ] Decimal (e.g., 123)
//     - [ ] Octal (e.g., 0755)
//     - [ ] Hexadecimal (e.g., 0x1A)
//     - [ ] Binary (e.g., 0b1011, if supported)
//     - [ ] Integer literals with suffixes (e.g., 123U, 123L, 123UL)
//   - [ ] Floating-point literals
//     - [ ] Decimal (e.g., 3.14)
//     - [ ] Scientific notation (e.g., 1e-9)
//     - [ ] Floating-point literals with suffixes (e.g., 3.14f, 3.14L)
//   - [ ] Character literals
//     - [ ] Single characters (e.g., 'a')
//     - [ ] Escape sequences (e.g., '\n', '\t')
//     - [ ] Wide character literals (e.g., L'a')
//   - [ ] String literals
//     - [ ] Regular strings (e.g., "Hello")
//     - [ ] Multi-line strings (if supported)
//     - [ ] Wide string literals (e.g., L"Hello")
//   - [ ] Null pointer constant
//     - [ ] Example: NULL
//   - [ ] Boolean literals (C99 and later)
//     - [ ] Example: true, false
//   - [ ] Preprocessor-defined constants
//     - [ ] Example: `__LINE__`, `__FILE__`, `__DATE__`, `__TIME__`
// - [ ] Operators
//   - [ ] Arithmetic operators (+, -, *, /, %)
//   - [ ] Relational operators (==, !=, <, >, <=, >=)
//   - [ ] Logical operators (&&, ||, !)
//   - [ ] Bitwise operators (&, |, ^, ~, <<, >>)
//   - [ ] Assignment operators (=, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=)
//   - [ ] Increment and decrement operators (++, --)
//   - [ ] Conditional operator (?:)
//   - [ ] Unary operators
//     - [ ] Sizeof operator (sizeof)
//     - [ ] Type-casting operators (e.g., (type))
//     - [ ] Pointer dereference operator (*)
//     - [ ] Address-of operator (&)
//   - [ ] Pointer operators
//     - [ ] Pointer-to-member operator (->)
//   - [ ] Comma operator (,)
//   - [ ] Preprocessor operators
//     - [ ] Concatenation operator (##)
//     - [ ] Stringizing operator (#)
// - [ ] Punctuation
//   - [ ] Parentheses (())
//   - [ ] Braces ({})
//   - [ ] Brackets ([])
//   - [ ] Comma (,)
//   - [ ] Semicolon (;)
//   - [ ] Colon (:)
//   - [ ] Period (.)
//   - [ ] Ellipsis (...)
//   - [ ] Hash (#)
//   - [ ] Double hash (##)
//   - [ ] Question mark (?)
//   - [ ] Arrow (->)
// - [ ] Preprocessor directives
//   - [ ] #include
//   - [ ] #define
//   - [ ] #undef
//   - [ ] #if
//   - [ ] #ifdef
//   - [ ] #ifndef
//   - [ ] #else
//   - [ ] #elif
//   - [ ] #endif
//   - [ ] #error
//   - [ ] #pragma
//   - [ ] #line
//   - [ ] #import (often seen in Objective-C, not in standard C)
//   - [ ] #extension (used in OpenCL, not standard C)
// - [ ] Comments
//   - [ ] Single-line comments (//)
//   - [ ] Multi-line comments (/* */)
// - [ ] Whitespace
//   - [ ] Spaces
//     - [ ] Example: `"Hello World"` (The space between "Hello" and "World")
//   - [ ] Tabs
//     - [ ] Example: `"Hello\tWorld"` (The `\t` represents a tab between "Hello" and "World")
//   - [ ] Newlines
//     - [ ] Example: `"Hello\nWorld"` (The `\n` represents a newline between "Hello" and "World")
//   - [ ] Carriage return (\r)
//     - [ ] Example: `"Hello\rWorld"` (The `\r` returns the cursor to the beginning of the line, overwriting "Hello" with "World" on some systems)
//   - [ ] Form feed (\f)
//     - [ ] Example: `"Hello\fWorld"` (The `\f` was historically used for page breaks but may not be visible in modern environments)
//   - [ ] Vertical tab (\v)
//     - [ ] Example: `"Hello\vWorld"` (The `\v` was used for vertical spacing, but its effect is rarely seen in modern environments)
// - [ ] Escape sequences
//   - [ ] Common sequences
//     - [ ] \n (Newline)
//     - [ ] \t (Tab)
//     - [ ] \r (Carriage return)
//     - [ ] \' (Single quote)
//     - [ ] \" (Double quote)
//     - [ ] \\ (Backslash)
//   - [ ] Unicode sequences
//     - [ ] \uXXXX (4-digit Unicode character)
//     - [ ] \UXXXXXXXX (8-digit Unicode character)
//   - [ ] Octal escape sequences
//     - [ ] \ooo (Octal value for character, e.g., \101 for 'A')
//   - [ ] Hexadecimal escape sequences
//     - [ ] \xhh (Hexadecimal value for character, e.g., \x41 for 'A')
//   - [ ] Backspace
//     - [ ] \b (Moves the cursor back one position)
//   - [ ] Form feed
//     - [ ] \f (Form feed character, used in printing)
//   - [ ] Vertical tab
//     - [ ] \v (Vertical tab, used for vertical spacing)
// - [ ] Special symbols
//   - [ ] Pointer dereference (*)
//   - [ ] Address-of operator (&)
//   - [ ] Member access (.)
//   - [ ] Member access through pointer (->)
//   - [ ] Scope resolution (if extending to C++) (::)
//   - [ ] Comma operator (,)
//     - [ ] Example: `x = (a = 5, b = 10, a + b);` (Evaluates all expressions, result is `a + b`)
//   - [ ] Conditional operator (?:)
//     - [ ] Example: `result = (x > y) ? x : y;` (Assigns `result` the greater of `x` and `y`)
//   - [ ] Type cast parentheses (type)
//     - [ ] Example: `float f = (float) x;` (Casts `x` to `float`)
//   - [ ] Sizeof operator (sizeof)
//     - [ ] Example: `size_t size = sizeof(int);` (Returns the size of an integer)
//   - [ ] Type definition (typedef)
//     - [ ] Example: `typedef unsigned int uint;` (Defines `uint` as an alias for `unsigned int`)
//   - [ ] Variable argument macro (...)
//     - [ ] Example: `#define PRINT(...) printf(__VA_ARGS__);` (Macro that accepts variable arguments)
// - [ ] Error tokens
//   - [ ] Invalid or unrecognized characters
