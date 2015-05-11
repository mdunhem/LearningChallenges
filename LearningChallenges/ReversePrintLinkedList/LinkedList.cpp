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
        value = NULL;
        next = nullptr;
    }
    
    Node::Node(int value) {
        this->value = value;
        next = nullptr;
    }
    
    LinkedList::LinkedList() {
        tail = nullptr;
    }
    
    void LinkedList::add(int value) {
        Node *node = new Node(value);
        node->next = tail;
        tail = node;
    }
    
    bool LinkedList::hasNext() {
        return tail->next != nullptr;
    }
    
    Node* LinkedList::getNext() {
        return tail;
    }
}