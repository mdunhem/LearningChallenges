//
//  ReversePrintLinkedListTest.cpp
//  LearningChallenges
//
//  Created by Sven on 5/10/15.
//  Copyright (c) 2015 Mikael Dunhem. All rights reserved.
//

#include "ReversePrintLinkedListTest.h"
#include "LinkedList.h"

namespace ReversePrintLinkedList {
    
    static std::string output;
    
    void ReversePrintLinkedListTest::run() {
        LinkedList linkedList;
        
        std::cout << "Prints out a linked list in reverse.\n\n";
        
        linkedList.add(1);
        linkedList.add(0);
        linkedList.add(3);
        linkedList.add(2);
        linkedList.add(3);
        linkedList.add(4);
        
        linkedList.nonDestructivelyIterate(&ReversePrintLinkedListTest::iterateLinkedList);
        
        std::cout << output;
    }
    
     void ReversePrintLinkedListTest::iterateLinkedList(int value) {
        output.insert(0, std::to_string(value));
    }
    
}