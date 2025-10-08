//#include <iostream>
//#include <fstream>
//#include <string>
//#include <conio.h>
//using namespace std;
//
//int main()
//{
//    cout << "=== Hangman Game Booo ===" << endl << endl;
//    
//    const int MAX = 50;
//    string words[MAX];
//    int count = 0;
//
//    ifstream file("words.txt");
//    if (!file)
//    {
//        cout << "Error: Could not open words.txt" << endl;
//        return 1;
//    }
//
//    while (count < MAX && file >> words[count])
//    {
//        count++;
//    }
//    file.close();
//
//    if (count == 0)
//    {
//        cout << "No words found in file!" << endl;
//        return 1;
//    }
//
//    cout << "Choose a word number between 1 and " << count << ": ";
//    int choice;
//    cin >> choice;
//
//    if (choice < 1 || choice > count)
//    {
//        choice = 1;
//    }
//
//    string selected = words[choice - 1];
//    string guessed = "";
//    for (int i = 0; i < selected.length(); i++)
//    {
//        guessed += "_";
//    }
//
//    int mistakes = 0;
//    const int MISTAKES = 10;
//    char tried[26];
//    int triedCount = 0;
//
//    cout << endl << "=== Start Guessing ===" << endl;
//
//    while (mistakes < MISTAKES && guessed != selected)
//    {
//        cout << endl << "Word: " << guessed << endl;
//        cout << "Remaining mistakes: " << (MISTAKES - mistakes) << endl;
//        cout << "Enter a letter: ";
//
//        string input;
//        cin >> input;
//
//        if (input.length() != 1)
//        {
//            if (input == selected)
//            {
//                guessed = selected;
//                break;
//            }
//            else
//            {
//                mistakes++;
//                cout << "Wrong word guess!" << endl;
//                continue;
//            }
//        }
//
//        char guess = input[0];
//
//        bool alreadyTried = false;
//        for (int i = 0; i < triedCount; i++)
//        {
//            if (tried[i] == guess)
//            {
//                alreadyTried = true;
//                break;
//            }
//        }
//
//        if (alreadyTried)
//        {
//            cout << "You already tried that letter!" << endl;
//            continue;
//        }
//
//        tried[triedCount++] = guess;
//
//        bool correct = false;
//        for (int i = 0; i < selected.length(); i++)
//        {
//            if (selected[i] == guess)
//            {
//                guessed[i] = guess;
//                correct = true;
//            }
//        }
//
//        if (correct)
//        {
//            cout << "Correct guess!" << endl;
//        }
//        else
//        {
//            mistakes++;
//            cout << "Wrong guess!" << endl;
//        }
//    }
//
//    if (guessed == selected)
//    {
//        cout << endl << "Yay! You win! The word was: " << selected << endl;
//    }
//    else
//    {
//        cout << endl << "Oh no! You lost! The word was: " << selected << endl;
//    }
//
//    cout << "Press any key to finish..." << endl;
//    _getch();
//
//    cout << "Game finisheddd..." << endl;
//    return 0;
//}
