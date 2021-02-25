#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    const char * sourcefn = argv[1];
    const char * targetfn = argv[2];
    int source = open(sourcefn, O_RDONLY);
    int target = open(targetfn, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    char buf[1024];
    int s, t;
    while((s=read(source, buf, 1024))!=0){
        t=write(target, buf, s);
        if (t != s)
            exit(1);
    }
    close(target);
    close(source);
    return 0;
}
