#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
  string ranInput;
  cout << "Enter some text, separated by SPACES: ";
  getline(cin, ranInput);

  stringstream delim(ranInput);
  string token;
  vector<string> tokens;
  while (getline(delim, token, ' ')) {
    try {
      int num = stoi(token);
      throw runtime_error("Cannot use integer/float as input: " + token);
    } catch (const invalid_argument& ex) {
    tokens.push_back(token);
  }
}

  srand(time(NULL));

  int randomIndex = rand() % tokens.size();

  cout << "The randomly selected text is: " << tokens[randomIndex] << endl;

  return 0;
}