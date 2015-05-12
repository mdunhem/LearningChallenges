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
        ~Node();
    };
    
    class LinkedList {
        Node *tail;
        
    public:
        LinkedList();
        ~LinkedList();
        void add(int);
        bool hasNext();
        Node* getNext();
        void nonDestructivelyIterate(void (*iterator)(int));
    };
}

#endif /* defined(__LearningChallenges__LinkedList__) */
