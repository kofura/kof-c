#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "../kof_map.h"

int main(const int argc, char* argv[]) {
    assert(argc > 1);

    if (strcmp(argv[1], "map") == 0) {
        printf("Running tests for kof_map.h...\n");
    } else {
        printf("Invalid test requested: %s\n", argv[1]);
        return 1;
    }
    return 0;
}