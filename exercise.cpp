#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <stdexcept>

using namespace std;

//------------------------------------------------------------------------------
// Exercises: fill in the function definitions
//------------------------------------------------------------------------------

/**
 * sorts a vector of words by characters' values
 */
void sortWords(vector<string>& words)
{
  throw logic_error("Not yet implemented");
}

/**
 * sorts a vector of words in increasing order, by word-length
 *
 * \remarks The sort should be stable, i.e., if words W1 and W2 have the 
 *    same length AND if W1 appears before W2 in the input, then W1 should
 *    appear before W2 in the output.
 */
void sortWordsByIncreasingLength(vector<string>& words)
{
  throw logic_error("Not yet implemented");
}

/**
 * Adds an exclamation point to the end of every word
 */
void exclaim(vector<string>& words)
{
  throw logic_error("Not yet implemented");
}

/**
 * Adds the given character to the end of every word
 */
void appendChar(vector<string>& words, char c)
{
  throw logic_error("Not yet implemented");
}

/**
 * Given a vector of words, returns a new vector words' that contains all
 * the strings from word whose size is strictly greater than minSize
 */
vector<string> wordsBiggerThan(const vector<string>& words, size_t minSize)
{
  throw logic_error("Not yet implemented");
}

//------------------------------------------------------------------------------
// Tests
//------------------------------------------------------------------------------

// Test values
const vector<string> TEST_WORDS{"cs", "70", "is", "the", "best", "and", 
                                "so", "is", "c++"};

const vector<string> SORTED_WORDS{"70", "and", "best", "c++", "cs", "is", "is", 
                                  "so", "the"};

const vector<string> SORTED_WORDS_LENGTHS{"cs", "70", "is", "so", "is", 
                                          "the", "and", "c++", "best"};                                  

const vector<string> EXCLAIMED_WORDS{"cs!", "70!", "is!", "the!", "best!", 
                                     "and!", "so!", "is!", "c++!"};

const vector<string> WORDS_OF_LENGTH_4{"best"};                                  

// Test functions

void testSort()
{
  vector<string> words{TEST_WORDS};
  sortWords(words);
  assert(SORTED_WORDS == words);
}

void testSortByIncreasingLength()
{
  vector<string> words{TEST_WORDS};
  sortWordsByIncreasingLength(words);
  assert(SORTED_WORDS_LENGTHS == words);
}

void testExclaim()
{
  vector<string> words{TEST_WORDS};
  exclaim(words);
  assert(EXCLAIMED_WORDS == words);
}

void testAppend()
{
  vector<string> words{TEST_WORDS};
  appendChar(words, '!');
  assert(EXCLAIMED_WORDS == words);
}

void testWordsBiggerThan()
{
  // test for words whose size is larger than 0
  vector<string> allWords = wordsBiggerThan(TEST_WORDS, 0);
  assert(TEST_WORDS == allWords);

  // test for words whose is larger than 3
  vector<string> bigWords = wordsBiggerThan(TEST_WORDS, 3);
  assert(WORDS_OF_LENGTH_4 == bigWords);
}

//------------------------------------------------------------------------------
// Main program (runs all the tests)
//------------------------------------------------------------------------------

int main()
{
  testSort();
  testSortByIncreasingLength();
  testExclaim();
  testAppend();
  testWordsBiggerThan();

  return 0;
}