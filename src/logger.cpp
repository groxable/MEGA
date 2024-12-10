#include <iostream>
#include <fstream>
#include <string>

using namespace std;

extern void WriteLog(string &logMessage)
{
    ofstream logFile("log.txt", ios::app);
    const char *LOGFILEPATH = "../logs/log.txt";

    logFile << logMessage.c_str() << endl;
    logFile.close();
    cout << logMessage.c_str() << endl;
}
