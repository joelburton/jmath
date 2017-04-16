#include <glib.h>
#include "math.h"

typedef struct {
	int x;
	int y;
} fixture;

void test_add(fixture *f, gconstpointer ignored) {
	g_assert(add(10, 20) == 30);
}

void test_sub(fixture *f, gconstpointer ignored) {
	g_assert(sub(20, 10) == 10);
}

int main(int argc, char *argv[]) {
	g_test_init(&argc, &argv, NULL);
	g_test_add("/set1/add test", fixture, NULL, NULL, test_add, NULL);
	g_test_add("/set1/sub test", fixture, NULL, NULL, test_sub, NULL);
	return g_test_run();
}
