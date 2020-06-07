// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The DeroGold Association
// Copyright (c) 2020, The COVID-19 Developers
// Copyright (c) 2020, The PengolinCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = 
    "\n                                \n"
    "|P|E|N|G|O|L|I|N|C|O|I|N|         \n"
    "                                  \n";
                                                                                               

const std::string nonWindowsAsciiArt =
    "\n                                                                                             \n"
    "██████╗ ███████╗███╗   ██╗ ██████╗  ██████╗ ██╗     ██╗███╗   ██╗ ██████╗ ██████╗ ██╗███╗   ██╗\n"
    "██╔══██╗██╔════╝████╗  ██║██╔════╝ ██╔═══██╗██║     ██║████╗  ██║██╔════╝██╔═══██╗██║████╗  ██║\n"
    "██████╔╝█████╗  ██╔██╗ ██║██║  ███╗██║   ██║██║     ██║██╔██╗ ██║██║     ██║   ██║██║██╔██╗ ██║\n"
    "██╔═══╝ ██╔══╝  ██║╚██╗██║██║   ██║██║   ██║██║     ██║██║╚██╗██║██║     ██║   ██║██║██║╚██╗██║\n"
    "██║     ███████╗██║ ╚████║╚██████╔╝╚██████╔╝███████╗██║██║ ╚████║╚██████╗╚██████╔╝██║██║ ╚████║\n"
    "╚═╝     ╚══════╝╚═╝  ╚═══╝ ╚═════╝  ╚═════╝ ╚══════╝╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif

