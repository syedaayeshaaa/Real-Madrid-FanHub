#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

class Player {                                 // Base class
protected:
    string country;
    int matches;
    string name;
    int goals;
    int assists;
    string position;

public:
    Player() {                                // Default constructor
        matches = 0;
        name = "no name";
        goals = 0;
        assists = 0;
        position = "none";
        country = "none";
    }

    void setPlayer(string n, string c, string p, int m, int g, int a) {  // Setter
        name = n;
        country = c;
        position = p;
        matches = m;
        goals = g;
        assists = a;
    }

    void display() const {                    // Career stats display
        cout << "\tPlayer Career Stats:" << endl;
        cout << "Player Name: " << name << endl;
        cout << "Country: " << country << endl;
        cout << "Position: " << position << endl;
        cout << "Matches: " << matches << endl;
        cout << "Goals: " << goals << endl;
        cout << "Assists: " << assists << endl;
    }
};

class CurrentSeason : public Player {          // Inheritance
public:
    void setPlayer(int m, int g, int a) {     // Function overloading
        matches = m;
        goals = g;
        assists = a;
    }

    void display() const {                     // Current season stats - Polymorphism
        cout << "\n\tStats this season(2023/24):" << endl;
        cout << "Matches: " << matches << endl;
        cout << "Goals: " << goals << endl;
        cout << "Assists: " << assists << endl;
    }
};

class Schedule {                              // Schedule class
    string season;
public:
    Schedule(string s) {                      // Parameterized constructor
        season = s;
    }

    void schedule_LaLiga() const {            // LaLiga schedule display
        cout << "\tUpcoming 5 LaLiga Matches" << endl;
        cout << "Real Madrid vs Athletic Club [March 31, 2024]" << endl;
        cout << "Real Madrid vs Manchester City [April 9, 2024] (UCL)" << endl;
        cout << "Real Madrid vs Mallorca [April 14, 2024]" << endl;
        cout << "Real Madrid vs Barcelona [April 21, 2024]" << endl;
        cout << "Real Madrid vs Real Sociedad [April 26, 2024]" << endl;
    }

    void schedule_UCL() const {               // Champions League schedule
        cout << "\tChampions League 2024" << endl;
        cout << "Quarter Final (1st Leg): Real Madrid vs Man City [April 9, 2024]" << endl;
        cout << "Quarter Final (2nd Leg): Man City vs Real Madrid [April 17, 2024]" << endl;
        if (true) { // Placeholder for qualification logic
            cout << "\nPotential Semi-Final Dates:" << endl;
            cout << "First Leg: April 30 / May 1" << endl;
            cout << "Second Leg: May 7 / May 8" << endl;
        }
    }
};

class Quiz {                                  // Quiz class
public:
    void game() {
        char ch;
        for (int i = 0; i <= 1; i++) {
            cout << "\n\tWelcome to Real Madrid Quiz Challenge" << endl << endl;
            cout << "Q#1) How many UEFA Champions League titles has Real Madrid won?" << endl;
            cout << "a. 12\nb. 14\nc. 13" << endl;
            cin >> ch;

            if (ch == 'b') {
                cout << "Correct! Real Madrid has won 14 Champions League titles" << endl << endl;
            }
            else {
                cout << "Incorrect! Try again in 24 hours" << endl;
                break;
            }

            cout << "Q#2) Who is Real Madrid's all-time top scorer?" << endl;
            cout << "a. Cristiano Ronaldo\nb. Raul\nc. Alfredo Di Stefano" << endl;
            cin >> ch;
            if (ch == 'a') {
                cout << "Correct! Cristiano Ronaldo with 450 goals" << endl << endl;
            }
            else {
                cout << "Incorrect! Try again in 24 hours" << endl;
                break;
            }

            cout << "Q#3) What is Real Madrid's home stadium?" << endl;
            cout << "a. Camp Nou\nb. Metropolitano\nc. Santiago Bernabeu" << endl;
            cin >> ch;
            if (ch == 'c') {
                cout << "Correct! The Santiago Bernabeu Stadium" << endl << endl;
            }
            else {
                cout << "Incorrect! Try again in 24 hours" << endl;
                break;
            }

            cout << "Q#4) What year was Real Madrid founded?" << endl;
            cout << "a. 1902\nb. 1900\nc. 1896" << endl;
            cin >> ch;
            if (ch == 'a') {
                cout << "Correct! Real Madrid was founded in 1902" << endl << endl;
            }
            else {
                cout << "Incorrect! Try again in 24 hours" << endl;
                break;
            }

            cout << "Q#5) Which manager led Real Madrid to three consecutive Champions League titles (2016-2018)?" << endl;
            cout << "a. Carlo Ancelotti\nb. Jose Mourinho\nc. Zinedine Zidane" << endl;
            cin >> ch;
            if (ch == 'c') {
                cout << "Correct! Zinedine Zidane achieved this historic feat" << endl << endl;
                cout << "\t**CONGRATULATIONS**\nYou've won 2 tickets to the next Real Madrid match! Check your email for details." << endl;
                break;
            }
            else {
                cout << "Incorrect! Better luck next time" << endl;
                break;
            }
        }
    }
};

class Blog {                                  // Blog class
private:                                     // Encapsulation
    string opinion;
public:
    Blog(string opp) {                       // Parameterized constructor
        opinion = opp;
    }

    string getOpinion() {                    // Getter
        return opinion;
    }
};

int main() {
    system("Color 0B");
    string name;
    char ch;
    char num = 0;
    Schedule S1("2023/24");
    Quiz q;

    cout << "\t~Welcome to Real Madrid Fan Hub~" << endl << endl;
    cout << "Press 1 to check player stats\nPress 2 to view schedule\nPress 3 to play quiz game\nPress 4 to write blog" << endl;

    do {
        cout << "\nEnter command: ";
        cin >> ch;

        if (ch == '1') {                     // Player Stats
            cout << "Enter player name to search: ";
            cin >> name;

            if (name == "Bellingham") {
                Player P1;
                P1.setPlayer("Jude Bellingham", "England", "Midfielder", 180, 45, 30);
                P1.display();

                cout << "\n________________________________________" << endl;
                CurrentSeason C1;
                C1.setPlayer(30, 20, 8);
                C1.display();
            }
            else if (name == "Vinicius") {
                Player P2;
                P2.setPlayer("Vinicius Jr", "Brazil", "Left Wing", 250, 80, 70);
                P2.display();

                CurrentSeason C2;
                C2.setPlayer(28, 15, 12);
                C2.display();
            }
            else if (name == "Modric") {
                Player P3;
                P3.setPlayer("Luka Modric", "Croatia", "Midfielder", 500, 40, 150);
                P3.display();

                CurrentSeason C3;
                C3.setPlayer(25, 2, 5);
                C3.display();
            }
            else if (name == "Kroos") {
                Player P4;
                P4.setPlayer("Toni Kroos", "Germany", "Midfielder", 450, 35, 140);
                P4.display();

                CurrentSeason C4;
                C4.setPlayer(30, 3, 8);
                C4.display();
            }
            else if (name == "Valverde") {
                Player P5;
                P5.setPlayer("Federico Valverde", "Uruguay", "Midfielder", 200, 25, 45);
                P5.display();

                CurrentSeason C5;
                C5.setPlayer(32, 8, 10);
                C5.display();
            }
        }
        else if (ch == '2') {                // Schedule
            int comp;
            cout << "\tReal Madrid 2024 Schedule" << endl;
            cout << "1. LaLiga\n2. Champions League" << endl;
            cin >> comp;

            Schedule S2(S1);
            if (comp == 1) {
                S1.schedule_LaLiga();
            }
            else if (comp == 2) {
                S2.schedule_UCL();
            }
            else {
                cout << "Invalid Command" << endl;
            }
        }
        else if (ch == '3') {                // Quiz
            q.game();
        }
        else if (ch == '4') {                // Blog
            string opinion;
            cout << "\n\t***REAL MADRID FANZONE***" << endl << endl;
            cout << "Write your thoughts: ";
            getline(cin >> ws, opinion);

            Blog B(opinion);

            ofstream fout;                    // File handling
            fout.open("madrid_opinions.txt", ios::app);
            fout << B.getOpinion() << endl;
            fout.close();

            cout << endl;

            ifstream fin("madrid_opinions.txt");
            if (fin.is_open()) {
                while (getline(fin, opinion)) {
                    cout << "Blog posted: " << opinion << endl;
                }
                fin.close();
            }
            else {
                cout << "File is not open" << endl;
            }
        }

        cout << "\nDo you want to close the app(y/n): ";
        cin >> num;
    } while (num != 'y');

    cout << "\n\t************ Thank you for using Real Madrid Fan Hub! ************";
    return 0;
}