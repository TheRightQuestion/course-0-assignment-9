#include <iostream>
#include <string>
using namespace std;

bool IsMagicNumber(unsigned int input) {
  int i = 2;
  while (i < input) {
    if (input % i == 0) {
      return false;
    }
    i++
  }
  return true;
}


int main() {
  bool magic_number = true;
  int streak = 0;
  while (magic_number) {
    unsigned int input;
    cout << "Enter a positive integer: ";
    cin >> input;

    magic_number = IsMagicNumber(input);
    if (magic_number) {
      cout << "Yes! " << input << " is a magic number!" << endl;
      streak++;
    } else {
      cout << "Aww! " << input << " is not a magic number!" << endl;
    }
  }

  cout << "Your streak is: " << streak << endl;
  if (streak == 0) {
    cout << "Hmm, you could use some practice at guessing magic numbers!" << endl;
  } else if (streak < 3) {
    cout << "Not bad for a beginner!" << endl;
  } else if (streak < 7) {
    cout << "Have you considered you might be a genius!" << endl;
  } else if (streak < 10) {
    cout << "This should be impossible!" << endl;
  } else {
    cout << "Do this many numbers even exist? You must be cheating!" << endl;
  }

  return 0;
}
