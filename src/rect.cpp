#include "rect.h"

std::ostream &operator<<(std::ostream &os, const rect &rc) {
  os << "rect(" << rc._x << "," << rc._y << " "
                << rc._w << "x" << rc._h << ")";
  return os;
}

