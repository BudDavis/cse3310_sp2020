#include <iostream>

#include "cards.hpp"

cards::cards ()
{
  for (auto i=0;i<CARDS_IN_DECK;i++)
  {
      // not a very usefull deck of cards
      deck.push_back('Q'); 
  }
}

cards::~cards ()
{
}
