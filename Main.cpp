
#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
    clsString String1;
    clsString String2("Zakaria");

    String1.Value = "Zakaria Abd-Aluzizi Mohammed Naser Al-Hounini";

    cout << "String1: " << String1.GetValue() << endl;
    cout << "String2: " << String2.Value << endl;

    cout << "Number of Words: " << String1.CountWords() << endl;

    cout << "Number of Words: " << clsString::CountWords("Zakaria Al-Hounini") << endl;
    
	//----------------
	clsString String3("hi how are you?");

	cout << "String 3 = " << String3.Value << endl;

	cout << "String Length = " << String3.Length() << endl;

	String3.UpperFirstLetterOfEachWord();
	cout << String3.Value << endl;

	//----------------

	String3.LowerFirstLetterOfEachWord();
	cout << String3.Value << endl;

	//----------------

	String3.UpperAllString();
	cout << String3.Value << endl;

	//----------------

	String3.LowerAllString();
	cout << String3.Value << endl;

	//----------------

	cout << "After inverting a : "
		<< clsString::InvertLetterCase('a') << endl;

	//----------------

	String3.Value = "AbCdEfg";

	String3.InvertAllLettersCase();
	cout << String3.Value << endl;

	String3.InvertAllLettersCase();
	cout << String3.Value << endl;

	//----------------

	cout << "Capital Letters count : "
		<< clsString::CountLetters("Zakaria Abd-Aluzizi Mohammed Naser Al-Hounini", clsString::CapitalLetters)
		<< endl << endl;

	//----------------

	String3.Value = "Welcome to Yemen";
	cout << String3.Value << endl;

	cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

	//----------------

	cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

	//----------------

	cout << "vowels count :" << String3.CountVowels() << endl;

	//----------------

	cout << "letter E count :" << String3.CountSpecificLetter('E', false) << endl;

	//----------------

	cout << "is letter u vowel? " << clsString::IsVowel('a')
		<< endl;

	//----------------

	cout << "Words Count" << String3.CountWords()
		<< endl;

	//----------------


	vector<string> vString;

	vString = String3.Split(" ");

	cout << "\nTokens = " << vString.size() << endl;

	for (string& s : vString)
	{
		cout << s << endl;
	}

	//----------------

	//Tirms
	String3.Value = "    Zakaria Al-Hounini     ";
	cout << "\nString     = " << String3.Value;

	String3.Value = "    Zakaria Al-Hounini     ";
	String3.TrimLeft();
	cout << "\n\nTrim Left  = " << String3.Value;

	//----------------

	String3.Value = "    Zakaria Al-Hounini     ";
	String3.TrimRight();
	cout << "\nTrim Right = " << String3.Value;

	//----------------

	String3.Value = "    Zakaria Al-Hounini     ";
	String3.Trim();
	cout << "\nTrim       = " << String3.Value;

	//----------------

	//Joins
	vector<string> vString1 = { "Mohammed", "Faid", "Ali", "Zakaria" };

	cout << "\n\nJoin String From Vector: \n";
	cout << clsString::JoinString(vString1, " ");


	string arrString[] = { "Mohammed", "Faid", "Ali", "Zakaria" };

	cout << "\n\nJoin String From array: \n";
	cout << clsString::JoinString(arrString, 4, " ");

	//----------------

	String3.Value = "Zakaria Al-Hounini";
	cout << "\n\nString     = " << String3.Value;

	String3.ReverseWordsInString();
	cout << "\nReverse Words : " << String3.Value << endl;

	//---------------

	String3.Value = "Zakaria Al-Hounini";
	cout << "\nReplace : " << String3.ReplaceWord("Mohammed", "Sari") << endl;

    //----------------

    clsString String3;
    String3.Value = "This is : sample text, with punctuations.";

    cout << "\n\nString    =  " << String3.Value << endl;
    String3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << String3.Value << endl;

    system("pause>0");
    return 0;
}