# MuonScript

---

🚧 **This programming language is a work-in-progress.**

---

A modern, statically-typed, and mostly type-safe programming language.

## Features

- Default arguments, named parameters, and variadic parameters (including variadic named parameters)
- Type inference, generics with type constraints, and opt-in dynamic typing
- Modules, with control over exported members, and packages
- Sandbox inspired by [Deno](https://deno.land/)

## Examples

### Hello World

**main.mu**
```
###
Print Hello world! followed by a newline.
It is equivalent to std.print('Hello world!\n')
or std.print('Hello world!', end='\n').
###
std.println('Hello world!')

std.exit(0) # Exit code 0 means the program ran successfully.
###
Including exit(0) is optional as by default, MuonScript
programs exit with code 0.
###
```
#### Output
```
$ muonscript run main.mu
Hello world!
```
