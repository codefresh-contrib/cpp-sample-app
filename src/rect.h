#ifndef RECT_H
#define RECT_H

#include "point.h"
#include "size.h"
#include <ostream>

class rect {
public:
  rect(int x, int y, int w, int h) : _x(x), _y(y), _w(w), _h(h) {}
  rect(const point &pt, const size a)
    : _x(pt.x()), _y(pt.y()), _w(a.width()), _h(a.height()) {}

  int x() const { return _x; }
  int y() const { return _y; }
  int width() const { return _w; }
  int height() const { return _h; }

  bool contains(int x, int y) const
  { return _x <= x && x < (_w + _x) && _y <= y && y < (_h + _y); }

  bool contains(const point &pt) const
  { return contains(pt.x(), pt.y()); }

  bool operator==(const rect &o) const
  { return _x == o._x && _y == o._y && _w == o._w && _h == o._h; }

  bool operator!=(const rect &o) const
  { return !operator==(o); }

private:
  int _x, _y, _w, _h;

  friend std::ostream &operator<<(std::ostream &, const rect &);
};

#endif // RECT_H
