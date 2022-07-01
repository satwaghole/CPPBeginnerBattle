# Hi All,

Adding latest copiler setting for Dev C++ IDE:-
1. Download cygwin from https://www.cygwin.com/
2. Install it with all default setting and below package :- gcc-g++ 11.3.0 version 
4. Midify environmanetal variables:- Path->Edit->New -> paste "C:\cygwin64\bin"
5. Go to CMD, and type $g++ --version
    g++ (GCC) 11.3.0
    Copyright (C) 2021 Free Software Foundation, Inc.
    This is free software; see the source for copying conditions.  There is NO
    warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

6. Go to Dev C++-> Tools -> Compiler Options-> Directories-> Press 3rd + button for "Add compiler set by folder button" and add "C:\cygwin64\bin" there.
7. Now you should be able to see "Compiler set to configure"-> MinGW GCC 11.3.0 and press OK.

Now you should be able to copile a programm with latest copiler. 

8. Add flag -std=c++11 or 14/17 or -std=c++20 in Compiler Options->Programms->g++ -> g++.exe -std=c++20
