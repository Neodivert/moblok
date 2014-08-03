# Moblok'
Moblok' is just another tetris clone, as simple as that!.

## Current project status
Currently, this project is "slightly active", meaning that I'm planning to finish it, but I am doing it on my free time and not on a regular basis.

## Playing the latest demo

1. Go to the [releases page](https://github.com/Neodivert/moblok/releases).
2. Find and download the latest release that matches your OS and architecture.
3. (Windows only): Unzip the downloaded file and execute moblok.exe.
3. (Linux only - DEB): Unzip and install the downloaded DEB package. Then, open a terminal and execute "moblok".
4. Enjoy!.

## Building Moblok' from code

### Dependencies

Building tools:
- [g++ (C++ compiler)](http://gcc.gnu.org/).
- [Qt Creator](http://qt-project.org/wiki/category:tools::qtcreator)
- [cmake 2.8](http://www.cmake.org/)

Libraries (both development and runtime versions):
- [SDL 2](http://www.libsdl.org/)
- [SDL_image 2](http://www.libsdl.org/projects/SDL_image/)
- [SDL_mixer 2](http://www.libsdl.org/projects/SDL_mixer/)
- [SDL_ttf 2](http://www.libsdl.org/projects/SDL_ttf/)

### Donwloading and building

1. Install the dependencies listed in previous section.

2. Clone the [Moblok' repository at Github](https://github.com/Neodivert/moblok/)
```
git clone git@github.com:Neodivert/moblok 
```

3. Enter in Moblok' directory
```
cd moblok
```

3. Build the game
```
cmake .
make
sudo make install
```

4. Enjoy!

## License

### Own work

The source code of the game (directory "source") is under the GPLv3 license. You can find a copy of this license in the file share/moblok/license/LICENSE.moblok.txt.

The images used by the game (directory "share/moblok/img/") are licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/4.0/.

### Third-party work

The libraries SDL, SDL_image and SDL_mixer, as well as their dependencies are property of their respective owners. The licenses for every library used by the game are present in the directory "share/moblok/license/sdl*.

The music played in the game (directory "share/moblok/music/Tetris_theme.ogg") has been downloaded from Wikimedia Commons on [this url](http://commons.wikimedia.org/wiki/File:Tetris_theme.ogg?uselang=es). As stated by that url, the music has been made by Bogozi and it is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported license (CC BY-SA 3.0). To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/.

The font used in the game is [LiberationSans-Bold.ttf](http://en.wikipedia.org/wiki/Liberation_fonts).

## Changelog

### v0.7.1
- Added license advices and a README I forgot in previous release (Ooops!).
- Building system changed to CMake.
- Minor changes and fixes in source code.
- Added facilities for building a DEB package for Moblok' from source code.

### v0.7.0
- First demo. It allows you to play calmly to death (no score, no levels, no victory screen).
