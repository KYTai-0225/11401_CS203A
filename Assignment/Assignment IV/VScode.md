## VSCode Development Environment Configuration Notes

This document records the experience and configuration steps discovered while setting up VSCode for C/C++ development.

### 1. Initial Setup and Installed Extensions

| Item | Description |
| :--- | :--- |
| **Editor** | Visual Studio Code (VSCode) |
| **Installed Extension** | **C/C++ Extension Pack** (or other relevant C/C++ extensions) |

### 2. Primary Challenge: Multi-File Compilation and Header File Issues

#### Problem Description

After writing code in VSCode, if a project consists of multiple source files (e.g., a `main.c` and other module files), and the `main` function needs to call content defined in these modules (via `#include` directives), **VSCode cannot directly compile and link all source files within the same folder.**

This results in a linking error where the `main` function cannot find the **implementation content** of the functions declared in the header files.

#### Temporary Fix: Manually Modifying `tasks.json`

A temporary solution was found by modifying the workspace's build configuration file, `tasks.json`.

| File/Setting | Description |
| :--- | :--- |
| **File Path** | `.vscode/tasks.json` |
| **Required Modification** | The compilation command arguments must be manually changed from targeting a single active file (e.g., `${file}`) to targeting all relevant source files in the current folder. |
| **Example Argument** | Replace the single-file argument with: `"**/*.c"` (or `**/*.cpp` for C++), ensuring all source files in the directory are compiled. |

### 3. Unresolved Challenge: Switching Between C and C++ Compilers

Due to differences in compiler commands and standards between C and C++ languages, it is currently necessary to **manually modify the `tasks.json`** file's compiler path or command (e.g., switching from `gcc` to `g++`) every time development switches between a C project and a C++ project.

**A permanent or streamlined solution for automatically switching the C/C++ build environment has not yet been discovered.**

---
*(Future update to seek a more elegant C/C++ environment switching mechanism.)*