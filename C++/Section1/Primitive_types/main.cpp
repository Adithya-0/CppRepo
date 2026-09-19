#include <iostream>
using namespace std;
int main(){
    /***************CHARACTER TYPES***************************************/
    char initial {'A'};
    cout << "My initital is " << initial << endl;

    /*************************INTEGER TYPES**************************************/
    unsigned short int exam_score {25};
    cout << "Exam score is " << exam_score << endl;

    int countries_represented {65}; // signed by default
    cout << "There were " << countries_represented << " countries represented in the meeting" << endl;

    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people living in florida" << endl;

    int people_in_florida2 {20610000};
    cout << "There are about " << people_in_florida2 << " people living in florida" << endl;

    /*BOOLEAN TYPES*/
    bool game_over {false};
    cout << "The value of game_over is " << game_over << endl;

}
