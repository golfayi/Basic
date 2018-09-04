#include <iostream>
using namespace std;

bool isHandsomeNum(int k)
{
    if(k == 1 || k == 2 || k == 3)
    {
        return true;
    }
    bool result = false;
    if(k % 2 == 0)
    {
        result = isHandsomeNum(k/2);
    }
    else if(k % 3 == 0)
    {
        result = isHandsomeNum(k/3);
    }
    else if(k % 5 == 0)
    {
        result = isHandsomeNum(k/5);
    }
    
    return result;
}

int getHandsomeNum(int n)
{
    if(n == 1 || n == 2 || n == 3 || n == 4 || n == 5)
    {
        return n;
    }
    int count = 0;
    for(int i = 1; ; i++)
    {
        if(isHandsomeNum(i))
        {
            count++;
        }
        if(count == n)
        {
            return i;
            break;
        }
            
    }
        
        
    
    return 0;
}

int main()
{
    int N;
    cin>>N;
    int num = getHandsomeNum(N);
    cout << num << endl;
    return 0;
}