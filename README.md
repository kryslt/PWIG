# PWIG (Pascal Wrapper and Interface Generator)

Original authorship: Tomas Krysl

## REPOSITORY LOCATION:
The repository was originally part of KControls located at https://github.com/kryslt/KControls. 
Since February 2024 it is located here https://github.com/kryslt/PWIG.

## LICENSE:
This code is licensed under BSD 3-Clause Clear License, see file License.txt or https://spdx.org/licenses/BSD-3-Clause-Clear.html.

## DESCRIPTION:
PWIG is a software development tool that connects programs/libraries written in one programming language
with a variety of another programming languages. It reads the interface definitions
from a single XML configuration file and generates wrapper code for the caller (main program)
and the callee (shared library).

PWIG never parses any of your code.
This means you have to implement the wrapper classes on the callee side yourself.
The workflow is similar to eg. implementing the COM server in Delphi.

PWIG has been written in Free Pascal/Lazarus, hence its name (Pascal Wrapper and Interface Generator).
However, it can be used not only by Pascal programmers but for any other programming languages as well,
as long as its wrapper generators exist.

## SYSTEM REQUIREMENTS:
- Free Pascal Compiler 2.6.0 or higher (https://www.freepascal.org/)
- Lazarus 1.2.2 or higher (https://www.lazarus-ide.org/)
- KControls 1.7 or higher (https://github.com/kryslt/KControls)

## COMPILING:
1. Install KControls.lpk.
2. Compile the project PWIG.lpi.

## USAGE:

Syntax: PWIG [input file]

Example: PWIG config.xml

Entire configuration must be present in the input XML file.
You can create the input file with the PWIG GUI or write it by hand.
See additional documentation for the input file structure.

## BUG REPORTING:
In case you find a bug or have ideas to improve please create an issue or pull request here:

https://github.com/kryslt/PWIG/issues

## PLANNED:
- PWIG GUI
- other wrapper generators (Python, Java, ...)

## KNOWN PROBLEMS:
General:
 - Only few basic data types are supported
 - Currency and Date&Time types not tested at all, use only at own risk

C# wrapper:
 - C# lacks support for indexed properties (what a shame, first I thought C# was modern language, but it is clearly not!!!)
 - C# output cannot be used in Xamarin PCL if you plan to build apps for iOS. You have to use shared project instead.
   This is because of the DllImport clause (and other attributes) which requires constant expressions.
   Again, DLL import stuff very badly designed in .NET!!!

C++ wrapper:
 - C++ properties supported only via __declspec(property) in Visual Studio
 - C++ lacks native support for events (you must override the caller wrapper class to use them)
 - indexed properties not supported at all

## IMPORTANT INFO FOR CONTRIBUTORS:
You may contribute to this project, in such case:
1. clone or fork the repository on https://github.com/kryslt/PWIG/
2. implement and test your changes, if possible in all these IDEs:
   - Lazarus on Windows 7 or higher
   - Lazarus on some version of Linux, preferrably Ubuntu or Kubuntu.
   - Lazarus on MAC
3. create a pull request on https://github.com/kryslt/PWIG/ or include a patch into the issue.

DON'T REMOVE ANY PROTECTED OR PUBLIC STUFF, the package is already heavily used by me and others!

I will not merge any changes that violate these rules!

If you need specific features please use your clone or fork.

If you plan to regularly contribute to this project and have enough experiences with this kind of programming, you can be granted write access to the repository.

## VERSION HISTORY:
Version 0.9.2 (January 2017): 
- Added:
  - wrapper generators for C++ (unmanaged code) and C# (managed code).

Version 0.9.1 (October 2016): 
- Initial release.
