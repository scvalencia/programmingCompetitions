/* This solution simply changes the string s into ss, then for every starting
// symbol it checks if it can make a sequence simply by repeatedly checking 
// if a sequence can be found that is longer than the current maximum one.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream input, output;
  string inputFilename = "beads.in", outputFilename = "beads.out";  
  input.open(inputFilename.c_str(), ios::in);
  output.open(outputFilename.c_str(), ios::out);
  
  int n, max=0, current, state, i, j;
  string s;
  char c;
  
  input >> n >> s;
  s = s+s;
  for(i=0; i<n; i++) {
    c = (char) s[i];
    if(c == 'w')
      state = 0;
    else
      state = 1;
    j = i;
    current = 0;
    while(state <= 2) { 
      // dont go further in second string than starting position in first string
      while(j<n+i && (s[j] == c || s[j] == 'w')) { 
        current++;
        j++;
      } // while
      state++;
      c = s[j];
    } // while
    if(current > max)
      max = current;
  } // for
    
  output << max << endl;
  return 0;
} // main
