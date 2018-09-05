#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int size = str.length();
    int i;
    int count = 0;

    for(i = size; i >=0; i--)
    {
        if(i == 0 || str[i - 1] == ' ')
            break;
        count ++;
    }
    cout << count << endl;
    return 0;
}
