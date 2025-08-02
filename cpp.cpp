// #include <chrono>
#include <cstddef>
#include <iostream>
#include <ostream>

void guessing();

int main() {
  using namespace std;
  string name;
  string password;

  cout << "#***** ****** MohamAPP **** *****#" << endl;
  cout << "Enter your name: " << endl;
  cin >> name;
  do {
    cout << "And your password: " << endl;
    cin >> password;
  } while (password.length() < 8);
  guessing();

  cout << "#***** ****** MohamAPP **** *****#" << endl;
}

void guessing() {
  using namespace std;
  int num;
  int guess;
  int tries = 0;

  srand(time(NULL));
  num = (rand() % 100) + 1;
  cout << "#***** NUMBER GUESSING GAME *****#" << endl;
  do {
    cout << "Enter Your number (1-100) :" << endl;
    cin >> guess;
    tries++;
    if (guess > num) {
      cout << "To high" << endl;
    } else if (guess < num) {
      cout << "To low" << endl;

    } else if (guess == num) {
      cout << "### YOU DID IT!!! ###" << endl;
      cout << "###WITH " << tries << " TRIES###" << endl;
      // this_thread::sleep_for(chrono::seconds(2));
    } else {
      cout << "pls Enter real number between (1-100)" << endl;
    }

  } while (guess != num);
  cout << "Game Is Just Ended" << endl;
  cout << endl << "#***** NUMBER GUESSING GAME *****#" << endl;
}
