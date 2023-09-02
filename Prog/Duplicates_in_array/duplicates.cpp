 #include<iostream>
#include<vector>
#include<sstream>
#include <map>
using namespace std;
int main()
{
     vector <int> arr;
     vector<int> duplicates;  //dynamic array
     string input;
     getline(cin,input);
     stringstream ss(input);         //easy way to manipulate string perform extraction or insertion operation
     int num;
     while(ss >>num) //use >> for extraction
        {
            arr.push_back(num);
        }

     map<int,int >store;
     for(int ele :arr)                   //like foreach loop
     {
         store[ele]++;                   //increment value of key in map depend on occurence,
     }
     for (auto pair : store) {
        int m = pair.first;                 //pair.first = key
        if (pair.second > 1) {               // pair.second = value
            duplicates.push_back(m);            //function to add elements at end of vector
        }
    }
     for (int i =0;i<duplicates.size();i++)
        cout<<duplicates[i]<<" ";
}
