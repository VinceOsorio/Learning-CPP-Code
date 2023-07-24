#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!", "2nd Version"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}