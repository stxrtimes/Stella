#include <core/logger.h>
#include <core/asserts.h>

int main()
{
    SFATAL("A test message: %f", 3.14159f);
    SERROR("A test message: %f", 3.14159f);
    SWARN("A test message: %f", 3.14159f);
    SINFO("A test message: %f", 3.14159f);
    SDEBUG("A test message: %f", 3.14159f);
    STRACE("A test message: %f", 3.14159f);

    SASSERT(1 == 0);

    return 0;
}