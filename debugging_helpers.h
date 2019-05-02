#ifndef DEBUGGING_HELPERS_H
#define DEBUGGING_HELPERS_H

#include <vector>
#include <iostream>

template<typename T>
void show_grid_t(const std::vector < std::vector <T> > &map) {
    for (auto& row : map) {
      for (auto& value : row) {
        std::cout << value << ' ';
      }
      std::cout << std::endl;
    }
}

#endif /* DEBUGGING_HELPERS_H */
