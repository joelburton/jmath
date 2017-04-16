/** \file */

#include "math.h"

/** Main function */

int main(int argc, char *argv[]) {
	int x = 20;
	int y = 10;
	char op = argv[1][0];

	switch (op) {
		case '+':
			return add(x, y);
		case '-':
			return sub(x, y);
		default:
			return -1;
	}
}

