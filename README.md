[![Build Status](https://travis-ci.org/sergiorf/xmath.svg?branch=master)](https://travis-ci.org/sergiorf/xmath)

<a href="url"><img src="doc/pi.png" align="left" height="48" width="48" ></a>

# XMath a C++ math library

### Introduction

Thank you for your interest in this project!

This is a lightweight math library, designed to be simple to build and use. 

## Usage

### Prerequisites

You will need:

 * A modern C/C++ compiler
 * CMake 3.1+ installed 

### Building The Project

#### Git Clone

First we need to check out the git repo:

```bash
$ cd ${insert your workspace folder here}
$ git clone https://github.com/sergiorf/xmath
$ cd xmath
$ git submodule init && git submodule update
```
Now we should be in the project's top level folder. 

#### Project Structure

There are three empty folders: `lib`, `bin`, and `include`. Those are populated by `make install`.

The rest should be obvious: `src` is the sources, and `test` is where we put our unit tests.

Now we can build this project, and below we show three separate ways to do so.

#### Building Manually

```bash
$ rm -rf build/manual && mkdir build/manual
$ cd build/manual
$ cmake ../..
$ make && make install
$ cd ../..

# Run the tests:
$ bin/xmath_tests 
```

####  Building Using the Script

There is a handy BASH script (used by the Travis CI) that you can run locally. It builds the project, and runs all the tests

```bash
./run.sh
```

## File Locations

 * `src/*` — C++ code that ultimately compiles into a library
 * `test/lib` — C++ libraries used for tests (eg, Google Test)
 * `test/src` — C++ test suite
 * `bin/`, `lib`, `include` are all empty directories, until the `make install` install the project artifacts there.

Tests:

 * A `test` folder with the automated tests and fixtures that mimics the directory structure of `src`.
 * For every C++ file in `src/A/B/<name>.cpp` there is a corresponding test file `test/A/B/<name>_test.cpp`
 * Tests compile into a single binary `test/bin/runner` that is run on a command line to run the tests.
 * `test/lib` folder with a git submodule in `test/lib/googletest`, and possibly other libraries.

#### Contributing

**Pull Requests are WELCOME!** Please submit any fixes or improvements, and I promise to review it as soon as I can at the project URL:

 * [Project Github Home](https://github.com/sergiorf/xmath)
 * [Submit Issues](https://github.com/sergiorf/xmath/issues)
 * [Pull Requests](https://github.com/sergiorf/xmath/pulls)

### License

&copy; 2019 Sergio Rodriguez.

Open sourced under MIT license, the terms of which can be read here — [MIT License](http://opensource.org/licenses/MIT).

### Acknowledgements

This project is a derivative work from a generic C++ project template designed by Konstantin Gredeskoul at [CMake Project Template](https://github.com/kigster/cmake-project-template)

Thank you!

