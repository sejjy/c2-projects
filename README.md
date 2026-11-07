## c2-projects

Answers to programming projects from the second edition of C Programming: A
Modern Approach

### Structure

```text
.
├── 02
│   ├── 01.c
│   ├── 02.c
│   ├── 03.c
│   └── ...    (other project.c files or project directories)
└── ...    (other chapters)
```

### Compile and run

#### Single-file projects

Compile using [`gcc`](https://gcc.gnu.org/) with the following options:

```bash
$ gcc -O -Wall -W -pedantic -ansi -std=c99 -o project project.c
$ ./project [args...]
```

or use [`./car`](./car)
(<ins>c</ins>ompile
 <ins>a</ins>nd
 <ins>r</ins>un) anywhere inside the root directory:

```bash
$ ./car chapter project [args...]
```

#### Multi-file projects

Compile using [`make`](https://www.gnu.org/software/make/):

```bash
$ make [target]
$ ./project [args...]
```
