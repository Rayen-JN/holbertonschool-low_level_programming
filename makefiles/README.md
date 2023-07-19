# Makefile in C

## Introduction

A Makefile is a text file that contains a set of rules used by the make utility to build and manage a project. In the context of C programming, a Makefile is commonly used to automate the compilation and linking of source code files. This README file provides an overview of Makefiles in C and how to use them effectively.

## Table of Contents

- [What is a Makefile?](#what-is-a-makefile)
- [Why Use Makefile in C?](#why-use-makefile-in-c)
- [Syntax of a Makefile](#syntax-of-a-makefile)
- [Creating a Simple Makefile](#creating-a-simple-makefile)
- [Advanced Makefile Features](#advanced-makefile-features)
- [Common Makefile Targets](#common-makefile-targets)
- [Conclusion](#conclusion)

## What is a Makefile?

A Makefile is a file that specifies the dependencies and commands needed to build a program. It defines rules for compiling source code files, linking object files, and creating the final executable or library. Makefiles are typically used in large projects with multiple source files, where recompiling only the modified files can save compilation time.

## Why Use Makefile in C?

Makefiles provide several benefits for C projects:

- **Automated Build Process**: Makefiles automate the build process, reducing manual effort and ensuring consistency across builds.
- **Efficient Compilation**: Makefiles only compile modified source files, avoiding unnecessary recompilation and saving compilation time.
- **Dependency Management**: Makefiles handle dependencies between source files, ensuring that files are recompiled when their dependencies change.
- **Parallel Compilation**: Makefiles can be configured to compile multiple source files in parallel, taking advantage of multi-core systems for faster builds.

## Syntax of a Makefile

A Makefile consists of rules that define targets, dependencies, and commands. The basic syntax of a rule is:
