#ifndef PAIR_H
#define PAIR_H

#include <iostream>
#include <string>

using namespace std;

struct Pair
{
   string mWord;
   string mCode;
};

istream& operator>>(istream &input, Pair&obj);

bool operator==(Pair compare, string word);
bool operator==(string word, Pair compare);
bool operator==(Pair lhs, Pair rhs);
bool operator>(Pair lhs, Pair rhs);
bool operator<(Pair lhs, Pair rhs);



#endif