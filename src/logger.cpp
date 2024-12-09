#include <iostream>
#include <fstream>
#include <string>

using namespace std;

extern void WriteLog(string &logMessage) {
	ofstream logFile("Log.txt", ios::app);
	const char *LOGFILEPATH = "../Logs/Log.txt";

	logFile << logMessage.c_str() << endl;
	logFile.close();
	cout << logMessage.c_str() << endl;
}
