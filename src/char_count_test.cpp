


#include <map>


#include "char_count.h"

#define BOOST_TEST_MODULE char_count
#include <boost/test/included/unit_test.hpp>
 
BOOST_AUTO_TEST_SUITE (char_count_function)

BOOST_AUTO_TEST_CASE (easy)
{
   
   int result = char_count((char*) "ae", (char*) "bear");
   std::cout << "the result is " << result << std::endl;
   BOOST_CHECK ( result==2 );

}
 
BOOST_AUTO_TEST_SUITE_END( )
