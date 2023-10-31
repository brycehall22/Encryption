#include "input.h"

string getInputFile()
{
   string filename = "";
   bool valid = false;
   ifstream input;

   do
   {
      cout << "what is your input file name?  ";
      cin >> filename;

      if (filename == EXIT)
      {
         valid = true;
      }
      else
      {
         input.open(filename);

         if (!input.fail())
            valid = true;

         input.close();
      }
   } while (!valid);

  return filename; 
}