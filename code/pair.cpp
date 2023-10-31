#include "pair.h"

istream& operator>>(istream& input, Pair& obj)
{
   input >> obj.mWord >> obj.mCode;

   return input;
}


bool operator == (Pair compare, string word)
{
   return compare.mWord == word;
}


bool operator == (string word, Pair compare)
{
   return compare.mWord == word;
}


bool operator == (Pair lhs, Pair rhs)
{
   return lhs.mWord == rhs.mWord;
}


bool operator>(Pair lhs, Pair rhs)
{
   return lhs.mWord > rhs.mWord;
}


bool operator<(Pair lhs, Pair rhs)
{
   return lhs.mWord < rhs.mWord;
}