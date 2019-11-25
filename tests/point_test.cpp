#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#include "point.h"
#include <boost/test/unit_test.hpp>
#include <boost/test/output_test_stream.hpp>

BOOST_AUTO_TEST_CASE(point_accessor_test) {
  point pt(2, 3);
  BOOST_CHECK_EQUAL(pt.x(), 2);
  BOOST_CHECK_EQUAL(pt.y(), 3);
}

BOOST_AUTO_TEST_CASE(point_operator_test) {
  point pt(2, 3);
  BOOST_CHECK_EQUAL(pt + point(3, 4), point(5, 7));
  BOOST_CHECK_EQUAL(pt - point(3, 4), point(-1, -1));
}

BOOST_AUTO_TEST_CASE(point_ostream_test) {
  boost::test_tools::output_test_stream output;
  output << point(3, 2);
  BOOST_CHECK(output.is_equal("point(3,2)"));
}

