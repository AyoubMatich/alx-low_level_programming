Make
**Make** is a build automation tool that automatically builds executable programs and libraries from source code by reading files called Makefiles, which specify how to derive the target program.

**Makefiles** are configuration files used by the `make` command. They contain rules for building executables and other targets from source code.

**When to use Makefiles:**
- Use Makefiles when you have a project with multiple source files that need to be compiled and linked together.
- Use them to automate the build process, ensuring that only the necessary files are recompiled when source files change.

**Why use Makefiles:**
- Makefiles simplify the build process by automating repetitive tasks.
- They improve efficiency by compiling only the necessary files.

**How to use Makefiles:**
- Create a file named `Makefile` in your project directory.
- Define variables for compiler settings, source files, etc.
- Write rules to specify how to build targets (e.g., executables, object files).
- Use built-in rules or define your own rules for custom build steps.

**Rules** in Makefiles specify how to build targets. They consist of a target, dependencies, and commands to execute.

**Setting and using rules:**
- To set a rule, specify the target, dependencies, and commands to build the target.
- For example: `target: dependencies\n\tcommands`

**Explicit and implicit rules:**
- **Explicit rules** specify how to generate a specific target file from its dependencies.
- **Implicit rules** are predefined rules that `make` uses to build common file types (e.g., `.c` files to `.o` files).

**Common/Useful rules:**
- `.PHONY`: Specifies targets that are not actual files (e.g., `clean`).
- `all`: Specifies the default target to build.
- `clean`: Specifies a target to remove generated files.

**Variables** in Makefiles are used to store values that can be referenced throughout the Makefile.

**Setting and using variables:**
- To set a variable, use `VAR_NAME = value`.
- To use a variable, reference it with `$(VAR_NAME)`.

**Example:**
```makefile
CC = gcc
CFLAGS = -Wall

all: my_program

my_program: main.o utils.o
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f *.o my_program
```

In this example, `CC` and `CFLAGS` are variables for the compiler and compiler flags, respectively. The `all` rule specifies the default target to build, `my_program`. The `my_program` rule specifies how to build the target executable, and the `clean` rule specifies how to clean up generated files.
