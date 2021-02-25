#include <unistd.h>
#include <stdio.h>
#include <sys/sysinfo.h>
#include <time.h>

int main(){
    struct sysinfo t;
    sysinfo(&t);
    long int h, m, s;
    s = t.uptime;
    h = s/3600;
    s = s%3600;
    m = s/60;
    s = s%60;
    printf("%ld:%ld:%ld\n", h, m, s);
    return 0;
}