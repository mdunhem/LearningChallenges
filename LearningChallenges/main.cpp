//
//  main.cpp
//  LearningChallenges
//
//  Created by Sven on 5/9/15.
//  Copyright (c) 2015 Mikael Dunhem. All rights reserved.
//

#include <iostream>
#include "ReversePrintLinkedList/ReversePrintLinkedListTest.h"
#include "ConvertDecimalToBinary/Tester.h"


void runConverterTest() {
    ConvertDecimalToBinary::Tester tester;
    tester.run();
}

void runReversePrintLinkedListTest() {
    ReversePrintLinkedList::ReversePrintLinkedListTest tester;
    tester.run();
}

int main(int argc, const char * argv[]) {
//    runConverterTest();
    runReversePrintLinkedListTest();
    
    return 0;
}
