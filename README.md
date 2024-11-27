# Cybersecurity Piscine – Reverse me I’m famous!

**The art of Reverse Engineering.**

---

## Summary

**Reverse me I’m famous!** is a project in the Cybersecurity Piscine that introduces the principles of reverse engineering. You will analyze binary programs, understand their inner workings, and create C representations of their algorithms. This project emphasizes binary analysis, debugging, and a deeper understanding of compiled code.

---

## Features

### Core Functionality

1. **Binary Analysis**:
   - Understand how provided binary files work using debugging tools (e.g., `gdb`).

2. **Password Discovery**:
   - Reverse-engineer binaries to find the correct passwords to validate their logic.

3. **C Program Recreation**:
   - Write a C program that replicates the algorithmic behavior of the binary.

4. **Organized Submission**:
   - Store results in folders named after the difficulty level, with appropriate files:
     - `password`: Contains the discovered password.
     - `source.c`: Contains the recreated C program.

---

## Structure

### Directory Layout

Your submission should follow this structure:
. ├── level1/ │ ├── password # Password for level1 binary │ └── source.c # C representation of level1 binary ├── level2/ │ ├── password # Password for level2 binary │ └── source.c # C representation of level2 binary

markdown
Code kopieren

---

## Usage

### Tools and Setup

1. **Debugging Tools**:
   - Use `gdb` or similar tools to analyze the binaries.
   - Understand their logic and identify the passwords.

2. **Password Extraction**:
   - Discover passwords for the binaries and save them in the `password` file.

3. **C Program Recreation**:
   - Recreate the binary's logic in a C program and save it as `source.c`.

---

### Validation

To validate the mandatory part:
- Reverse-engineer the first two binaries (`level1` and `level2`).
- Provide:
  - A valid password in the `password` file.
  - A C representation in the `source.c` file.

Example:
```bash
$ ls -al level1
total 16
-rw-r--r-- 1 user user 42 Dec 3 XX:42 password
-rw-r--r-- 1 user user 42 Dec 3 XX:42 source.c

$ cat level1/password
XXXXXXXXXXXXXXXXXXXXXXXXXXXX
```

## Requirements
### Mandatory Part

### Binary Analysis:

Reverse the logic of the first two programs.
Understand how they validate inputs to produce passwords.

### C Program:

Write a valid C program that represents the algorithm of the binary.

### Password File:

Provide a correct password to solve the binary.
Bonus Part (Optional)

### The bonus requires:

Patching binaries to accept any password.
Explaining and justifying the patching method.
Learning Outcomes

### Reverse Engineering Basics:
Understand how compiled programs work at a binary level.

### Debugging Proficiency:
Use tools like gdb to analyze and modify program behavior.

### Algorithm Replication:
Translate binary logic back into high-level C code.

Reverse me I’m famous! – Dive into the world of binary secrets! 🕵️‍♂️

The use of https://dogbolt.org/ is helpful here!
