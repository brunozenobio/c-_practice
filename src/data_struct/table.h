#ifndef LINKEDLIST
#define LINKEDLIST
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <variant>
using namespace std;
using DataType = variant<int,double,string>;
class CSVToTable{
    private:
        int num_features;
        int num_rows;
        vector<vector<DataType>> data;
    public:
        CSVToTable(){} 
        
        void readCSV(const string& filename,const string& sep){
            ifstream file(filename);
            string line;
            // Ver como poner estoen metodos
            while (getline(file,line)){
                stringstream ss(line);
                string value;
                int col_index = 0;
                while (getline(ss,value,sep)){
                    if (value.find('.')!=string::npos){
                        try{
                            data[col_index].push_back(stod(value));
                        } catch(...){
                            data[col_index].push_back(value);
                        }
                        
                    }else{
                        try{
                            data[col_index].push_back(stoi(value));
                        }catch(...){
                            data[col_index].push_back(value);
                        }
                    }
                    col_index++;
                }
                
            }

        }
        




};
#endif