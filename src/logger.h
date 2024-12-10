#pragma once
#include <string>

using namespace std;

class Exception
{
public:
    Exception(const string &Message) : reason(Message) {};
    const string reason;
};

extern void WriteLog(string &logMessage);
