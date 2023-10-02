
```markdown
# 0x15. C - File I/O

## Description
This repository contains C programs that demonstrate file Input/Output (I/O) operations. The C programming language provides powerful functions for working with files, and this project explores various aspects of file handling, including reading from and writing to files.


## Requirements
- C compiler (e.g., GCC)
- Linux-based system (for POSIX system calls)

## File Descriptions
- `0-read_textfile.c`: A program that reads a text file and prints its content to the `stdout`.
- `1-create_file.c`: A program that creates a new file or truncates an existing file and writes text content to it.
- `2-append_text_to_file.c`: A program that appends text to the end of an existing file.
- `3-cp.c`: A program that copies the content of one file to another.

## Usage
To use these programs, follow these steps:
1. Clone this repository to your local machine.
2. Navigate to the repository directory.
3. Compile the desired C file using your C compiler (e.g., `gcc -o my_program my_program.c`).
4. Run the compiled program (e.g., `./my_program`).

## Compilation
You can compile the C programs using the GCC compiler. Here's a basic compilation command:

```shell
gcc -o my_program my_program.c
```

Replace `my_program` with the name of the program you want to compile.

## Examples
### Example 1: Reading a Text File
```shell
$ gcc -o 0-read_textfile 0-read_textfile.c
$ ./0-read_textfile my_file.txt
This is the content of my_file.txt
```

### Example 2: Creating a File
```shell
$ gcc -o 1-create_file 1-create_file.c
$ ./1-create_file new_file.txt "Hello, world!"
File 'new_file.txt' created and written successfully!
```

### Example 3: Appending to a File
```shell
$ gcc -o 2-append_text_to_file 2-append_text_to_file.c
$ ./2-append_text_to_file existing_file.txt "Additional text."
File 'existing_file.txt' appended successfully!
```

### Example 4: Copying a File
```shell
$ gcc -o 3-cp 3-cp.c
$ ./3-cp source_file.txt destination_file.txt
File 'source_file.txt' copied to 'destination_file.txt' successfully!
```

## Authors
- Manuel7070
