#include "types.h"
#include "user.h"

int
main(int argc, char *argv[]) {
    int readcount = getreadcount();
    printf(1, "readcount -> %d\n", readcount);
    exit();
}