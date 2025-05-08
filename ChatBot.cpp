#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userInput;

    while (true)
    {
        cout << "You: ";
        getline(cin, userInput);

        if (userInput == "exit")
        {
            cout << "Chatbot: Thank you! Have a nice day! " << endl;
            break;
        }
        else if (userInput == "hello")
        {
            cout << "Chatbot: Hello! How can I help you?" << endl;
        }
        else if (userInput == "hours")
        {
            cout << "Chatbot: Our shop is open from 9 AM to 9 PM." << endl;
        }
        else if (userInput == "services")
        {
            cout << "Chatbot: We provide home delivery and customer support." << endl;
        }
        else if (userInput == "contact")
        {
            cout << "Chatbot: You can call us at +123-456-7890." << endl;
        }
        else
        {
            cout << "Chatbot: Sorry, I didn't understand that." << endl;
        }
        
    }

    return 0;
}
