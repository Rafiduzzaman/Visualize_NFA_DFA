#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int dfa_current_state;
        int dfa_current_input;

        cout << "Enter initial state (0-9): ";
        cin >> dfa_current_state;

        if (dfa_current_state < 0 || dfa_current_state > 9) {
            cout << "Invalid initial state." << endl;
        }

        cout << "Current State: " << dfa_current_state << endl;

        while (true) {
            cout << "Enter input (1 for +/-, 2 for 0-9, 3 for ., 4 for e/E): ";
            cin >> dfa_current_input;

            if (dfa_current_state == 0) {
                if (dfa_current_input == 1) {
                    dfa_current_state = 1;
                } else if (dfa_current_input == 2) {
                    dfa_current_state = 2;
                } else {
                    cout << "Invalid input at state q0" << endl;
                    break;
                }
            } else if (dfa_current_state == 1) {
                if (dfa_current_input == 2) {
                    dfa_current_state = 2;
                } else {
                    cout << "Invalid input at state q1" << endl;
                    break;
                }
            } else if (dfa_current_state == 2) {
                if (dfa_current_input == 2) {
                    dfa_current_state = 2;
                } else if (dfa_current_input == 3) {
                    dfa_current_state = 3;
                } else {
                    cout << "Invalid input at state q2" << endl;
                    break;
                }
            } else if (dfa_current_state == 3) {
                if (dfa_current_input == 2) {
                    dfa_current_state = 4;
                } else {
                    cout << "Invalid input at state q3" << endl;
                    break;
                }
            } else if (dfa_current_state == 4) {
                if (dfa_current_input == 2) {
                    dfa_current_state = 4;
                } else if (dfa_current_input == 4) {
                    dfa_current_state = 5;
                } else {
                    cout << "Invalid input at state q4" << endl;
                    break;
                }
            } else if (dfa_current_state == 5) {
                if (dfa_current_input == 1) {
                    dfa_current_state = 6;
                } else if (dfa_current_input == 2) {
                    dfa_current_state = 8;
                } else {
                    cout << "Invalid input at state q5" << endl;
                    break;
                }
            } else if (dfa_current_state == 6) {
                if (dfa_current_input == 2) {
                    dfa_current_state = 7;
                } else {
                    cout << "Invalid input at state q6" << endl;
                    break;
                }
            } else if (dfa_current_state == 7) {
                if (dfa_current_input == 2) {
                    dfa_current_state = 7;
                } else {
                    cout << "Invalid input at state q7" << endl;
                    break;
                }
            }

            cout << "Current State: " << dfa_current_state << endl;

            if (dfa_current_state == 8 || dfa_current_state == 9) {
                cout << "Reached a final state: " << dfa_current_state << endl;
                break;
            }
        }

        cout << "Do you want to restart? Press 1 for yes, any other key for no: ";
        int choice;
        cin >> choice;
        if (choice != 1) {
            break;
        }
    }

    return 0;
}
