StarWars is an interactive 2D game based on the 1980s arcade classic.The objective of the game is
to pilot a spaceship and shoot the asteroids out of the way before collision occurs and
the player loses a life.


Our code folder have files including fonts,images,sounds,header files and cpp files.

So to run locally:

SFML must be installed 

To install SFML in visual studio:

1.Download SFML zip file from the respective website.

2.Extract to desired location.

3.To setup a Visual Studio project, create a new project. In this Visual Studio project we need to link where SFML File  is located.

4.Inorder to link the sfml library first open the Debug property of the project. Then select all configuration and add the include path of the sfml/include file into the additional include directories in C++ drop down menu.

5.Add the  path of the sfml/lib file into the additional library directories in linker drop down menu.

6.Then add additional dependencies of the library in the order "sfml-graphics.lib", "sfml-window.lib", "sfml-system.lib" and "sfml-audio.lib".

7.Add these additional dependencies of library in debug mode in the order "sfml-graphics-d.lib", "sfml-window-d.lib", "sfml-system-d.lib" and "sfml-audio-d.lib".  

8.Copy the dll files from sfml to the project file location.


For linux:
1.Download sfml development files.

2.Extract the files  install the SFML headers and library files to the appropriate location. To do so, you just have to go to the SFML-x.y directory and type "sudo make install".

3.When linking to multiple SFML libraries, make sure you link them in the right order. The link command line would be as follows :

g++ -o ... -lsfml-graphics -lsfml-window -lsfml-system

For MacOS:
1.Download sfml development files.

2.Extract the files  install the SFML headers and library files to the appropriate location.

Header files and libraries

SFML is available either as dylibs or as frameworks. Only one type of binary is required although both can be installed simultaneously on the same system. We recommend using the frameworks.

Copy the content of Frameworks to /Library/Frameworks.

Copy the content of lib to /usr/local/lib and copy the content of include to /usr/local/include.

SFML depends on a few external libraries on macOS. Copy the content of extlibs to /Library/Frameworks.

Can also take reference from https://www.sfml-dev.org/tutorials/2.5/

After all these setup simply run the program by adding code files to the project. 

Menu:

<img width="738" alt="Screenshot 2024-01-19 at 2 59 37 PM" src="https://github.com/bigyapti/StarWars/assets/69586215/ce03e2ed-cfc9-4640-8a63-364a8cd98ff8">

Gameplay:

<img width="984" alt="sw" src="https://github.com/bigyapti/StarWars/assets/69586215/52911ef4-e716-4cd3-b3c4-c4182aea0b7d">

Game over:

<img width="734" alt="Screenshot 2024-01-19 at 3 00 14 PM" src="https://github.com/bigyapti/StarWars/assets/69586215/7c7e41ca-8ff2-4b63-9b2b-6e2359d7d0fc">

