# MuonScript

<link href="https://cdn.jsdelivr.net/npm/remixicon@2.5.0/fonts/remixicon.css" rel="stylesheet">

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

---

🚧 **This programming language is a work-in-progress.**

---

A modern, statically-typed, and mostly type-safe programming language, inspired by Python and many other popular programming languages.

## Features

- Default arguments, named parameters, and variadic parameters (including variadic named parameters)
- Type inference, generics with type constraints, and opt-in dynamic typing
- Modules, with control over exported members, and packages
- Sandbox inspired by [Deno](https://deno.land/)
- Iterators

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
#### <i class="ri-terminal-line"></i>&nbsp; Output
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
#### <i class="ri-terminal-line"></i>&nbsp; Output
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
#### <i class="ri-terminal-line"></i>&nbsp; Output
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

## Copyright

**License:** [Apache License 2.0](./LICENSE)

**Documentation:** [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/)

**Icons Used:** From [Remix Icon](https://github.com/Remix-Design/remixicon)
