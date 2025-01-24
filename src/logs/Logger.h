#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

class  Logger{
	
	public:
		Logger(){};
		~Logger(){};
		void log(const string& message,const string& label){
			time_t now = time(nullptr);
			char timestamp[30];
			strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", localtime(&now));
			cout << "["<< timestamp << "]" <<"["<< label << "]" << message<<endl;
			}
		void info(const string& message){
			log(message,"\033[33mINFO\033[0m");
		}
		void warn(const string& message){
			log(message,"WARN");
		}		
		void error(const string& message){
			log(message,"\033[31mERROR\033[0m");
		}	
};
#endif
