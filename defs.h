#ifndef DEFS_H
#define DEFS_H
#define WIDTH 80
#define HEIGHT 40
#define PRINT(foo) std::cout << foo << std::endl
#define DEBUGP(foo) PRINT("At coordinates (" + std::to_string(row) + ", " + std::to_string(col) + ") Value is: " + std::to_string(foo))
#endif
