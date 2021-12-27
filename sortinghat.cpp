/*
The Hogwarts School of Witchcraft and Wizardry welcomes you. 
First-year students must go through the annual Sorting Ceremony.

The Sorting Hat is a talking hat at Hogwarts that magically determines 
which of the four school Houses each new student belongs most to:
- gryffindor
- hufflepuff
- ravenclaw
- slytherin

This program asks the user some questions and places them into one of the four Houses based on their answers.
*/

#include <iostream>

int main() {

  // Declare variables to hold points for one or more Houses
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  // Declare another four variables to store each of student's answers to the four quiz questions
  int answer1 = 0;
  int answer2 = 0;
  int answer3 = 0;
  int answer4 = 0;

  // Add a statement that tells the student that they have started the quiz
  std::cout << "=====================\n";
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "=====================\n\n";

  // Question 1

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
 
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";

  std::cout << "Please enter your answer (1-4): ";
  std::cin >> answer1;

  // Write control flow
  if (answer1 == 1) {
 
  hufflepuff++;
 
  }
  else if (answer1 == 2) {
 
    slytherin++;
 
  }
  else if (answer1 == 3) {
 
    ravenclaw++;
 
  }
  else if (answer1 == 4) {
 
    gryffindor++;
 
  }
  else {
 
    std::cout << "Invalid input\n";
 
  }

  // Question 2
  std::cout << "\nQ2) Dawn or Dusk?\n\n";

  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n\n";

  std::cout << "Enter your answer (1-2): ";
  std::cin >> answer2;

  // Write control flow
  if (answer2 == 1)
  {

    gryffindor++;
    ravenclaw++;

  }
  else if (answer2 == 2)
  {

    hufflepuff++;
    slytherin++;

  }
  else
  {

    std::cout << "Invalid input\n";

  }

  // Question 3
  std::cout << "\nQ3) Which kind of instrument most pleases your ear?\n\n";

  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";

  std::cout << "Enter your answer (1-4): ";
  std::cin >> answer3;

  // Write control flow
  if (answer3 == 1)
    slytherin++;
  else if (answer3 == 2)
    hufflepuff++;
  else if (answer3 == 3)
    ravenclaw++;
  else if (answer3 == 4)
    gryffindor++;
  
  // Question 4
  std::cout << "\nQ4) Which road tempts you the most?\n\n";

  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";

  std::cout << "Enter your answer (1-4): ";
  std::cin >> answer4;

  // Write control flow
  if (answer4 == 1)
    hufflepuff++;
  else if (answer4 == 2)
    slytherin++;
  else if (answer4 == 3)
    gryffindor++;
  else if (answer4 == 4)
    ravenclaw++;

  // The answer
  std::cout << "\nAh, right then...hmm...right. But where to put you? Okay... ";

  int max = 0;
  std::string house;

  if (gryffindor > max)
  {

    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max)
  {

    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max)
  {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max)
  {

    max = slytherin;
    house = "Slytherin";

  }

  std::cout << house << "!\n";

  return 0;

}
