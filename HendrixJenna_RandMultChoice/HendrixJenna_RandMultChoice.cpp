// HendrixJenna_RandMultChoice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

int main()
{
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

	std::string question4 = "What is the national mammal of the United States?";
	questions.push_back(question4);

	std::string question5 = "What series is not an HBO original?";
	questions.push_back(question5);

	//create a vector for the answers to each of the questions.
	std::vector<std::string> question1Answers;
	question1Answers.push_back("David Gilmour");
	question1Answers.push_back("Jimi Hendrix");
	question1Answers.push_back("Synyster Gates");
	question1Answers.push_back("Eddie Van Halen");

	answers.push_back(question1Answers);

	std::vector<std::string> question2Answers;
	question2Answers.push_back("Sheep");
	question2Answers.push_back("Panda");
	question2Answers.push_back("Snake");
	question2Answers.push_back("Chicken");

	answers.push_back(question2Answers);

	std::vector<std::string> question3Answers;
	question3Answers.push_back("Red");
	question3Answers.push_back("Black");
	question3Answers.push_back("Green");
	question3Answers.push_back("Purple");

	answers.push_back(question3Answers);

	std::vector<std::string> question4Answers;
	question4Answers.push_back("Bald Eagle");
	question4Answers.push_back("Grizzly Bear");
	question4Answers.push_back("Lion");
	question4Answers.push_back("Bald Eagle");

	answers.push_back(question4Answers);

	std::vector<std::string> question5Answers;
	question5Answers.push_back("VEEP");
	question5Answers.push_back("Stranger Things");
	question5Answers.push_back("Game of Thrones");
	question5Answers.push_back("Big Little Lies");

	answers.push_back(question5Answers);

	//Display random question, ask for answer, tell user if they are correct.
	srand(time(0));
	int randInt;
	randInt = rand() % 5;
	std::cout << questions[randInt] << std::endl;

	for (int i = 0; i < answers[randInt].size(); i++) {
		std::cout << answers[randInt][i] << std::endl;
	}

	std::cout << "\nEnter your answer here: ";
	std::string userAnswer;
	std::cin >> userAnswer;
	std::cout << userAnswer;
	

}





