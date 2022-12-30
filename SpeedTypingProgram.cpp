//The time_t data type represents the system time and date as an integer.
//This method returns a pointer to a string that holds the date and time.

#include <iostream>
#include <ctime>
using namespace	std;

int main()
{
	time_t Start = time(0); //this is to start the user time and create another to track the story time
	time_t End = time(0);
	string StartTime = ctime(&Start); //this is where start and stop time is stored
	string EndTime = ctime(&End);
	string LopusIpsum = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse vestibulum elit et enim scelerisque commodo.";
	string UserText;
	int ErrorCounter = 0;
	string StartGame;
	cin >> skipws;
	string IntroMessage =
	"\n_-_-_-_-_Welcome! This is a game to test and improve your typing speed._-_-_-_-_\n"
	"\n_-_-_-_-_-_-_-_-_-_-_-_-_-_!FOLLOW INSTRUCTIONS!_-_-_-_-__-_-_-_-__-_-_-_-_-_-_-\n"
	"\n_-_-_-_-_-_-_-_-_-_-_-_-READ THE PASSAGE BELOW FIRST._-_-_-_-_-_-_-_-_-_-_-_-_-_\n"
	"\n_-_-_-_-_-_-_-TYPE 's' THEN TAP 'ENTER' TO START WHEN READY_-_-_-_-_-_-_-_-_-_\n"
	"\n_-_-_-_-_-_-_-_-_-_-_-TAP 'ENTER' TO STOP WHEN FINISHED-_-_-_-_-_-_-_-_-_-_-_-_\n";

	cout << IntroMessage << endl;
	cout << LopusIpsum << endl << endl;
	cin >> StartGame;
	if(StartGame[0]=='s')
	{
		cin.clear();
		cin.ignore();
		cout << endl << LopusIpsum << endl;
		cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-!START TYPING NOW!_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n" << endl << endl;
		Start = time(0);
		StartTime = ctime(&Start);
		getline(cin, UserText);
	}
	else
	{
		cout << "goodbye" <<endl;
		exit(0);
	}
	End = time(0);
	EndTime = ctime(&End);


	for(int i = 0; i<LopusIpsum.length();i++)
	{
		if(LopusIpsum[i]!=UserText[i])
		{
			ErrorCounter++;
		}
	}
	cout << endl;

	cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-AMOUNT OF ERRORS_-_-_-_-_-_-_-_-_-_-_-_-\n"<<"                               " << ErrorCounter << endl;
	cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-ORIGNAL TEXT_-_-_-_-_-_-_-_-_-_-_-_-_-\n"<< LopusIpsum << endl;
	cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-__YOUR TEXT_-_-_-_-_-_-_-_-_-_-_-_-_-_\n"<< UserText << endl;
	cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-START TIME_-_-_-_-_-_-_-_-_-_-_-_-_-\n"<<"                    " << StartTime << endl;;
	cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_END TIME_-_-_-_-_-_-_-_-_-_-_-_-_-_\n"<<"                    " << EndTime << endl;
	cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-TIME TAKEN_-_-_-_-_-_-_-_-_-_-_-_-_-\n"<<"                    " << "Time Taken in seconds = " << difftime(Start, End)<< endl;
	//cout << StartTime - EndTime << endl;
	
	return 0;
}