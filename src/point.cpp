#include "point.h"

std::ostream &operator<<(std::ostream &os, const point &pt) {
  os << "point(" << pt._x << "," << pt._y << ")";
  return os;
}
