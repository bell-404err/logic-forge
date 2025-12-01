#include <iostream>
#include "two-sum.h"
#include "missing-number.h"

using std::cout;
using std::vector;


void printVector(const vector<int>& vec) {
  cout << "[ ";
  for (size_t i = 0; i < vec.size(); ++i) {
    cout << vec[i];
    if (i + 1 < vec.size()) cout << ", ";
  }
  cout << " ]\n";
}


int main() {

  // Two-sum: return indexes of two elements that equal to target ------------------------------------------------------
  // const vector<int> firstCase = { 2, 7, 11, 15 }; // target: 9
  // const vector<int> secondCase = { 3, 2, 4 }; // target: 6
  // const vector<int> thirdCase = { 3, 3 }; // target: 6
  //
  // const vector<int> resultFirstTarget = twoSum(firstCase, 9);
  // const vector<int> resultSecondTarget = twoSum(secondCase, 6);
  // const vector<int> resultThirdTarget = twoSum(thirdCase, 6);
  //
  // if (!resultFirstTarget.empty()) {
  //   cout << "Output must be: [0, 1]\n";
  //   printVector(resultFirstTarget);
  // }
  //
  // if (!resultSecondTarget.empty()) {
  //   cout << "Output must be: [1, 2]\n";
  //   printVector(resultSecondTarget);
  // }
  //
  // if (!resultThirdTarget.empty()) {
  //   cout << "Output must be: [0, 1]\n";
  //   printVector(resultThirdTarget);
  // }
  // 01.12.2025 --------------------------------------------------------------------------------------------------------
  // -------------------------------------------------------------------------------------------------------------------

  // Missing number ----------------------------------------------------------------------------------------------------
  const vector<int> firstCase = { 3, 0, 1 };
  const vector<int> secondCase = { 0, 1 };
  const vector<int> thirdCase = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };
  missingNumber(firstCase);
  missingNumber(secondCase);
  missingNumber(thirdCase);
  // 01.12.2025 --------------------------------------------------------------------------------------------------------
  //--------------------------------------------------------------------------------------------------------------------
  return 0;
}

// #include <SFML/Graphics.hpp>
// sf::RenderWindow window(sf::VideoMode(800, 600), "Logic Forge");
// while (window.isOpen()) {
//   sf::Event event;
//   while (window.pollEvent(event)) {
//     if (event.type == sf::Event::Closed)
//       window.close();
//   }
//   window.clear(sf::Color(20, 20, 30));
//   window.display();
// }
