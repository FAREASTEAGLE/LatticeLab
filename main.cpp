#include "App/Application.h"

namespace {
int RunApplication() {
    Application application;
    return application.run();
}
}  // namespace

int main() {
    return RunApplication();
}

#if defined(_WIN32)
int __stdcall WinMain(void*, void*, char*, int) {
    return RunApplication();
}
#endif
