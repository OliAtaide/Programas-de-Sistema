#include <unistd.h>

int main(int argc, char **argv){
    const char * newfn = argv[1];
    int rm = rmdir(newfn);
    if(rm != 0){
        return 0;
    }
    return 1;
}
