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
    
    void ReversePrintLinkedListTest::run() {
        std::string output;
        LinkedList linkedList;
        Node *node;
        
        std::cout << "Prints out a linked list in reverse.\n\n";
        
        linkedList.add(1);
        linkedList.add(0);
        linkedList.add(3);
        linkedList.add(2);
        linkedList.add(3);
        linkedList.add(4);
        
        node = linkedList.getNext();
        
        while (node->next != nullptr) {
            output.insert(0, std::to_string(node->value));
            node = node->next;
        }
        
        output.insert(0, std::to_string(node->value));
        
        std::cout << output;
    }
    
}