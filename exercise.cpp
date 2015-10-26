#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <algorithm>
#include <list>

using namespace std;

//------------------------------------------------------------------------------
// Exercises: fill in the function definitions
//------------------------------------------------------------------------------

/**
 * prints each word in the vector
 */
void printWords(vector<string> & words) {
  for (const string & word : words) {
    cout << word << " ";
  }

  cout << endl;
}

/**
 * sorts a vector of words by characters' values
 */
void sortWordsByCharacterValues(vector<string> & words) {
  sort(words.begin(), words.end());
}

/**
 * sorts a vector of words in increasing order, by word-length
 *
 * \remarks The sort should be stable, i.e., if words W1 and W2 have the
 *    same length AND if W1 appears before W2 in the input, then W1 should
 *    appear before W2 in the output.
 */
void sortWordsByIncreasingLength(vector<string> & words) {
  throw logic_error("Not yet implemented");
}

/**
 * Adds the given character to the end of every word
 */
void appendCharacter(vector<string> & words, const char c) {
  throw logic_error("Not yet implemented");
}

/**
 * Adds an exclamation point to the end of every word
 */
void addExclamationMark(vector<string>& words) {
  throw logic_error("Not yet implemented");
}

/**
 * Given a vector of words, returns a new vector words' that contains all
 * the strings from word whose size is strictly greater than minSize
 */
vector<string> findWordsBiggerThan(const vector<string>& words,
                                   const size_t minSize) {
  throw logic_error("Not yet implemented");
}

/**
 * Given a vector of words, returns a new vector words' that contains all
 * the strings from the input vector, where the input lowercase character
 * has been replaced by the corresponding capital character.
 */
void capitalizeAllOfCharacter(vector<string>& words,
                              const char c) {
  throw logic_error("Not yet implemented");
}

/**
 * Given a list of ints, returns the values of the minimum int in the list
 */
int findMinimum(const list<int> & values) {
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

const vector<string> WORDS_WITH_CAPITAL_S{"cS", "70", "iS", "the", "beSt", "and",
                                          "So", "iS", "c++"};

// Test functions

void testSortByCharacterValues() {
  vector<string> words{TEST_WORDS};
  sortWordsByCharacterValues(words);
  assert(SORTED_WORDS == words);
}

void testSortByIncreasingLength() {
  vector<string> words{TEST_WORDS};
  sortWordsByIncreasingLength(words);
  assert(SORTED_WORDS_LENGTHS == words);
}

void testAddExclamationMark() {
  vector<string> words{TEST_WORDS};
  addExclamationMark(words);
  assert(EXCLAIMED_WORDS == words);
}

void testAppendCharacter() {
  vector<string> words{TEST_WORDS};
  appendCharacter(words, '!');
  assert(EXCLAIMED_WORDS == words);
}

void testFindWordsBiggerThan() {
  // test for words whose size is larger than 0
  vector<string> allWords = findWordsBiggerThan(TEST_WORDS, 0);
  assert(TEST_WORDS == allWords);

  // test for words whose is larger than 3
  vector<string> bigWords = findWordsBiggerThan(TEST_WORDS, 3);
  assert(WORDS_OF_LENGTH_4 == bigWords);
}

void testCapitalizeAllOfCharacter() {
  vector<string> words{TEST_WORDS};
  capitalizeAllOfCharacter(words, 's');
  assert(WORDS_WITH_CAPITAL_S == words);
}

void testFindMinimum() {
  list<int> values = {-1, 2, 8, -9, 5, -3, 4, 9, -2};
  const int minimum = findMinimum(values);
  assert(minimum == -9);
}

//------------------------------------------------------------------------------
// Main program (runs all the tests)
//------------------------------------------------------------------------------

int main() {
  testSortByCharacterValues();
  testSortByIncreasingLength();
  testAddExclamationMark();
  testAppendCharacter();
  testFindWordsBiggerThan();
  testCapitalizeAllOfCharacter();

  testFindMinimum();

  return 0;
}
