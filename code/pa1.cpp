/*
Author: Bryce Hall
Class : CSI 281 : Data Structures and Algorithms
Assignment : Programming Assignment #1
Date Assigned : 8/30/22
Due Date : 9/6/22 1:00PM

Description :
Create a program that can read encryptions

Certification of Authenticity :

I certify that this is entirely my own work, except where I have given
fully-documented references to the work of others. I understand the
definition and consequences of plagiarism and acknowledge that the assessor
of this assignment may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of
academic staff; and/or
- Communicate a copy of this assignment to a plagiarism checking
service (which may then retain a copy of this assignment on its
database for the purpose of future plagiarism checking)
*/
#include "pa1.h"
#include <fstream>
#include <iostream>

Encrypt::Encrypt() {
  ifstream fin;
   Pair     tmp;

   fin.open(CODEBOOK);
   fin >> tmp;
   while (!fin.eof())
   {
      avlTree.insert(tmp);
      fin >> tmp;
   }
   fin.close();
}

Encrypt::~Encrypt() {
    // Destructor logic if needed
}

void Encrypt::populateEncryption(string inputFile, string outputFile)
{
    Pair tmp;

    ifstream input;
    ofstream output;

    input.open(inputFile);
    output.open(outputFile);

    if (input.is_open())
    {
         input >> tmp.mWord;

         while (!input.eof())
         {
            tmp.mCode = "***";

            tmp = avlTree.getData(tmp);
            if (tmp.mCode == "***")
                output << tmp.mWord << " ";
            else
               output << tmp.mCode << " ";

            input >> tmp.mWord;
         }
    }
    input.close();
    output.close();
}
