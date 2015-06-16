# Description

A header-only library for figuring out if two numbers; when operated on using the operators: +, -, *, and /; are equal to the expression: 1 + 1

# Installation

Clone this repository and move the OnePlusOne.hpp to your source directory and include it in your project.

# Usage

## Adding:

```
isEqualToOnePlusOneWhenAdded( 6, 4 );
```

= false (6 + 4 = 10)

## Subtracting

```
isEqualToOnePlusOneWhenSubtracted( 6, 4 );
```

= true (6 - 4 = 2)

## Multiplying

```
bool isEqualToOnePlusOneWhenMultiplied( 6, 4 );
```

= false (6 * 4 = 24)

## Dividing

isEqualToOnePlusOneWhenDivided( 6, 4 );

= false (6 / 4 = 1)

# Known bugs

None so far.

# Used in these projects

None yet, if your project uses this library, contact me!!!

# Future improvements

- Adding support for modulus
- Adding support for greater than, less than, greater than or equal to, less than or equal to, and NOT equal to
- Adding support for three numbers
- Support for floating point numbers
