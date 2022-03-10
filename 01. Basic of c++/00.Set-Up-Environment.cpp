/*

### -- Setup Development Environment (For Sublime Text) -- ###

01. Download Sublime Text Editor.

02. Open  Terminal and Check for `gcc` compiler in your system.(By typing gcc --version).
----------------------------------------------------------------------------------------------------
Output:
macos@Aasifs-Air ~ % gcc --version
Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/4.2.1
Apple clang version 12.0.5 (clang-1205.0.22.11)
Target: x86_64-apple-darwin20.5.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
----------------------------------------------------------------------------------------------------

03. Copy Below Script.

For MacOSX  

{
  "cmd" : ["g++-10 $file_name -o $file_base_name && gtimeout 4s ./$file_base_name<inputf.in>outputf.in"], 
  "selector" : "source.c",
  "shell": true,
  "working_dir" : "$file_path"
}

For Windows

{
"cmd": ["g++.exe","-std=c++14", "${file}", "-o", "${file_base_name}.exe", "&&" , "${file_base_name}.exe<inputf.in>outputf.in"],
"selector":"source.cpp",
"shell":true,
"working_dir":"$file_path"
}

For Linux

{
"cmd" : ["g++ -std=c++14 $file_name -o $file_base_name && timeout 4s ./$file_base_name<inputf.in>outputf.in"], 
"selector" : "source.c",
"shell": true,
"working_dir" : "$file_path"
}

04. Open Sublime Text > Tools > Build system > New Build System(at bottom menu) and Paste above Script accordingly. Save it as C++ 14

05. Open Sublime and Set 3 panel(screns).one for coding, one for input and other for output.
Sublime > view > Layout : columns 3 > groups : maximum columns 2

06. Select C++ 14. Goto Tools > build system > select c++14. and to run program (Command[ctrl] + shift + B).


*/