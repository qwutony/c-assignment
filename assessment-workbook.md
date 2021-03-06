1. Describe the properties and function of dynamic variables in C.

A dynamic variable is generally declared in a function body or within a block statement. These are automatically and dynamically allocated, unless explicitly declared static. Memory for the variable is allocated when the program execution reaches the variable within the function/block, but the memory is released afterwards.
Dynamic variables have different values that can change during runtime. In such case the value should be assigned or taken from the user. In contrast, a static variable automatically has memory reserved for it at the compilation time.

In circumstances where we do not know the amount of memory required to run the program at runtime, dynamic memory allocation is required to run the program. As C does not automatically govern dynamic memory allocation, the programmer must use the functions malloc() and free() to manage memory. Malloc allows for the allocation of a certain amount of bytes and a return pointer to the allocated memory, however the allocation is not cleared even after the program is completed, therefore the function free() is used to clear the memory space that is referred to by the pointer from malloc.

2. Describe medium-size application development in detail with
regard to:
- dividing source code into multiple files
- the use of header files in C
- the use of C libraries

In a medium-sized application, managers emphasise on the division of source code and work into specific modules with precise functionalities. The partitioning of code into multiple files is beneficial, because programming changes will be more efficient and successful if each file is designed to do a simple task, that when combined together allows for more complicated actions. Code is therefore broken down into highly specialised modules and sections.

Header files in C contain function declarations that can be shared amongst other source files. An example would be the C libraries, which are a collection of functions and declarations that can be used by other programs by incorporating them as a header file. They also contain function prototypes, which are declarations of the function, including the name, and type signature, however it does not include the function body. An example of a library would be the standard library, or stdlib.h.

A programmer can also write their own header file, or use pre-existing files from their compiler. The act of including a header file is equivalent to copying the contents of the header file, without compromising readability of the file system. These header files are modules that can be used to assist in the operations of that particular file, thus allowing for the improving of manageability in a medium-size application.

3. Describe the properties and function of arrays in C.

An array serves to store data under a single variable name, with a pointer to the first value, the index or otherwise the subscript. Arrays are simply the ordering and grouping of variables of the same type. They are also a fixed size, and the size cannot be changed unless explicitly done so during the coding process. The primary function is to organise data in a format that improves readability and efficiency. Arrays can be also defined as a constant pointer, because the variable defining array will always direct to the memory of where the data of the array is stored. Because of the nature of an array, data can be retrieved using conditional loops.

There are many properties of arrays in C that make it important. It is possible to have arrays of all types in C, with the exception of void and functions. While arrays are similar to pointers, they are still different. However, arrays act as pointers to functions only. Whilst within a character array, if there are double quoted strings has the null byte as the last element. Finally arrays allocate memory differently depending on the nature of the array. Dynamically allocated arrays have memory on the heap, while static and global arrays are allocated on the data segment, and local arrays are allocated on the stack.

4. Describe the properties and function of file handling in C.

Operations in C can be done through a prompt or terminal, but information can also be stored elsewhere in other programs. C needs to fetch the information from the file in order to operate using it. Thus there are different operations of file handling within C to assist with these operations. The most common ones include fopen, which can either create a new file or open an existing file, and fscanf/fgets to read the file and fclose to close the file. There are other in-built functions that can be used to manipulate files in C.

5.  Describe the properties and function of user-defined data
structures in C.

C has basic types such as char, int etc, and also derived types such as arrays and pointers to basic types. A user-defined data structure is a collection of associated values, similar to an array, except the values can all have different types. The basic UDT is the structure, or struct, which is similar to an object in other languages, except with the limitation that once defined it is not possible to add further entries inside the structure. Upon defining a new structured type, it is important to declare variables of that type.

A UDT shared similar attributes and properties to an array. However there are differences as well. To call a member of a struct it is possible to use the structure selection operator which is a period, rather than the square brackets in the case of an array. Structs also allow for complicated operations, and the ampersand (&) symbol allows for pointing directly to the actual variables.

6. Describe TWO development methodologies appropriate for the
development of small tools such as the ones implemented in this
assessment task

Two development methodologies that can be implemented for small tools can be either Agile or Waterfall. Agile requires the use of developing solutions through the collaborative effort of self-organizing and cross-functional teams, as well as the customers and end users. Agile emphasises on individuals and interactions rather than processes and tool, actual working software instead of comprehensive documentation - since it is important to create the product, and flexible response to change than following a strict plan with no flexibility. Finally, Agile concentrates on customer collaboration instead of contract negotiation - emphasising on building a final viable product for the customer rather than be focused on monetary and financial gains.

Waterfall on the other hand is a relatively linear design approach. In software development it is relatively inflexible and one direction, similar to a waterfall. This methodology originated from the construction industry. The model begins by defining the system and software requirements, usually through the use of a product requirements document. This is followed by the analysis of the project, including the business viability of the venture, and creating models to determine the procedure of the project. The project then is designed, coded and tested to ensure that a minimal viable product is created before additional features are incorporated. Finally, there are operations which allow for the end user to maximise their experience. This is accomplished through the maintenence of software, installation, support etc.

An Agile method of completing this assessment would involve communicating the processes with a team or the customer to know exactly what is expected, and the continual development would be monitored and frequent reflections allow for flexible changes in the project, whether it is the deadline, or other aspects of the project. A Waterfall methodology would be linear, and involve starting from the hexdump (for example), completing and debugging it, and then moving on to the next project. There is much less flexibility in changing after the planning and design phases are completed.

7. Outline the development of the C language, making reference to the types of software C is intended for.

The development of C is closely tied to the Unix operating system PDP-11, and was created by Dennis Ritchie. The operating system was originally written in assembly, but attempts were made to write in B, which was a simplified version of BCPL. The flaws of B were addressed through the creation of C. The initial development of C eventually led to the rewriting of a large part of the Unix system, during a time where most OS were running on assembly. Over the 1970s and 1980s, many different versions of C were implemented in a variety of computers, which drove the neccessity to standardize the programming language. This first began through ANSI (American National Standards Institute) and ISO. Three more modern revisions to the language happened in 1999 (C99), C11 (2011) and C18 (2018).

C is initially intended for the development and writing of system software, but has developed to be a general purpose programming language, mainly for developing firmware and other portable applications. It is a compiled, low level language, and it is statically typed.