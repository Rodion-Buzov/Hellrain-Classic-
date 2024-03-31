#include "heading.hpp"

void WarriorAction(Tower& tower, Warrior& warrior, Wizard& wizard, Healer& healer) { // attack func
    if (tower.TowerHealth <= 0) { // if attack defeat enemy
        cout << "Warrior cannot attack a defeated enemy." << endl;
    }
    else if  (tower.TowerHealth > 0) { // default attack
        cout  << "Warrior attacks the tower with " << warrior.WarriorDamage << " damage.\n";
        tower.TowerHealth -= warrior.WarriorDamage;
    }
    else {
        cout << "Error! Restart game and check program code pls... Error code 9!" << endl; // if error code
    }
}

void WizardAction(Tower& tower, Warrior& warrior, Wizard& wizard, Healer& healer) { // attack func
    if (tower.TowerHealth <= 0) { // if attack defeat enemy
        cout << "Wizard cannot attack a defeated enemy." << endl;
    }
    else if  (tower.TowerHealth > 0) { // default attack
        cout  << "Wizard attacks the tower with " << wizard.WizardDamage << " damage.\n";
        tower.TowerHealth -= wizard.WizardDamage;
    }
    else {
        cout << "Error! Restart game and check program code pls... Error code 9!" << endl; // if error code
    }
}

void HealerAction(Tower& tower, Warrior& warrior, Wizard& wizard, Healer& healer) { // heal func
    int ChoiceHeal; // choice character fo heal
    int RandomHeal; // lucky heal 
    srand(time(NULL));
    RandomHeal = rand() % 2;

    cout << "==========" << endl;
    cout << "Choose a character to treat: " << endl; // choice character fo heal
    cout << "(1) Warrior" << endl;
    cout << "(2) Wizard" << endl; 
    cout << "(3) self-medication" << endl;
    cout << "==========" << endl;
    cout << "Your choice: ";
    cin >> ChoiceHeal;

    if (ChoiceHeal == 1) {
        if (RandomHeal == 0) {
            if (warrior.WarriorHealth > 0) {
                cout << "Treatment of Warrior..." << endl; // Warrior heal
                warrior.WarriorHealth += healer.HealerHeal;
                cout << "Warrior health: " << warrior.WarriorHealth << endl;
            }
            else if (warrior.WarriorHealth <= 0) {
                cout << "Not treatment fo death characters" << endl;
            }
            else {
                cout << "Error! Restart game and check program code pls... Error code 9!" << endl; // if code error
            }
        }
        else {
            cout << "Sorry, you not lucky..." << endl;
        }
    }
    else if (ChoiceHeal == 2) {
        if (RandomHeal == 1) {
            if (wizard.WizardHealth > 0) {
                cout << "Treatment of Wizard..." << endl; // Wizard heal 
                wizard.WizardHealth += healer.HealerHeal;
                cout << "Wizard health: " << wizard.WizardHealth << endl;
            }
            else if (wizard.WizardHealth <= 0) {
                cout << "Not treatment fo death characters" << endl;
            }
            else {
                cout << "Error! Restart game and check program code pls... Error code 9!" << endl; // if code error
            }
        }
        else {
            cout << "Sorry, you not lucky..." << endl;
        }
    }
    else if (ChoiceHeal == 3) {
        if (RandomHeal == 2) {
            if (healer.HealerHealth > 0) {
                cout << "self-medication..." << endl; // self-medication
                healer.HealerHealth += healer.HealerHeal;
                cout << "Healer health: " << healer.HealerHealth << endl;
            }
            else if (healer.HealerHealth <= 0) {
                cout << "Not treatment fo death characters" << endl;
            }
            else {
                cout << "Error! Restart game and check program code pls... Error code 9!" << endl; // if code error
            }
        }
        else {
            cout << "Sorry, you not lucky..." << endl;
        }
    }
    else {
        cout << "Wrong Input! Error code 8!" << endl;
    }
}

void TowerAction(Tower& tower, Warrior& warrior, Wizard& wizard, Healer& healer) {
    srand(time(NULL));
    int RandAttack = rand() % 3;

    cout << "##########" << endl;
    if (RandAttack == 0) {
        if (warrior.WarriorHealth <= 0) {
            cout << "The tower missed your characters!" << endl; // missed
        }
        else if (warrior.WarriorHealth > 0) {
            cout << "Tower has been attack the Warrior!" << endl; // attack the warrior
            warrior.WarriorHealth -= tower.TowerDamage;
            cout << "Warrior health: " << warrior.WarriorHealth << endl;
        }
        else {
            cout << "Error! Restart game and check program code pls... Error code 7!" << endl; // if code error
        }
    }
    else if (RandAttack == 1) {
        if (wizard.WizardHealth <= 0) {
            cout << "The tower missed your characters!" << endl; // missed
        }
        else if (wizard.WizardHealth > 0) {
            cout << "Tower has been attack the Wizard!" << endl; // attack the wizard
            wizard.WizardHealth -= tower.TowerDamage;
            cout << "Wizard health: " << wizard.WizardHealth << endl;
        }
        else {
            cout << "Error! Restart game and check program code pls... Error code 7!" << endl; // if code error
        }
    }
    else if (RandAttack == 2) {
        if (healer.HealerHealth <= 0) {
            cout << "The tower missed your characters!" << endl; // missed 
        }
        else if (healer.HealerHealth > 0) {
            cout << "Tower has been attack the Healer!" << endl; // attack the healer 
            healer.HealerHealth -= tower.TowerDamage;
            cout << "Healer health: " << healer.HealerHealth << endl;
        }
        else {
            cout << "Error! Restart game and check program code pls... Error code 7!" << endl; // if code error
        }
    }
    else {
        cout << "Error! Restart game and check program code pls... Error code 6!" << endl; // if code error
    }
    cout << "##########" << endl;
}