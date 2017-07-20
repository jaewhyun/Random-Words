//
//  randomwords.h
//  randomwords
//
//  Created by Jae Won Hyun on 10/9/16 for CS341.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//

#ifndef randomwords_h
#define randomwords_h
#include <array>
#include <string>
using namespace std;

class Word
{
public:
    static const size_t wordcount = 10; //set array size
    Word(); // constructor
    void setfirstnoun(); // set first noun
    void setsecondnoun(); // set second noun
    void setverb(); // set verb
    string getfirstnoun(); // return first noun
    string getsecondnoun(); // return second noun
    string getverb(); // return verb

private:
    int nounoneindex;
    int nountwoindex;
    int verbindex;
    string firstnoun;
    string secondnoun;
    string verb;
    array<string, wordcount> nounarray; // declare string array
    array<string, wordcount> verbarray; // declare string array
};


#endif /* randomwords_h */
