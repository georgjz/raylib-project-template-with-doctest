# Simple Project Template with Raylib and Doctest

This repository contains a simple project template for creating a program with [raylib][1]. It uses [doctest][2] to create unit tests for your code.

The file structure reflects my personal preferences. If it is not to your liking, it should be easy to modify all the CMake files accordingly. [Raylib][1] is added as a [git submodule][3], as I prefer to build certain dependencies for my projects within it, as not to "pollute" my system-wide installs with libraries that only a few repositories use. This is, again, personal preference.

Consider is code to be very much WIP. It will get updates as I get to understand raylib better.

## Things That I Want to Add

* Unit Testing
  * Improve `tests/CMakeLists.txt` to automatically determine dependencies and find include files
  * Allow for automatic build of multiple independent unit test programs; detect test files automatically (all `*_tests.cpp` files)
* More granular build configurations for different targets/platforms
* Allow working with different profiling tools

## Contributing

Any contributions or suggestions are highly welcomed! Please use the issue or pull request function above.

[1]: https://www.raylib.com
[2]: https://github.com/onqtam/doctest
[3]: https://github.blog/2016-02-01-working-with-submodules/
