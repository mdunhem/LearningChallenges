//
//  LinkedList.cpp
//  LearningChallenges
//
//  Created by Sven on 5/10/15.
//  Copyright (c) 2015 Mikael Dunhem. All rights reserved.
//

#include "LinkedList.h"


namespace ReversePrintLinkedList {
    
    Node::Node() {
        value = 0;
    }
    
    Node::Node(int value) {
        this->value = value;
    }
    
    void LinkedList::add(int value) {
        Node *node = new Node(value);
        node->next = tail;
        tail = node;
    }
}