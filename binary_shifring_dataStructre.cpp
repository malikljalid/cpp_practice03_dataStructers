#include <iostream>

enum Permission {
    READ    = 1 << 2,  // 100
    WRITE   = 1 << 1,  // 010
    EXECUTE = 1 << 0   // 001
};

int main() {
    int perms = READ | WRITE; // RW-

    // Check permissions
    if (perms & READ)
        std::cout << "Read allowed\n";

    if (perms & WRITE)
        std::cout << "Write allowed\n";

    if (!(perms & EXECUTE))
        std::cout << "Execute NOT allowed\n";

    return 0;
}

