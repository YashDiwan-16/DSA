#include<iostream>
using namespace std;


bool isPalindrome (char name[], int length)
{
    int start = 0;
    int end = length - 1;

    while (start <= end)
    {
        if (name[start] != name[end])
        {
            return false; // Not a palindrome
        }
        else
        {
        start++;
        end--;
    }
    }
    return true; // Is a palindrome
}

void reverse(char name[], int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        // Swap characters
        swap(name[start++], name[end--]);
        
    }
}


int getlength(char name[])
{
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[10];
    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Your name is: " << name << endl;

    int len=getlength(name);
    cout<<"Length of your name is: "<<len<<endl;

    reverse(name, len);

    cout << "Reversed name is: " << name << endl;

    cout<<"Is your name a palindrome or not : "<< isPalindrome(name, len) << endl;
    return 0;
}