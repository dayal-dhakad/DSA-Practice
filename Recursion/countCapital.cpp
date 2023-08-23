#include <iostream>
#include <string>

using namespace std;

int countCapital(string str, int i)
{
    if (str[i] == '\0')
    {
        return 0; // Base case: reached the end of the string
    }
    else
    {
        int count = countCapital(str, i + 1);
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            return count + 1;
        }
        else
        {
            return count;
        }
    }
}

int main()
{
    string str = "abXc";

    int count = countCapital(str, 0);
    cout << "Capital chars: " << count << endl;

    return 0;
}
