#include <conio.h> // for _getch()
#include <iostream>

int main() {
  char ch;
  std::cout << "Press arrow keys or WASD (press q to quit)\n";

  while (true) {
    ch = _getch(); // get a key press

    if (ch == 'q')
      break; // quit

    // Arrow keys return a two-character sequence
    if (ch == 0 || ch == -32) { // special key prefix
      ch = _getch();            // get actual key code
      std::cout << (int)ch << "\n";
      switch (ch) {
      case 3:
        std::cout << "Ctrl + C\n";
        break;
      case 72:
        std::cout << "Up arrow\n";
        break;
      case 80:
        std::cout << "Down arrow\n";
        break;
      case 75:
        std::cout << "Left arrow\n";
        break;
      case 77:
        std::cout << "Right arrow\n";
        break;
      }
    } else {

      std::cout << (int)ch << "\n";
      switch (ch) {
      case 'w':
      case 'W':
        std::cout << "W pressed (up)\n";
        break;
      case 's':
      case 'S':
        std::cout << "S pressed (down)\n";
        break;
      case 'a':
      case 'A':
        std::cout << "A pressed (left)\n";
        break;
      case 'd':
      case 'D':
        std::cout << "D pressed (right)\n";
        break;
      default:

        std::cout << ch << " pressed\n";

        break;
      }
    }
  }

  return 0;
}
