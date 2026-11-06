# CPP Module 05 — Repetition and Exceptions

## Description

CPP Module 05 introduces **exception handling** in C++98 through a small, bureaucratic simulation. Over four exercises, a hierarchy of classes (`Bureaucrat`, `Form` / `AForm`, concrete forms, and `Intern`) is built, where every invalid operation is reported with a custom exception instead of an error code.

Key concepts covered:

- `try` / `catch` / `throw` and exception propagation
- Custom exception classes nested inside other classes (deriving from `std::exception`, overriding `what()`)
- Orthodox Canonical Form (default constructor, copy constructor, copy assignment operator, destructor)
- Abstract classes and pure virtual functions
- Polymorphism and the factory pattern (`Intern::makeForm`)
- `const` correctness

> **Grade scale:** grades range from **1** (highest) to **150** (lowest). Any attempt to go above 1 or below 150 throws `GradeTooHighException` or `GradeTooLowException`.

## Exercises

| Exercise | Name | Turn-in files | Summary |
|----------|------|---------------|---------|
| ex00 | Mommy, when I grow up, I want to be a bureaucrat! | `Makefile`, `main.cpp`, `Bureaucrat.{h,hpp}`, `Bureaucrat.cpp` | `Bureaucrat` with a constant name and a grade (1–150). Provides getters, `incrementGrade()` / `decrementGrade()`, nested grade exceptions, and an `operator<<` overload printing `<name>, bureaucrat grade <grade>.` |
| ex01 | Form up, maggots! | + `Form.{h,hpp}`, `Form.cpp` | `Form` with a name, a signed flag, a grade required to sign and a grade required to execute. Adds `Form::beSigned(Bureaucrat&)` and `Bureaucrat::signForm()`, which prints whether the signing succeeded and why not if it failed. |
| ex02 | No, you need form 28B, not 28C... | + `AForm.*`, `ShrubberyCreationForm.*`, `RobotomyRequestForm.*`, `PresidentialPardonForm.*` | `Form` becomes the abstract class `AForm`. Three concrete forms are added, each with its own action on `execute()`. Adds `Bureaucrat::executeForm()`. |
| ex03 | At least this beats coffee-making | + `Intern.{h,hpp}`, `Intern.cpp` | `Intern` has a `makeForm(name, target)` function that returns a newly allocated form matching the requested name, without an `if/else if` forest. |

### Concrete forms (ex02)

| Form | Sign grade | Exec grade | Action |
|------|-----------|------------|--------|
| `ShrubberyCreationForm` | 145 | 137 | Creates a file `<target>_shrubbery` containing ASCII trees. |
| `RobotomyRequestForm` | 72 | 45 | Prints drilling noises, then robotomizes `<target>` successfully 50% of the time (failure message otherwise). |
| `PresidentialPardonForm` | 25 | 5 | Informs that `<target>` has been pardoned by Zaphod Beeblebrox. |

### Intern (ex03)

`Intern::makeForm("robotomy request", "Bender")` prints `Intern creates robotomy request` and returns a pointer to a new `RobotomyRequestForm` targeting `Bender`. An unknown form name prints an explicit error message. The caller is responsible for `delete`-ing the returned form.

## Instructions

### Requirements

- A C++ compiler (`c++` / `clang++` / `g++`)
- `make`
- Compilation flags: `-Wall -Wextra -Werror -std=c++98`

### Project structure

```
cpp05/
├── ex00/
│   ├── Makefile
│   ├── main.cpp
│   ├── Bureaucrat.hpp
│   └── Bureaucrat.cpp
├── ex01/
│   ├── Makefile
│   ├── main.cpp
│   ├── Bureaucrat.{hpp,cpp}
│   └── Form.{hpp,cpp}
├── ex02/
│   ├── Makefile
│   ├── main.cpp
│   ├── Bureaucrat.{hpp,cpp}
│   ├── AForm.{hpp,cpp}
│   ├── ShrubberyCreationForm.{hpp,cpp}
│   ├── RobotomyRequestForm.{hpp,cpp}
│   └── PresidentialPardonForm.{hpp,cpp}
└── ex03/
    ├── Makefile
    ├── main.cpp
    ├── (all ex02 files)
    └── Intern.{hpp,cpp}
```

### Build and run

Each exercise is self-contained. From the repository root:

```bash
cd ex00          # or ex01, ex02, ex03
make             # compile
./bureaucrat     # run (executable name is defined in the Makefile)
```

Makefile rules:

| Rule | Description |
|------|-------------|
| `make` / `make all` | Compile the project |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the executable |
| `make re` | Rebuild from scratch |

### Testing

Each `main.cpp` includes test cases covering both valid and invalid scenarios. Suggested checks:

- Constructing a `Bureaucrat` with grade `0`, `151`, and negative values
- Incrementing a grade-1 bureaucrat and decrementing a grade-150 bureaucrat
- Signing a form with a bureaucrat whose grade is too low
- Executing an unsigned form, and executing with insufficient grade
- Running `RobotomyRequestForm` several times to observe the 50% outcome
- Calling `Intern::makeForm` with a valid and an invalid form name

### Use of AI

> Replace this section with an honest description of how AI was (or was not) used, for example:
> AI was used to clarify concepts such as exception propagation and pure virtual functions, and to review the README structure. All code was written, tested, and understood by the author.
