#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

int main(){
    char r[1024];
    struct timeval tv;
    struct timezone tz;
    gettimeofday(&tv, &tz);
    time_t n = tv.tv_sec;
    strftime(r, 1024, "%d/%m/%Y %H:%M:%S", localtime(&n));
    printf("%s\n", r);
    return 0;
}
