#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

enum class LogType {
	ERROR, RUN
};

extern void WriteLog(LogType type, const string &logMessage) {
	ofstream errorFile("ErrorLog.txt", ios::app);
	ofstream runtimeLogFile("RuntimeLog.txt", ios::app);
	switch (type) {
	case LogType::ERROR:
		const char *ERRORFILEPATH = "../Logs/LastErrors.txt";

		errorFile << logMessage.c_str() << std::endl;
		errorFile.close();
		//Print to screen
		cout << logMessage.c_str() << endl;
		break;
	case LogType::RUN:
		const char *LOGFILEPATH = "../Logs/LastLog.txt";

		runtimeLogFile << logMessage.c_str() << endl;
		runtimeLogFile.close();
		//Print to screen
		cout << logMessage.c_str() << endl;
		break;
	}
}
