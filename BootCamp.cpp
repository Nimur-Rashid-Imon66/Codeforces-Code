#include<iostream>
using namespace std;
void sub(int count)
{
    if(count == 0)
        cout << count;
    else
            {
                cout << count << endl;
                sub(--count);
                return;
             }
}
int main()
{
    int a = 10;
    int b = 200;
    int result;
     sub(a);
}