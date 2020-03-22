


#include <map>


#include "cards.hpp"

#define BOOST_TEST_MODULE cardtest
#include <boost/test/included/unit_test.hpp>
 
BOOST_AUTO_TEST_SUITE (cards_tests)

/* make the tests worthwhile.  they take time to put them
 * together, so make sure they actually test the code.
 *
 * look in the book in the testing chapter
 * 
 *         "Input Domain Partitioning"
 *
 * take this part seriously, and it will pay off during
 * the project
*/


/* in general, these tests should test that the code works
 * as designed.  so, there is not a relationship between unit
 * tests and requirements.
*/
 
BOOST_AUTO_TEST_CASE (number_of_cards_in_deck)
{
   cards  D;    // makes a deck
   BOOST_CHECK ( D.deck.size () == CARDS_IN_DECK );
}
 
BOOST_AUTO_TEST_CASE (legal_deck)
{
    // want to make sure that there is only 1 card of
    // each type
    std::map<char,char> M;
    cards D;
    // count how many of each value
    for (auto i:D.deck)
    {
        M[i]++;
    }
    BOOST_CHECK_EQUAL( M.size(), CARDS_IN_DECK );
}
 
BOOST_AUTO_TEST_SUITE_END( )
