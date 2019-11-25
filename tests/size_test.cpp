#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#include "size.h"
#include <boost/test/unit_test.hpp>
#include <boost/test/output_test_stream.hpp>

BOOST_AUTO_TEST_CASE(size_accessor_test) {
  size pt(2, 3);
  BOOST_CHECK_EQUAL(pt.width(), 2);
  BOOST_CHECK_EQUAL(pt.height(), 3);
}

BOOST_AUTO_TEST_CASE(size_ostream_test) {
  boost::test_tools::output_test_stream output;
  output << size(3, 2);
  BOOST_CHECK(output.is_equal("size(3x2)"));
}
