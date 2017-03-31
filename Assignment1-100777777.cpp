//*********************************************
// Student Name: Where When
// Student Number: 100777777
//
// ENGR 1200U - Assignment: 01
//
// Filename: Assignment1-100777777.cpp
// Date submitted: 31/03/2017
//
// I hereby declare that this code, submitted
// for credit for the course ENGR 1200U, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// has not been knowingly plagiarized by others.
//
// Signed,
//
//
//*********************************************
#include <iostream>
#include <string>

using namespace std;

template <typename ReplacementFor_U>
inline ReplacementFor_U const& ReplacementFor_Maximum (ReplacementFor_U const& ReplacementFor_c, ReplacementFor_U const& ReplacementFor_d)  { if (ReplacementFor_c < ReplacementFor_d){	return ReplacementFor_d; }
else{ return ReplacementFor_c; } }

int main () { 
   int ReplacementFor_k = 39;
   int ReplacementFor_l = 20;
   cout << "Maximum(k, l): " << ReplacementFor_Maximum(ReplacementFor_k, ReplacementFor_l) << endl; 
   double ReplacementFor_g1 = 13.5; 
   double ReplacementFor_g2 = 20.7; 
   cout << "Maximum(g1, g2): " << ReplacementFor_Maximum(ReplacementFor_g1, ReplacementFor_g2) << endl; 
   string ReplacementFor_t1 = "Hello"; 
   string ReplacementFor_t2 = "World"; 
   cout << "Maximum(t1, t2): " << ReplacementFor_Maximum(ReplacementFor_t1, ReplacementFor_t2) << endl; 
   return 0; }

