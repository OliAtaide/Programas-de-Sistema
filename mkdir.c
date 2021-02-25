#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main(int argc, char **argv){
    const char * newfn = argv[1];
    mkdir(newfn, S_IRUSR | S_IWUSR);
    return 0;
}