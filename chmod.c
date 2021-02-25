#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv){
    const char * filefn = argv[1];
    chmod(filefn, S_IRUSR | S_IWUSR);
    return 0;
}