#include <iostream>
#include <fstream>
using namespace std;

class Quiz
{
private:
    string question;
    string option1, option2, option3, option4;
    char answer;
    int score;

public:
    Quiz()
    {
        score = 0;
    }

    void setQuestion(string q, string a, string b, string c, string d, char ans)
    {
        question = q;
        option1 = a;
        option2 = b;
        option3 = c;
        option4 = d;
        answer = ans;
    }

    void startQuiz()
    {
        char userAnswer;

        cout << "\n" << question << endl;
        cout << "a) " << option1 << endl;
        cout << "b) " << option2 << endl;
        cout << "c) " << option3 << endl;
        cout << "d) " << option4 << endl;

        cout << "Enter your answer: ";
        cin >> userAnswer;

        if(userAnswer == answer)
        {
            cout << "Correct Answer\n";
            score++;
        }
        else
        {
            cout << "Wrong Answer\n";
        }
    }

    void showScore()
    {
        cout << "\nFinal Score = " << score << "/1" << endl;

        ofstream file("result.txt");
        file << "Score : " << score << "/1";
        file.close();
    }
};

int main()
{
    Quiz q;

    q.setQuestion(
        "Which language is used in this project?",
        "Python",
        "Java",
        "C++",
        "HTML",
        'c'
    );

    q.startQuiz();
    q.showScore();

    return 0;
}
