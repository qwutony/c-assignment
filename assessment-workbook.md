1. Describe the properties and function of dynamic variables in C.
A dynamic variable is generally declared in a function body or within a block statement. These are automatically dynamically allocated, unless declared static. Memory for the variable is allocated when the program execution reaches the variable within the function/block, but the memory is released afterwards.
Dynamic variables have different values that can change during runtime. In such case the value should be assigned or taken from the user. In contrast, a static variable automatically has memory reserved for it at the compilation time.

2. Describe medium-size application development in detail with
regard to:
- dividing source code into multiple files
- the use of header files in C
- the use of C libraries


Break down code base into multiple sections
Header files are included, function prototypes --> int main(int argc) etc., needs to know the signature of a function
they are retrieved from the library

3. Describe the properties and function of arrays in C.
Stores a list of values and memory pointers
commonly use loops to access array

4. Describe the properties and function of file handling in C.
File handling such as open file and accessing file (fread)

5.  Describe the properties and function of user-defined data
structures in C.

6. Describe TWO development methodologies appropriate for the
development of small tools such as the ones implemented in this
assessment task
Agile, Waterfall

7. Outline the develoment of the C language, making reference to the types of software C is intended for.