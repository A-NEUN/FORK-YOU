#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
#ifdef __linux__
#include "unistd.h"
#endif
#ifdef _WIN32
#include <process.h>
#endif

int main() {
    while(1) {
#ifdef __linux__
        fork();
#endif
#ifdef _WIN32
        system("start /min cmd");
#endif
    }
}

#pragma clang diagnostic pop