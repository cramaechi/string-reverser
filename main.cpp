#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 100;

void input(char s[]);
//Reads user input into C-string s.

void reverseString(char head[]);
//Precondition: head points to the memory address of the first character in a
//C-string.
//Postcondition: Reverses the contents of the C-string.

void output(char head[]);
//Precondition: The contents of C-string head have been reversed.
//Postcondition: Prints out the reversed C-string.

int main (int argc, char *argv[])
{
    char cString[SIZE];

    input(cString);
    reverseString(cString);
    output(cString);

    return 0;
}

void input(char s[])
{
    cout<<"Enter a string: ";
    cin.getline(s, SIZE);
}

void reverseString(char head[])
{
    char *tail = head;

    while (*(tail + 1) != '\0')
        tail++;

    char temp;
    while (head <= tail) 
    {
        temp = *head;
        *head = *tail;
        *tail = temp;

        head++;
        tail--;
    } 
}

void output(char head[])
{
    cout<<"Reversed string: "<<head<<endl;
}
