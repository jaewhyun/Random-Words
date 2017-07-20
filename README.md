# Random-Words
BU MET CS341 Homework 3

"A C++ program is needed to produce random sentences, as follows.
The program will accept a list of ten unique nouns from the user, followed by a list of ten unique verbs.  From these two lists, the program will use the pseudo-random number generator rand() a total of three times for each sentence to select a noun followed by a verb and followed by another noun.  Or, you may use rand () twice, once for the first noun and once for the verb, then add 1 to the index of the nouns and modularize that value using a divisor of 10. The random number generator is recommended to be used so that the output sentences will have a strong likelihood of being unique. The two nouns in a given sentence must be different.  For example, the user may enter the ten nouns -- ant, bee, cat, dog, egg, fish, gate, hat, ink, joy – and the ten verbs – walked, sang, ate, cried, dragged, fried, greeted, tickled, led, met.  Please note that all of these verbs are in the past tense, but this is not necessary.  Once all of the nouns and verbs have been entered, the program will prompt the user to enter an integer number from 1 to 100 to tell how many sentences to generate.  Then the program will generate that number of random sentences such as, for example – The egg ate the hat.  Please note the format of the individual sentence, i.e.  – “The ” [noun1] [verb] “ the “ [noun2]”.”  With regard to the program organization, it should use a class named Word which handles gets and puts of words.  Also, the Word class should have a default constructor.  
This assignment does not require a container class.  I am leaving it up to you to decide how the user’s input nouns and verbs are to be stored in the program.  However, once a sentence has been displayed to the user, it does not have to be retained by the program.  Thus, it is possible but not likely that two or more output sentences will be the same."
