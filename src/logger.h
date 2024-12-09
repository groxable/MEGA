#pragma once
#include <string>

using namespace std;

/*
 *	enum class LogType {
 *		ERROR, WARNING, INFO	TODO: add log time and log types.
 *	};							new TODO: remove it.
 *
 */

class Exception {
public:
	Exception(const string &Message) :
			reason(Message) {};
	const string reason;
};

extern void WriteLog(string &logMessage);
