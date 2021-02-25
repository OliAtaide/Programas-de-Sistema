#include <unistd.h>

int main(int argc, char **argv) {
    const char * fn = argv[1];
    int bye = remove(fn);
    close(bye);
    return 0;
}
