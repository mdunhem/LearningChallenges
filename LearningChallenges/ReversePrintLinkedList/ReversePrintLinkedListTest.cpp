//
//  ReversePrintLinkedListTest.cpp
//  LearningChallenges
//
//  Created by Sven on 5/10/15.
//  Copyright (c) 2015 Mikael Dunhem. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <vector>
#include "ReversePrintLinkedListTest.h"
#include "LinkedList.h"

namespace ReversePrintLinkedList {
    
    static std::string output;
    
    void ReversePrintLinkedListTest::run() {
        LinkedList linkedList;
        std::string input;
        
        
        std::cout << "Prints out a linked list in reverse.\n\n";
        std::cout << "Enter numbers to add to the list (only integers): ";
        std::getline(std::cin, input);
        
        // This parses the getline into individual numbers
        // Cleanest solution I could come up with
        std::istringstream stringStream(input);
        std::vector<int> tokens {
            std::istream_iterator<int> {stringStream},
            std::istream_iterator<int> {}
        };
        
        for (int &i : tokens) {
            linkedList.add(i);
        }
        
        linkedList.nonDestructivelyIterate(&ReversePrintLinkedListTest::iterateLinkedList);
        
        std::cout << "\n\n" << output;
    }
    
     void ReversePrintLinkedListTest::iterateLinkedList(int value) {
        output.insert(0, std::to_string(value) + " ");
    }
    
}