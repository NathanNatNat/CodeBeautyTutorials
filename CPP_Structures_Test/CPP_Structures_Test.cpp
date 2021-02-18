#include <iostream>
using namespace std;

struct Question
{
	string QuestionText{ };
	string AnswerList[3];
	int CorrectAnswer{ };
};

void ShowQuestion(const Question& Question);
void QuestionAnswer(const Question& Question, const int UserAnswer);

int main()
{
	int UserAnswer{ 0 };

	cout << "****** Quiz ****** \n";

	Question Question1;
	Question1.QuestionText = { "What is the smallest country?" };
	Question1.AnswerList[0] = { "1. USA" };
	Question1.AnswerList[1] = { "2. India" };
	Question1.AnswerList[2] = { "3. Vatican City" };
	Question1.CorrectAnswer = { 2 };

	Question Question2;
	Question2.QuestionText = { "What's the biggest animal in the world?" };
	Question2.AnswerList[0] = { "1. Elephant" };
	Question2.AnswerList[1] = { "2. Blue whale" };
	Question2.AnswerList[2] = { "3. Great white shark" };
	Question2.CorrectAnswer = { 1 };

	Question Question3;
	Question3.QuestionText = { "How many elements are there in the periodic table?" };
	Question3.AnswerList[0] = { "1. 118 elements" };
	Question3.AnswerList[1] = { "2. 119 elements" };
	Question3.AnswerList[2] = { "3. 120 elements" };
	Question3.CorrectAnswer = { 0 };

	ShowQuestion(Question1);
	ShowQuestion(Question2);
	ShowQuestion(Question3);

	return 0;
}

void ShowQuestion(const Question& Question)
{
	cout
		<< Question.QuestionText << endl
		<< Question.AnswerList[0] << endl
		<< Question.AnswerList[1] << endl
		<< Question.AnswerList[2] << endl
		<< "Choose 1-3: ";

	int UserAnswer{ 0 };
	cin >> UserAnswer;
	QuestionAnswer(Question, UserAnswer);
}

void QuestionAnswer(const Question& Question, const int UserAnswer)
{
	cout << ((UserAnswer == Question.CorrectAnswer + 1) ? "Correct!" : "Incorrect!") << endl << endl; // +1 because arrays start at 0.
}
