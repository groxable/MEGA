#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 *	enum class LogType {
 *		ERROR, WARNING, INFO	TODO: add log time and log types.
 *	};
 *
 */

extern void WriteLog(LogType type, const string &logMessage) {
	ofstream logFile("Log.txt", ios::app);
	const char *LOGFILEPATH = "../Logs/Log.txt";

	logFile << logMessage.c_str() << endl;
	logFile.close();
	cout << logMessage.c_str() << endl;
}
