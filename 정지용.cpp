#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void button1(int x, int y, int z) {
	BlockID stone = createBlock(BLOCK_STONE);
	int i, j;
	for (i = -6; i <= 6; i++) {
		int sz = sqrt(36 - (i*i));
		locateBlock(stone, x + i, y, z + sz);
		locateBlock(stone, x + i, y, z - sz);
		for (j = z - sz; j <= z + sz; j++) {
			locateBlock(stone, x + i, y, j);
		}
	}
	locateBlock(stone, x + 1, y, z + 6);
	locateBlock(stone, x + 1, y, z - 6);
	locateBlock(stone, x - 1, y, z + 6);
	locateBlock(stone, x - 1, y, z - 6);
	locateBlock(stone, x + 6, y, z + 1);
	locateBlock(stone, x + 6, y, z - 1);
	locateBlock(stone, x + 6, y, z + 1);
	locateBlock(stone, x - 6, y, z + 1);
	locateBlock(stone, x - 6, y, z - 1);
}
void button2(int x, int y, int z) {
	BlockID stone = createBlock(BLOCK_STONE);
	int i, j;
	for (i = 0; i < 13; i++) {
		for (j = z - 6; j <= z + 6; j++) {
			locateBlock(stone, x + 9 + i, y, j);
			locateBlock(stone, x + 9 + i, y, j);
			locateBlock(stone, x + 9 + i, y, j);
			locateBlock(stone, x + 9 + i, y, j);
		}
	}

}
void button3(int x, int y, int z) {
	BlockID stone = createBlock(BLOCK_STONE);
	int i, j;
	double s = sqrt(3);
	for (i = 0; i <= 6; i++) {
		double sz = (7 - i)*sqrt(3);
		locateBlock(stone, x - i, y, z + 21 - sz);
		locateBlock(stone, x + i, y, z + 21 - sz);
		for (j = z - sz + 21; j <= z + 21; j++) {
			locateBlock(stone, x + i, y, j);
			locateBlock(stone, x - i, y, j);
		}

	}
}
void button4(int x, int y, int z) {
	BlockID stone = createBlock(BLOCK_STONE);
	int i, j;
	for (i = 0; i < 13; i++) {
		for (j = 0; j < 3; j++) {
			locateBlock(stone, x + 14 + j, y, z + 9 + i);
			locateBlock(stone, x + 9 + i, y, z + 14 + j);
		}
	}
}
void button5(int x, int y, int z) {
	BlockID stone = createBlock(BLOCK_STONE);
	int i, j, k, s;
	for (i = 0; i < 7; i++) {
		locateBlock(stone, x - 21 + i, y, z + 5);
		locateBlock(stone, x - 21 + i, y, z + 21);
		locateBlock(stone, x - 26, y, z + 10 + i);
		locateBlock(stone, x - 10, y, z + 10 + i);
	}
	for (j = 0; j < 6; j++) {
		locateBlock(stone, x - 21, y, z + 5 + j);
		locateBlock(stone, x - 21, y, z + 21 - j);
		locateBlock(stone, x - 15, y, z + 5 + j);
		locateBlock(stone, x - 15, y, z + 21 - j);
		locateBlock(stone, x - 26 + j, y, z + 10);
		locateBlock(stone, x - 10 - j, y, z + 10);
		locateBlock(stone, x - 26 + j, y, z + 16);
		locateBlock(stone, x - 10 - j, y, z + 16);
	}
	for (k = 0; k < 2; k++) {
		for (s = -k; s <= k; s++) {
			locateBlock(stone, x - 12 - k, y, z + 13 + s);
			locateBlock(stone, x - 24 + k, y, z + 13 + s);
			locateBlock(stone, x - 18 + s, y, z + 19 - k);
			locateBlock(stone, x - 18 + s, y, z + 7 + k);
		}
	}
}
void joystick(int x, int y, int z) {
	BlockID stone = createBlock(BLOCK_STONE);
	int i, j, k;
	for (i = 0; i < 3; i++) {
		for (j = -i; j <= i; j++) {
			locateBlock(stone, x - 16 - i, y + 6, z - 1 + j);
			locateBlock(stone, x - 20 + i, y + 6, z - 1 + j);
			locateBlock(stone, x - 16 - i, y + 5, z - 1 + j);
			locateBlock(stone, x - 20 + i, y + 5, z - 1 + j);
		}
	}
	for (k = 0; k <= 7; k++) {
		locateBlock(stone, x - 18, y + k, z);
		locateBlock(stone, x - 18, y + k, z - 1);
		locateBlock(stone, x - 18, y + k, z - 2);
		locateBlock(stone, x - 19, y + k, z - 1);
		locateBlock(stone, x - 17, y + k, z - 1);
	}
}
void floor(int x, int y, int z) {
	BlockID dia = createBlock(BLOCK_DIAMOND);
	int i, j;
	for (i = -28; i <= 23; i++) {
		for (j = -8; j <= 23; j++) {
			locateBlock(dia, x + i, y - 1, z + j);
		}
	}
}
void line(int x, int y, int z) {
	WoolID wool = createWool(COLOR_BLACK);
	locateBlock(wool, x - 3, y - 1, z - 9);
	locateBlock(wool, x - 3, y - 1, z - 10);
	locateBlock(wool, x - 3, y - 1, z - 11);
	locateBlock(wool, x - 3, y - 1, z - 12);
	locateBlock(wool, x - 2, y - 1, z - 13);
	locateBlock(wool, x - 1, y - 1, z - 13);
	locateBlock(wool, x, y - 1, z - 14);
	locateBlock(wool, x, y - 1, z - 15);
	locateBlock(wool, x, y - 1, z - 16);
	locateBlock(wool, x - 1, y - 1, z - 17);
	locateBlock(wool, x - 2, y - 1, z - 17);
	locateBlock(wool, x - 3, y - 1, z - 17);
	locateBlock(wool, x - 4, y - 1, z - 17);
	locateBlock(wool, x - 5, y - 1, z - 17);
	locateBlock(wool, x - 6, y - 1, z - 18);
	locateBlock(wool, x - 6, y - 1, z - 19);
	locateBlock(wool, x - 6, y - 1, z - 20);
	locateBlock(wool, x - 5, y - 1, z - 21);
	locateBlock(wool, x - 4, y - 1, z - 22);
	locateBlock(wool, x - 4, y - 1, z - 23);
}
void screen(int x, int y, int z) {
	WoolID wool = createWool(COLOR_BLACK);
	int i, j;
	for (i = -28; i <= 23; i++) {
		for (j = 0; j <= 31; j++) {
			locateBlock(wool, x + i, y + j, z - 24);
		}
	}
}
void speaker(int x, int y, int z) {
	WoolID wool = createWool(COLOR_GRAY);
	WoolID wool1 = createWool(COLOR_BLACK);
	int i, j, k, s, t, u, v, w;
	for (i = 26; i <= 33; i++) {
		for (j = 17; j <= 31; j++) {
			locateBlock(wool, x + i, y + 22, z - j);
			locateBlock(wool, x + i, y - 1, z - j);
		}
	}
	for (k = -1; k <= 22; k++) {
		for (s = 26; s <= 33; s++) {
			locateBlock(wool, x + s, y + k, z - 17);
			locateBlock(wool, x + s, y + k, z - 31);
		}
	}
	for (t = 17; t <= 31; t++) {
		for (u = -1; u <= 22; u++) {
			locateBlock(wool, x + 26, y + u, z - t);
			locateBlock(wool, x + 33, y + u, z - t);
		}
	}
	for (v = 0; v < 2; v++) {
		for (w = 0; w < 4; w++) {
			locateBlock(wool1, x + 29 + v, y + 3 + w, z - 17);
			locateBlock(wool1, x + 28 + w, y + 4 + v, z - 17);
			locateBlock(wool1, x + 29 + v, y + 9 + w, z - 17);
			locateBlock(wool1, x + 28 + w, y + 10 + v, z - 17);
			locateBlock(wool1, x + 29 + v, y + 15 + w, z - 17);
			locateBlock(wool1, x + 28 + w, y + 16 + v, z - 17);
		}
	}
}
int main()
{
	int x, y, z;
	scanf_s("%d %d %d", &x, &y, &z);
	button1(x, y, z);
	button2(x, y, z);
	button3(x, y, z);
	button4(x, y, z);
	button5(x, y, z);
	joystick(x, y, z);
	floor(x, y, z);
	line(x, y, z);
	screen(x, y, z);
	speaker(x, y, z);
}

