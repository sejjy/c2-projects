## c2-projects

Answers to programming projects from the second edition of C Programming: A
Modern Approach

### Structure

```
.
├── 02
│   ├── 01.c
│   ├── 02.c
│   └── ...    # other project.c files or project directories
└── ...    # other chapters
```

### Compile and run

#### Single-file projects

Run `gcc` with the following options:

```bash
$ gcc -O -Wall -W -pedantic -ansi -std=c99 -o project project.c
$ ./project [args...]
```

Alternatively, run [`./car`](./car) to <ins>c</ins>ompile <ins>a</ins>nd
<ins>r</ins>un single-file projects easily:

```bash
$ ./car chapter project [args...]
```

#### Multi-file projects

Run `make` inside the project directory:

```bash
$ make [target]
$ ./project [args...]
```
