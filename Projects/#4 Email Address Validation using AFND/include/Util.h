//
// Created by Ivan Dario Orozco Ibañez on 6/02/24.
//

#ifndef SECOND_PRACTICE_UTIL_H
#define SECOND_PRACTICE_UTIL_H

#include <stdio.h> // Include the standard input/output library.
#include <stdlib.h> // Include the standard library.
#include <time.h> // Include the time library.

#define NORMAL_COLOR 0xF0
#define BLACK_COLOR 0x10
#define RED_COLOR 0x20
#define GREEN_COLOR 0x30
#define YELLOW_COLOR 0x40
#define BLUE_COLOR 0x50
#define MAGENTA_COLOR 0x60
#define CYAN_COLOR 0x70
#define WHITE_COLOR 0x80

#define Cls() printf("\033[H\033[J"); // ANSI code to clear screen.

#define Pause() system("read -n 1 -s -p \"Press any key to continue...\"");

#define RstColor() printf("\033[0;0m");

typedef unsigned char uchar;

void BackgroundColor(uchar FontColor, uchar BgColor);
void Delay(int Seconds);

#endif //SECOND_PRACTICE_UTIL_H
