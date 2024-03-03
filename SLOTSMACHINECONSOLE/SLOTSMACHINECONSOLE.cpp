#include <iostream>
#include <thread>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <limits>
#include <string>
#include <fstream>
#include <random>
#include <chrono>
/*
Static Linking
/MTd C Runtime Library
*/

using namespace std;

int key = log(64) / log(2);

int cash = 100;

int times = 0;

int speed = 0;

int lost = 0;

void cls() {
    COORD pos = { 0, 0 };
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}

void prin(vector<int> num) {

    cout << "   .----------------.    .----------------.    .----------------. \n"
        << "  | .--------------. |  | .--------------. |  | .--------------. |";

    cout << endl;

    for (int i = 0; i < 3; i++) {
        switch (num[i]) {
        case 1:
            cout << "  | |     __       | |";
            break;
        case 2:
            cout << "  | |    _____     | |";
            break;
        case 3:
            cout << "  | |    ______    | |";
            break;
        case 4:
            cout << "  | |   _    _     | |";
            break;
        case 5:
            cout << "  | |   _______    | |";
            break;
        case 6:
            cout << "  | |    ______    | |";
            break;
        case 7:
            cout << "  | |   _______    | |";
            break;
        default:
            cout << "  | |              | |";
            break;
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++) {
        switch (num[i]) {
        case 1:
            cout << "  | |    /  |      | |";
            break;
        case 2:
            cout << "  | |   / ___ `.   | |";
            break;
        case 3:
            cout << "  | |   / ____ `.  | |";
            break;
        case 4:
            cout << "  | |  | |  | |    | |";
            break;
        case 5:
            cout << "  | |  |  _____|   | |";
            break;
        case 6:
            cout << "  | |  .' ____ \\   | |";
            break;
        case 7:
            cout << "  | |  |  ___  |   | |";
            break;
        default:
            cout << "  | |              | |";
            break;
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++) {
        switch (num[i]) {
        case 1:
            cout << "  | |    `| |      | |";
            break;
        case 2:
            cout << "  | |  |_/___) |   | |";
            break;
        case 3:
            cout << "  | |   `'  __) |  | |";
            break;
        case 4:
            cout << "  | |  | |__| |_   | |";
            break;
        case 5:
            cout << "  | |  | |____     | |";
            break;
        case 6:
            cout << "  | |  | |____\\_|  | |";
            break;
        case 7:
            cout << "  | |  |_/  / /    | |";
            break;
        default:
            cout << "  | |              | |";
            break;
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++) {
        switch (num[i]) {
        case 1:
            cout << "  | |     | |      | |";
            break;
        case 2:
            cout << "  | |   .'____.'   | |";
            break;
        case 3:
            cout << "  | |   _  |__ '.  | |";
            break;
        case 4:
            cout << "  | |  |____   _|  | |";
            break;
        case 5:
            cout << "  | |  '_.____''.  | |";
            break;
        case 6:
            cout << "  | |  | '____`'.  | |";
            break;
        case 7:
            cout << "  | |      / /     | |";
            break;
        default:
            cout << "  | |              | |";
            break;
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++) {
        switch (num[i]) {
        case 1:
            cout << "  | |    _| |_     | |";
            break;
        case 2:
            cout << "  | |  / /____     | |";
            break;
        case 3:
            cout << "  | |  | \\____) |  | |";
            break;
        case 4:
            cout << "  | |      _| |_   | |";
            break;
        case 5:
            cout << "  | |  | \\____) |  | |";
            break;
        case 6:
            cout << "  | |  | (____) |  | |";
            break;
        case 7:
            cout << "  | |     / /      | |";
            break;
        default:
            cout << "  | |              | |";
            break;
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++) {
        switch (num[i]) {
        case 1:
            cout << "  | |   |_____|    | |";
            break;
        case 2:
            cout << "  | |  |_______|   | |";
            break;
        case 3:
            cout << "  | |   \\______.'  | |";
            break;
        case 4:
            cout << "  | |     |_____|  | |";
            break;
        case 5:
            cout << "  | |   \\______.'  | |";
            break;
        case 6:
            cout << "  | |  '.______.'  | |";
            break;
        case 7:
            cout << "  | |    /_/       | |";
            break;
        default:
            cout << "  | |              | |";
            break;
        }
    }
    cout << "\n  | |              | |  | |              | |  | |              | |\n"
        << "  | '--------------' |  | '--------------' |  | '--------------' |\n"
        << "   '----------------'    '----------------'    '----------------' ";

}
void hide() {
    CONSOLE_CURSOR_INFO cursorInfo;
    HANDLE outputHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(outputHandle, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(outputHandle, &cursorInfo);
}
void show() {
    CONSOLE_CURSOR_INFO cursorInfo;
    HANDLE outputHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(outputHandle, &cursorInfo);
    cursorInfo.bVisible = true;
    SetConsoleCursorInfo(outputHandle, &cursorInfo);
}


void win(vector<int> num) {
    hide();
    Sleep(200 / speed);
    system("CLS");
    prin(num);
    cout << endl << endl << endl;
    cout << "   _    _ \n";
    cout << "  | |  | |\n";
    cout << "  | |  | |\n";
    cout << "  | |\\/| |\n";
    cout << "  \\  /\\  /\n";
    cout << "   \\/  \\/ \n";
    Sleep(500 / speed);
    cls();
    prin(num);
    cout << endl << endl << endl;
    cout << "   _    _  _____ \n";
    cout << "  | |  | ||_   _|\n";
    cout << "  | |  | |  | |  \n";
    cout << "  | |\\/| |  | |  \n";
    cout << "  \\  /\\  / _| |_ \n";
    cout << "   \\/  \\/  \\___/ \n";
    Sleep(500 / speed);
    cls();
    prin(num);
    cout << endl << endl << endl;
    cout << "   _    _  _____  _   _ \n";
    cout << "  | |  | ||_   _|| \\ | |\n";
    cout << "  | |  | |  | |  |  \\| |\n";
    cout << "  | |\\/| |  | |  | . ` |\n";
    cout << "  \\  /\\  / _| |_ | |\\  |\n";
    cout << "   \\/  \\/  \\___/ \\_| \\_/\n";
    Sleep(500 / speed);
    cls();
    prin(num);
    cout << endl << endl << endl;
    cout << "   _    _  _____  _   _  _   _ \n";
    cout << "  | |  | ||_   _|| \\ | || \\ | |\n";
    cout << "  | |  | |  | |  |  \\| ||  \\| |\n";
    cout << "  | |\\/| |  | |  | . ` || . ` |\n";
    cout << "  \\  /\\  / _| |_ | |\\  || |\\  |\n";
    cout << "   \\/  \\/  \\___/ \\_| \\_/\\_| \\_/\n";

    Sleep(500 / speed);
    cls();
    prin(num);
    cout << endl << endl << endl;
    cout << "   _    _  _____  _   _  _   _  _____ \n";
    cout << "  | |  | ||_   _|| \\ | || \\ | ||  ___|\n";
    cout << "  | |  | |  | |  |  \\| ||  \\| || |__  \n";
    cout << "  | |\\/| |  | |  | . ` || . ` ||  __| \n";
    cout << "  \\  /\\  / _| |_ | |\\  || |\\  || |___ \n";
    cout << "   \\/  \\/  \\___/ \\_| \\_/\\_| \\_/\\____/ \n";
    for (int i = 0; i < 4; i++) {
        Sleep(300);
        cls();
        prin(num);
        cout << endl << endl << endl;
        cout << "   _    _  _____  _   _  _   _  _____ ______ \n";
        cout << "  | |  | ||_   _|| \\ | || \\ | ||  ___|| ___ \\\n";
        cout << "  | |  | |  | |  |  \\| ||  \\| || |__  | |_/ /\n";
        cout << "  | |\\/| |  | |  | . ` || . ` ||  __| |    / \n";
        cout << "  \\  /\\  / _| |_ | |\\  || |\\  || |___ | |\\ \\ \n";
        cout << "   \\/  \\/  \\___/ \\_| \\_/\\_| \\_/\\____/ \\_| \\_|\n";
        Sleep(300);
        system("CLS");
        prin(num);
    }
    show();
}




/*void prin(vector<int> num) {//OLD
    for (int i = 0; i < 3; i++) {
        switch (num[i]) {
        case 1:
            cout << "   .----------------. \n"
                << "  | .--------------. |\n"
                << "  | |     __       | |\n"
                << "  | |    /  |      | |\n"
                << "  | |    `| |      | |\n"
                << "  | |     | |      | |\n"
                << "  | |    _| |_     | |\n"
                << "  | |   |_____|    | |\n"
                << "  | |              | |\n"
                << "  | '--------------' |\n"
                << "   '----------------' \n";
            break;
        case 2:
            cout << "   .----------------. \n"
                << "  | .--------------. |\n"
                << "  | |    _____     | |\n"
                << "  | |   / ___ `.   | |\n"
                << "  | |  |_/___) |   | |\n"
                << "  | |   .'____.'   | |\n"
                << "  | |  / /____     | |\n"
                << "  | |  |_______|   | |\n"
                << "  | |              | |\n"
                << "  | '--------------' |\n"
                << "   '----------------' \n";
            break;
        case 3:
            cout << "   .----------------. \n"
                << "  | .--------------. |\n"
                << "  | |    ______    | |\n"
                << "  | |   / ____ `.  | |\n"
                << "  | |   `'  __) |  | |\n"
                << "  | |   _  |__ '.  | |\n"
                << "  | |  | \\____) |  | |\n"
                << "  | |   \\______.'  | |\n"
                << "  | |              | |\n"
                << "  | '--------------' |\n"
                << "   '----------------' \n";
            break;
        case 4:
            cout << "   .----------------. \n"
                << "  | .--------------. |\n"
                << "  | |   _    _     | |\n"
                << "  | |  | |  | |    | |\n"
                << "  | |  | |__| |_   | |\n"
                << "  | |  |____   _|  | |\n"
                << "  | |      _| |_   | |\n"
                << "  | |     |_____|  | |\n"
                << "  | |              | |\n"
                << "  | '--------------' |\n"
                << "   '----------------' \n";
            break;
        case 5:
            cout << "   .----------------. \n"
                << "  | .--------------. |\n"
                << "  | |   _______    | |\n"
                << "  | |  |  _____|   | |\n"
                << "  | |  | |____     | |\n"
                << "  | |  '_.____''.  | |\n"
                << "  | |  | \\____) |  | |\n"
                << "  | |   \\______.'  | |\n"
                << "  | |              | |\n"
                << "  | '--------------' |\n"
                << "   '----------------' \n";
            break;
        case 6:
            cout << "   .----------------. \n"
                << "  | .--------------. |\n"
                << "  | |    ______    | |\n"
                << "  | |  .' ____ \\   | |\n"
                << "  | |  | |____\\_|  | |\n"
                << "  | |  | '____`'.  | |\n"
                << "  | |  | (____) |  | |\n"
                << "  | |  '.______.'  | |\n"
                << "  | |              | |\n"
                << "  | '--------------' |\n"
                << "   '----------------' \n";
            break;
        case 7:
            cout << "   .----------------. \n"
                << "  | .--------------. |\n"
                << "  | |   _______    | |\n"
                << "  | |  |  ___  |   | |\n"
                << "  | |  |_/  / /    | |\n"
                << "  | |      / /     | |\n"
                << "  | |     / /      | |\n"
                << "  | |    /_/       | |\n"
                << "  | |              | |\n"
                << "  | '--------------' |\n"
                << "   '----------------' \n";
            break;
        default:
            cout << "   .----------------. \n"
                << "  | .--------------. |\n"
                << "  | |              | |\n"
                << "  | |              | |\n"
                << "  | |              | |\n"
                << "  | |              | |\n"
                << "  | |              | |\n"
                << "  | |              | |\n"
                << "  | |              | |\n"
                << "  | '--------------' |\n"
                << "   '----------------' \n";
            break;
        }
    }
}
*/

int generate() {

    unsigned seed = chrono::system_clock::now().time_since_epoch().count();

    default_random_engine generator(seed);

    uniform_int_distribution<int> distribution(0, 100);

    int num = distribution(generator);

    if (num <= 40) {
        return 1;
    }
    else if (num <= 60) {
        return 2;
    }
    else if (num <= 80) {
        return 3;
    }
    else if (num <= 90) {
        return 4;
    }
    else if (num <= 95) {
        return 5;
    }
    else if (num <= 98) {
        return 6;
    }
    else {
        return 7;
    }
}

void rollNumbers(vector<int>& sum, int delays) {
    hide();
    system("cls");
    sum[0] = generate();
    sum[1] = generate();
    sum[2] = generate();
    int sumold1 = sum[0];
    int sumold2 = sum[1];
    int sumold3 = sum[2];

    while (sum[0] == sum[1] || sum[0] == sum[2]) {
        sum[0] = generate();
    }
    while (sum[1] == sum[2] || sum[1] == sum[0]) {
        sum[1] = generate();
    }

    for (int i = 0; i < 71; i++) {

        Sleep(delays);
        if (i > 40) {
            if (i >= 50) {
                sum[0] = sumold1;
            }
            else if (i % 2 == 0) {
                sum[0]--;
                if (sum[0] <= 1) {
                    sum[0] = 7;
                }
            }
        }
        else {
            sum[0]--;
            if (sum[0] <= 1) {
                sum[0] = 7;
            }
        }
        Sleep(delays);
        cls();
        prin(sum);
        if (i > 50) {
            if (i >= 60) {
                sum[1] = sumold2;
            }
            else if (i % 2 == 0) {
                sum[1]--;
                if (sum[1] <= 1) {
                    sum[1] = 7;
                }
            }
        }
        else {
            sum[1]--;
            if (sum[1] <= 1) {
                sum[1] = 7;
            }
        }
        Sleep(delays);
        if (i > 60) {
            if (i >= 70) {
                sum[2] = sumold3;
            }
            else if (i % 2 == 0) {
                sum[2]--;
                if (sum[2] <= 1) {
                    sum[2] = 7;
                }
            }
        }
        else {
            sum[2]--;
            if (sum[2] <= 1) {
                sum[2] = 7;
            }
        }
        Sleep(delays);
        cls();
        prin(sum);
    }
    show();
    cout << endl << endl << endl;
    if (cash <= 0) return;

    if (sum[0] == sum[1] && sum[1] == sum[2]) return;

    string temp4 = "  Press enter to spin (10$ COST) || q to go to main menu\n";
    cout << "  Owned money ($): " << cash << endl<<endl;
    for (int i = 0; i < temp4.size(); i++) {
        cout << temp4[i];
        Sleep(10 / speed);
    }
    cout << endl << "> ";
back:
    char input;
    cin.get(input);
    if (input == '\n' || input == '\0') {
    }
    else if (input == 'q' || input == 'Q') {
        cin.ignore();
        return;
    }
    else {
        goto back;
    }
    cash -= 10;
    times++;
    sum = { 0, 0, 0 };
    delays = 10 / speed;
    rollNumbers(sum, delays);
}

void mainend() {
    system("cls");

    cout << "   .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n"
            "  | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n"
            "  | |    _______   | || |   _____      | || |     ____     | || |  _________   | || |    _______   | |\n"
            "  | |   /  ___  |  | || |  |_   _|     | || |   .'    `.   | || | |  _   _  |  | || |   /  ___  |  | |\n"
            "  | |  |  (__ \\_|  | || |    | |       | || |  /  .--.  \\  | || | |_/ | | \\_|  | || |  |  (__ \\_|  | |\n"
            "  | |   '.___`-.   | || |    | |   _   | || |  | |    | |  | || |     | |      | || |   '.___`-.   | |\n"
            "  | |  |`\\____) |  | || |   _| |__/ |  | || |  \\  `--'  /  | || |    _| |_     | || |  |`\\____) |  | |\n"
            "  | |  |_______.'  | || |  |________|  | || |   `.____.'   | || |   |_____|    | || |  |_______.'  | |\n"
            "  | |              | || |              | || |              | || |              | || |              | |\n"
            "  | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n"
            "   '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n\n\n";

    if (cash <= 0) {
        cout << "  YOU LOST YOUR LIFE SAVINGS\n";
        lost++;
        cout << "  Resetting cash\n";
        cash = 100;
        system("pause");
        system("cls");
        cout << "   .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n"
                "  | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n"
                "  | |    _______   | || |   _____      | || |     ____     | || |  _________   | || |    _______   | |\n"
                "  | |   /  ___  |  | || |  |_   _|     | || |   .'    `.   | || | |  _   _  |  | || |   /  ___  |  | |\n"
                "  | |  |  (__ \\_|  | || |    | |       | || |  /  .--.  \\  | || | |_/ | | \\_|  | || |  |  (__ \\_|  | |\n"
                "  | |   '.___`-.   | || |    | |   _   | || |  | |    | |  | || |     | |      | || |   '.___`-.   | |\n"
                "  | |  |`\\____) |  | || |   _| |__/ |  | || |  \\  `--'  /  | || |    _| |_     | || |  |`\\____) |  | |\n"
                "  | |  |_______.'  | || |  |________|  | || |   `.____.'   | || |   |_____|    | || |  |_______.'  | |\n"
                "  | |              | || |              | || |              | || |              | || |              | |\n"
                "  | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n"
                "   '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n\n\n";
    }
    string temp1 = "  Owned money ($): ";
    string temp2 = "  Times spun: ";
    string temp3 = "  Times lost: ";

    for (int i = 0; i < temp1.size(); i++) {
        cout << temp1[i];
        Sleep(10 / speed);
    }
    cout << cash << endl << endl;
    for (int i = 0; i < temp2.size(); i++) {
        cout << temp2[i];
        Sleep(10 / speed);
    }
    cout << times << endl << endl;
    for (int i = 0; i < temp3.size(); i++) {
        cout << temp3[i];
        Sleep(10 / speed);
    }
    cout << lost << endl << endl;

    string temp4 = "  Press enter to spin (10$ COST) || q to quit\n";

    for (int i = 0; i < temp4.size(); i++) {
        cout << temp4[i];
        Sleep(10 / speed);
    }
    cout << endl << "> ";
back:
    char input;
    cin.get(input);
    if (input == '\n' || input == '\0') {
    }
    else if (input == 'q' || input == 'Q') {
        return;
    }
    else {
        goto back;
    }

    vector<int> sum = { 0, 0, 0 };

    int initialDelay = 10 / speed;
    times++;
    cash -= 10;

    rollNumbers(sum, initialDelay);

    if (sum[0] == sum[1] && sum[1] == sum[2]) {

        win(sum);
        cout << endl<<endl<<endl;
        switch (sum[0]) {

        case 1: cash += 200;
            cout << "  Money won: " << 200;
            Sleep(2000);
            break;

        case 2: cash += 400;
            cout << "  Money won: " << 400;
            Sleep(2000);
            break;

        case 3: cash += 800;
            cout << "  Money won: " << 800;
            Sleep(2000);
            break;

        case 4: cash += 2000;
            cout << "  Money won: " << 2000;
            Sleep(2000);
            break;

        case 5: cash += 5000;
            cout << "  Money won: " << 5000;
            Sleep(2000);
            break;

        case 6: cash += 10000;
            cout << "  Money won: " << 10000;
            Sleep(2000);
            break;

        case 7: cash += 100000;
            cout << "  Money won: " << 100000;
            Sleep(2000);
            break;

        default: break;
        }
    }
    mainend();
}

void loaddata() {
    ifstream input("data.txt");
    string abc;
    getline(input, abc);
    string c = "";
    getline(input, c);
    if (c.size() < 1 || c[0] < 70) {
        input.close();
        cerr << "ERROR LOADING DATA\n";
        cout << "DO NOT CLOSE THE APPLICATION | DATA LOSS OCCURED\n";
        ofstream output("data.txt");
        output << "DO NOT CHANGE THE CONTENTS IN THIS FILE\n";
        Sleep(500);
        string ahem;

        ahem = to_string(cash);
        for (int i = 0; i < ahem.size(); i++) {
            char temp = ahem[i] - 43;
            temp += (key);
            temp += (key * pow(10, 1));
            c += temp;
        }
        output << c << endl;
        c = "";
        ahem = to_string(times);
        for (int i = 0; i < ahem.size(); i++) {
            char temp = ahem[i] - 43;
            temp += (key);
            temp += (key * pow(10, 1));
            c += temp;
        }
        output << c << endl;
        c = "";
        ahem = to_string(lost);
        for (int i = 0; i < ahem.size(); i++) {
            char temp = ahem[i] - 43;
            temp += (key);
            temp += (key * pow(10, 1));
            c += temp;
        }
        output << c;
        c = "";
        output.close();
    }
    input.close();
    ifstream inp("data.txt");
    getline(inp, abc);
    getline(inp, c);
    cash = 0;
    for (int i = 0; i < c.size(); i++) {
        char temp = c[i];
        temp -= (key - 5);
        temp -= 10 + (key * pow(10, 1));
        i > 0 ? cash *= 10 : cash;
        cash += int(temp);
    }
    c = "";
    getline(inp, c);
    for (int i = 0; i < c.size(); i++) {
        char temp = c[i];
        temp -= (key - 5);
        temp -= 10 + (key * pow(10, 1));
        i > 0 ? times *= 10 : times;
        times += int(temp);
    }
    c = "";
    getline(inp, c);
    for (int i = 0; i < c.size(); i++) {
        char temp = c[i];
        temp -= (key - 5);
        temp -= 10 + (key * pow(10, 1));
        i > 0 ? lost *= 10 : lost;
        lost += int(temp);
    }
    inp.close();
}

void load() {
    hide();
    string abc = "[               ]";

    cout << "Loading " << abc;
    loaddata();
    for (int i = 1; i < 16; ++i) {

        int wait = rand() % 400 + 1;

        Sleep(wait);

        abc[i] = 254;

        cls();
        cout << "Tip: For your data to save you must go back to the main menu and type q to quit safely.\n";
        cout << "Loading " << abc;

    }

    cout << endl << "Complete! ";
    show();
    system("pause");

    system("cls");
    string temp1 = "Calibrating";
    for (int i = 0; i < temp1.size(); i++) {
        cout << temp1[i];
        Sleep(30);
    }
    cout << ".";
    Sleep(50);
    cout << ".";
    Sleep(50);
    cout << ".";
    Sleep(200);
    cls();
    cout << "Calibrating ERROR";
    Sleep(400);
    system("cls");
    cout << "Calibrating ";
    Sleep(100);
    cls();
    cout << "Calibrating OK";
    Sleep(400);
}


void savedata() {

    cout << endl;
    system("cls");
    ofstream output("data.txt");

    if (output.is_open()) {

        cout << "Saving data\n\n";

        string c = "";
        int temp;
        ofstream output("data.txt");
        string ahem;
        output << "DO NOT CHANGE THE CONTENTS IN THIS FILE\n";
        ahem = to_string(cash);
        for (int i = 0; i < ahem.size(); i++) {
            char temp = ahem[i] - 43;
            temp += (key);
            temp += (key * pow(10, 1));
            c += temp;
        }
        output << c << endl;
        c = "";
        ahem = to_string(times);
        for (int i = 0; i < ahem.size(); i++) {
            char temp = ahem[i] - 43;
            temp += (key);
            temp += (key * pow(10, 1));
            c += temp;
        }
        output << c << endl;
        c = "";
        ahem = to_string(lost);
        for (int i = 0; i < ahem.size(); i++) {
            char temp = ahem[i] - 43;
            temp += (key);
            temp += (key * pow(10, 1));
            c += temp;
        }
        output << c;
        c = "";
        output.close();

        cout << "Data saved successfully!" << endl;
    }
    else {
        cerr << "Error: ERROR SAVING DATA!" << endl;
    }
}


int main() {

    system("cls");

    atexit(savedata);

    load();

    int tries = 0;

    while (true) {
        system("cls");
        tries++;
        if (tries > 10) {
            cout << "CONSOLE ERROR\n PROCEEDING WITH SPEED: 1";
            speed = 1;
            break;
        }
        cout << "   _____  ______  _______  _______  _____  _   _   _____   _____ \n";
        cout << "  / ____||  ____||__   __||__   __||_   _|| \\ | | / ____| / ____|\n";
        cout << " | (___  | |__      | |      | |     | |  |  \\| || |  __ | (___  \n";
        cout << "  \\___ \\ |  __|     | |      | |     | |  | . ` || | |_ | \\___ \\ \n";
        cout << "  ____) || |____    | |      | |    _| |_ | |\\  || |__| | ____) |\n";
        cout << " |_____/ |______|   |_|      |_|   |_____||_| \\_| \\_____||_____/ \n\n";

        string temp1 = "Define console SPEED (default: 1, max: 2, min: 1) \n";
        for (int i = 0; i < temp1.size(); i++) {
            cout << temp1[i];
            Sleep(20);
        }
        cout << endl << "> ";
        cin >> speed;

        if (speed > 2 || speed < 1) {
            cout << "SPEED DECLARATION ERROR\n";
            Sleep(500);
        }
        else {
            break;
        }
    }

    cin.ignore(999, '\n');

    mainend();

    return 0;
}