//
//  LinkedList.h
//  LearningChallenges
//
//  Created by Sven on 5/10/15.
//  Copyright (c) 2015 Mikael Dunhem. All rights reserved.
//
//
//  Problem: Print out a linked list in reverse
//

#ifndef __LearningChallenges__LinkedList__
#define __LearningChallenges__LinkedList__

#include <stdio.h>

namespace ReversePrintLinkedList {
    struct Node {
        int value;
        Node *next;
        Node();
        Node(int);
    };
    
    class LinkedList {
        Node *tail;
        
    public:
        LinkedList();
        void add(int);
        bool hasNext();
        Node* getNext();
    };
}

#endif /* defined(__LearningChallenges__LinkedList__) */
