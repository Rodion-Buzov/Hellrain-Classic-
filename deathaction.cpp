#include "heading.hpp"

int choiceWriteScore;

void WarriorDeathStep(Tower& tower, Warrior& warrior, Wizard& wizard, Healer& healer) {
    warrior.death();
    cout << "Write your record to a file?" << endl;
    cout << "(1) yes" << endl;
    cout << "(2) no" << endl;
    cin >> choiceWriteScore;
    if (choiceWriteScore == 1) {
        AddScore();
    }
    else if (choiceWriteScore == 2) {
        cout << "okey!" << endl;
    }
    else {
        cout << "Wrong Input! Error code 5!" << endl;
    }
}

void WizardDeathStep(Tower& tower, Warrior& warrior, Wizard& wizard, Healer& healer) {
    wizard.death();
    cout << "Write your record to a file?" << endl;
    cout << "(1) yes" << endl;
    cout << "(2) no" << endl;
    cin >> choiceWriteScore;
    if (choiceWriteScore == 1) {
        AddScore();
    }
    else if (choiceWriteScore == 2) {
        cout << "okey!" << endl;
    }
    else {
        cout << "Wrong Input! Error code 5!" << endl;
    }
}

void HealerDeathStep(Tower& tower, Warrior& warrior, Wizard& wizard, Healer& healer) {
    healer.death();
    cout << "Write your record to a file?" << endl;
    cout << "(1) yes" << endl;
    cout << "(2) no" << endl;
    cin >> choiceWriteScore;
    if (choiceWriteScore == 1) {
        AddScore();
    }
    else if (choiceWriteScore == 2) {
        cout << "okey!" << endl;
    }
    else {
        cout << "Wrong Input! Error code 5!" << endl;
    }
}

void TowerDeathStep(Tower& tower, Warrior& warrior, Wizard& wizard, Healer& healer) {
    tower.death();
    cout << "Write your record to a file?" << endl;
    cout << "(1) yes" << endl;
    cout << "(2) no" << endl;
    cin >> choiceWriteScore;
    if (choiceWriteScore == 1) {
        AddScore();
    }
    else if (choiceWriteScore == 2) {
        cout << "okey!" << endl;
    }
    else {
        cout << "Wrong Input! Error code 5!" << endl;
    }
}