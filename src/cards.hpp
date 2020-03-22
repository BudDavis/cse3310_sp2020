#pragma once

#include <vector>

static auto const CARDS_IN_DECK = 52;


class cards
{
  public:
   std::vector<char> deck; // char is probably not what you want, but it
                           // does make a simple example

   cards  ();
   ~cards ();
};
