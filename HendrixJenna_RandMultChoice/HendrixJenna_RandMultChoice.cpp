// HendrixJenna_RandMultChoice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include <string>

bool ValidateAnswer(char answer, int questionInt);
int main()
{
	bool goAgain = true;
	std::cout << "Question" << std::endl;
	
	//vector to hold the questions
	std::vector<std::string> questions;

	//vector to hold the vector of answers for all the questions
	std::vector<std::vector<std::string>> answers;

	//create a string for each of the questions that should be randomly asked. 
	std::string question1 = "Who is the musician that played \"Star-Spangled Banner\" at Woodstock '69?";
	questions.push_back(question1);

	std::string question2 = "What animal is not in the game Minecraft?";
	questions.push_back(question2);

	std::string question3 = "What is my favorite color?";
	questions.push_back(question3);

	std::string question4 = "What is the national MAMMAL of the United States?";
	questions.push_back(question4);

	std::string question5 = "What series is not an HBO original?";
	questions.push_back(question5);

	//create a vector for the answers to each of the questions.
	std::vector<std::string> question1Answers;
	question1Answers.push_back("A. David Gilmour");
	question1Answers.push_back("B. Jimi Hendrix");
	question1Answers.push_back("C. Synyster Gates");
	question1Answers.push_back("D. Eddie Van Halen");

	answers.push_back(question1Answers);

	std::vector<std::string> question2Answers;
	question2Answers.push_back("A. Sheep");
	question2Answers.push_back("B. Panda");
	question2Answers.push_back("C. Snake");
	question2Answers.push_back("D. Chicken");

	answers.push_back(question2Answers);

	std::vector<std::string> question3Answers;
	question3Answers.push_back("A. Red");
	question3Answers.push_back("B. Black");
	question3Answers.push_back("C. Green");
	question3Answers.push_back("D. Purple");

	answers.push_back(question3Answers);

	std::vector<std::string> question4Answers;
	question4Answers.push_back("A. Bald Eagle");
	question4Answers.push_back("B. Grizzly Bear");
	question4Answers.push_back("C. Lion");
	question4Answers.push_back("D. American Bison");

	answers.push_back(question4Answers);

	std::vector<std::string> question5Answers;
	question5Answers.push_back("A. Stranger Things");
	question5Answers.push_back("B. VEEP");
	question5Answers.push_back("C. Game of Thrones");
	question5Answers.push_back("D. Big Little Lies");

	answers.push_back(question5Answers);

	//Display random question, ask for answer, tell user if they are correct.
	while (goAgain) {
		srand(time(0));
		int randInt;
		randInt = rand() % 5;
		std::cout << questions[randInt] << std::endl;

		for (int i = 0; i < answers[randInt].size(); i++) {
			std::cout << answers[randInt][i] << std::endl;
		}

		std::cout << "\nEnter your answer here: ";
		char userAnswer;
		std::cin >> userAnswer;

		goAgain = ValidateAnswer(userAnswer, randInt);
	}
	
}

bool ValidateAnswer(char answer, int questionInt) {

	answer = toupper(answer);
	
	switch (questionInt) {
	case 0:
		//question 1
		if (answer == 'B') {
			//user was correct
			std::cout << "\nGreat Job!";

		}
		else {
			//incorrect answer
			std::cout << "\nThat's incorrect.";

		}
		break;
	case 1:
		//question 2
		if (answer == 'C') {
			//user was correct
			std::cout << "\nGreat Job!";

		}
		else {
			//incorrect answer
			std::cout << "\nThat's incorrect.";

		}
		break;
	case 2:
		//question 3
		if (answer == 'D') {
			//user was correct
			std::cout << "\nGreat Job!";

		}
		else {
			//incorrect answer
			std::cout << "\nThat's incorrect.";

		}		
		break;
	case 3:
		//question 4
		if (answer == 'D') {
			//user was correct
			std::cout << "\nGreat Job!";

		}
		else {
			//incorrect answer
			std::cout << "\nThat's incorrect.";

		}
		break;
	case 4: 
		//question 5
		if (answer == 'A') {
			//user was correct
			std::cout << "\nGreat Job!";

		}
		else {
			//incorrect answer
			std::cout << "\nThat's incorrect.";

		}
		break;
	}

	std::cout << "Would you like to answer another question? Y/N: ";
	char again;
	std::cin >> again;
	again = toupper(again);
	if (again == 'Y') {
		system("cls");
		return true;
	}
	else if (again == 'N') {
		system("exit");
	}
}



