#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#include "rect.h"
#include <boost/test/unit_test.hpp>
#include <boost/test/output_test_stream.hpp>

BOOST_AUTO_TEST_CASE(rect_accessor_test) {
  rect rc(2, 3, 5, 7);
  BOOST_CHECK_EQUAL(rc.x(), 2);
  BOOST_CHECK_EQUAL(rc.y(), 3);
  BOOST_CHECK_EQUAL(rc.width(), 5);
  BOOST_CHECK_EQUAL(rc.height(), 7);
}

BOOST_AUTO_TEST_CASE(rect_contains_test) {
  rect rc(2, 3, 5, 7);
  BOOST_CHECK(rc.contains(2,3));
  BOOST_CHECK(rc.contains(6,9));
  BOOST_CHECK(!rc.contains(1,3));
  BOOST_CHECK(!rc.contains(6,10));
}

BOOST_AUTO_TEST_CASE(rect_ostream_test) {
  boost::test_tools::output_test_stream output;
  output << rect(2, 3, 5, 7);
  BOOST_CHECK(output.is_equal("rect(2,3 5x7)"));
}

