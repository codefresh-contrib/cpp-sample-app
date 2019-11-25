#ifndef SIZE_H
#define SIZE_H

#include <ostream>

class size {
public:
  size(const size &sz) : _w(sz._w), _h(sz._h) {}
  size(int w, int h) : _w(w), _h(h) {}

  int width() const { return _w; }
  int height() const { return _h; }

  int area() const { return _w * _h; }

  bool operator==(const size &other) const
  { return _w == other._w && _h == other._h; }

  bool operator!=(const size &other) const
  { return !operator==(other); }

private:
  int _w, _h;

  friend std::ostream &operator<<(std::ostream &, const size &);
};

#endif // SIZE_H
