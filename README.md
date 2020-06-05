# MuonScript

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

---

🚧 **This programming language is a work-in-progress.**

---

A modern, statically-typed, and mostly type-safe programming language, inspired by Python and many other popular programming languages. The MuonScript "compiler" compiles source code to bytecode, to be run by the interpreter.

## Features

- Default arguments, named parameters, and variadic parameters (including variadic named parameters)
- Type inference, generics with type constraints, and opt-in dynamic typing
- Modules, with control over exported members, and packages
- Class member visibility (i.e. `public` and `private`)
- Sandbox inspired by [Deno](https://deno.land/)
- Iterators

## Design Choices and Philosophy

### From the Beginning

- The programmer should always initialize constants and variables
- If a function is supposed to return a value, the programmer must return a value somewhere in the function
- There should be only a few ways to accomplish tasks, and they should be obvious
- Undefined behaviour should never occur
- The grammar shouldn't be too bloated

### In the Future

- The MuonScript compiler should optimize whatever it safely can
- Programs shouldn't do at run-time what can be done at compile-time

## Examples

### Hello World

**main.mu**
```
// Print Hello world! followed by a newline.
// It is equivalent to
// std.print('Hello world!\n')
// or std.print('Hello world!', end='\n').
std.println('Hello world!')
```
#### > Output
```
$ muonscript run main.mu
Hello world!
```

### Command-Line Arguments

**main.mu**
```
// __args__ has the type DynamicList!(String).
for each_arg in __args__ {
    // each_arg is const by default.
    // The f string prefix is used for embedding values
    // inside strings.
    std.println(f'> ${each_arg}')
    // or std.println(each_arg, start='> ')
}
```
#### > Output
```
$ muonscript run main.mu "Argument 1" "Argument 2"
> Argument 1
> Argument 2
```

### Guessing Game

**package/guessing_game.mu**
```
// SECRET_NUMBER is inferred to be of type Float,
// so you don't have to write
// const SECRET_NUMBER: std.Float = 3.14.
// Also, since it isn't exported,
// SECRET_NUMBER won't be visible outside this module.
const SECRET_NUMBER = 3.14

func guess_matches_secret_number(guess: std.Float) -> std.Bool
{
    return guess == SECRET_NUMBER
}

export func guessing_game() {
    const number_of_guesses = 3
    for i in std.range(number_of_guesses + 1, start=1) {
        // i is of type Int
        std.println(f'This is guess ${i}')
        std.println(f'${number_of_guesses-i} guesses remaining')
        std.print('Your guess: ')
        const guess = std.Float(std.get_input())
        if guess_matches_secret_number(guess) {
            std.println('You won!')
            return
        }
        else {
            std.println('Wrong number')
        }
    }
    std.println('You lost.')
}
```
**main.mu**
```
from package.guessing_game import guessing_game as game

game()
```
#### > Output
```
$ muonscript run main.mu
This is guess 1
2 guesses remaining
Your guess: 3.15
Wrong number
This is guess 2
1 guesses remaining
Your guess: 3.14
You won!
```

### Dog

**main.mu**
```
class Dog {
    const name: std.String  // Note that name is an instance variable.
    // We can make name const because we will only assign
    // a value to it once.
    static count = 0  // count is a class variable

    func __init__(name = '?') {
        /// Constructor method of Dog class.
        /// name: The dog's name.
        // The comments above are documentation comments
        // because they have three slashes instead of two.
        // if no name is passed, the default name ? will be used
        self.name = name
        // Note that forgetting to initialize the name
        // instance variable in the constructor
        // will result in an error.
        cls.count += 1
    }

    func bark() {
        std.print(f'${self.name}: ')
        std.println('Woof!')
    }
}

fido = Dog('Fido')
fido.bark()
std.println(fido.name)
nameless = Dog()
nameless.bark()
std.println(Dog.count)
```
#### > Output
```
$ muonscript run main.mu
Fido: Woof!
Fido
?: Woof!
2
```

### Types From Operations

**main.mu**
```
// Note that the three type annotations below are optional
// as they can be inferred.
const A: std.Int = 20
const B: std.Int = 2
const C: std.Float = 0.5

const SUM = A + B  // SUM is of type Int
const SUM_2 = A + C  // SUM_2 is of type Float
const DIFFERENCE = A - B  // DIFFERENCE is of type Int
const DIFFERENCE_2 = A - C  // DIFFERENCE_2 is of type Float
const PRODUCT = A * B  // PRODUCT is of type Int
const PRODUCT_2 = A * C  // PRODUCT_2 is of type Float
const QUOTIENT = A / B  // QUOTIENT is of type Float
```

## Building

### Tree-sitter Parser

```
cd tree-sitter-muonscript
tree-sitter generate && tree-sitter build-wasm
```

## Copyright

**Software License:** [Apache License 2.0](./LICENSE)

**Documentation License:** [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/)
