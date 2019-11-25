#ifndef POINT_H
#define POINT_H

#include <ostream>

class point {
public:
  point(const point &pt) : _x(pt._x), _y(pt._y) {}
  point(int x, int y) : _x(x), _y(y) {}

  int x() const { return _x; }
  int y() const { return _y; }

  bool operator==(const point &other) const
  { return _x == other._x && _y == other._y; }
  bool operator!=(const point &other) const
  { return !operator==(other); }

  point operator+(const point &other) const
  { return point(_x + other._x, _y + other._y); }
  point operator-(const point &other) const
  { return point(_x - other._x, _y - other._y); }

  point &operator+=(const point &other)
  { _x += other._x; _y += other._y; return *this; }
  point &operator-=(const point &other)
  { _x -= other._x; _y -= other._y; return *this; }

private:
  int _x;
  int _y;

  friend std::ostream &operator<<(std::ostream &, const point &);
};

#endif // POINT_H
