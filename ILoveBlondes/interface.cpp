#include <iostream>
#include <string.h>

using namespace std;
//THIS IS A SCHEME FOR NOW 

void Separator() {

	cout << "------------------------------------" << endl;

}
void CreateTable(){

}
void {

}

void DisplayStatus() {

    Separator();
}

int main() {
    cout << "------------------------------------" << endl;
    cout << "SQL COMMAND PROCESSOR" << endl;
    cout << "------------------------------------" << endl;
    cout << "\nWelcome to the SQL Command Processor!" << endl;
    cout << "Type 'help' for available commands." << endl;
    cout << "Type 'demo' to see a demonstration." << endl;
    cout << "Type 'exit' to quit.\n" << endl;
    Separator();

    char command[1000];

    while (true) {
        cout << "\nSQL> ";
        cin.getline(command, 1000);

        if (strlen(command) > 0) {
            Command(command);
        }
    }

    return 0;
}