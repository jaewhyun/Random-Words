//
//  randomwords.cpp
//  randomwords
//
//  Created by Jae Won Hyun on 10/9/16 for CS341.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#include <stdio.h>
#include "randomwords.h"
#include <iomanip>
#include <iostream>
#include <random>
using namespace std;

// constructor
Word::Word()
{
    // take in 10 nounds
    string enternoun;
    cout << "Please enter in 10 nouns \n";
    
    for(int i = 0; i < wordcount; i++)
    {
        // if entry is not the end of file and is good
        if(!cin.eof() && cin.good())
        {
            // take in nouns
            cin >> enternoun;
            nounarray[i] = enternoun;
        }
        else
        {
            // print out error
            cout << "Goodbye" << endl;
        }
    }
    
    // take in 10 verbs
    string enterverb;
    cout << "Please enter in 10 verbs \n";
    
    for(int j = 0; j < wordcount; j++)
    {
        // if entry is not the end of file and is good
        if(!cin.eof() && cin.good())
        {
            // take in verbs
            cin >> enterverb;
            verbarray[j] = enterverb;
        }
        else
        {
            // print out error
            cout << "Goodbye" << endl;
        }
    }
    
}


// figure out first noun
void Word::setfirstnoun()
{
    // set index number to 0
    nounoneindex = 0;
    // get random index
    nounoneindex = rand() % nounarray.size();
    // first noun = the noun in the random index of the array
    firstnoun = nounarray[nounoneindex];
}

// figure out second noun
void Word::setsecondnoun()
{
    // set index number to 0
    nountwoindex = 0;
    // get random index
    nountwoindex = rand() % nounarray.size();
    
    // if the random index is equal to the random index of the first noun
    if(nountwoindex == nounoneindex)
    {
        // increment the second index number by 1
        nountwoindex += 1;
        
        // however, if the second index value then equals 10,
        if(nountwoindex == 10)
        {
            // set the index value back to 0
            nountwoindex = 0;
            // figure out second noun based on the index
            secondnoun = nounarray[nountwoindex];
        }
        // if the second index value does not equal 10
        else
        {
            // figure out second noun
            secondnoun = nounarray[nountwoindex];
        }
    }
    // if the random index is not equal to the random index of the first noun
    else
    {
        // figure out second noun
        secondnoun = nounarray[nountwoindex];
    }
}

// return first noun
string Word::getfirstnoun()
{
    setfirstnoun();
    return firstnoun;
}

// return second noun
string Word::getsecondnoun()
{
    setsecondnoun();
    return secondnoun;
}

// figure out verb
void Word::setverb()
{
    // set verb index as 0
    verbindex = 0;
    // figure out random verb index
    verbindex = rand() % verbarray.size();
    // verb equals whatever verb is in the random index of the array
    verb = verbarray[verbindex];
}

// return verb
string Word::getverb()
{
    setverb();
    return verb;
}
