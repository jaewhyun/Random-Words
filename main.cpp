//
//  main.cpp
//  randomwords
//
//  Created by Jae Won Hyun on 10/9/16 for CS341.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include <iostream>
#include "randomwords.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "This program allows you to enter 10 nouns and 10 verbs in order to generate random sentencs";
    
    // initialize object
    Word random;
    
    // ask how many random sentence the user would like
    cout << "How many sentences would you like? ";
    
    // set number of sentences to 0
    int numbsentences = 0;
    
    // get user input
    cin >> numbsentences;
    
    // set random time to 0
    srand((unsigned int) time(NULL));
    
    // if the entry is not the end of file and is good
    if(!cin.eof() && cin.good())
    {
        // iterate through number of sentences
        for(int i = 0; i < numbsentences; i++)
        {
            // print out noun, verb, and noun
            cout << "the " << random.getfirstnoun() << " " << random.getverb() << " the " << random.getsecondnoun() << "\n";
        }
        
        return 0;
    }
    // if the entry is the end of file and is not good,
    else
    {
        cout << "Input invalid.\n Good bye.\n" << endl;
        return 1;
    }

}
