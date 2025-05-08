#include <iostream>
#include <cstring>

using namespace std;

// Function to classify the document based on keywords
string classifyDocument(const char *document)
{
    if (strstr(document, "stock") || strstr(document, "finance") || strstr(document, "bank"))
    {
        return "Finance";
    }
    if (strstr(document, "health") || strstr(document, "doctor") || strstr(document, "medicine"))
    {
        return "Health";
    }
    if (strstr(document, "technology") || strstr(document, "computer") || strstr(document, "software"))
    {
        return "Technology";
    }
    return "Unknown Category";
}

int main()
{
    char document[200];

    cout << "Enter a brief document summary: ";
    cin.getline(document, 200);

    string category = classifyDocument(document);

    cout << "Predicted Category: " << category << endl;

    return 0;
}
