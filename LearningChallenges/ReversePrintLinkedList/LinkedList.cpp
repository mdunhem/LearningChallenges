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
    
    Node::~Node() {
        delete next;
    }
    
    LinkedList::LinkedList() {
        tail = nullptr;
    }
    
    LinkedList::~LinkedList() {
        // iterates through the list by itself
        delete tail;
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
    
    // Move iteration into this class, more appropriate
    void LinkedList::nonDestructivelyIterate(void (*iterator)(int)) {
        Node *node = tail;
        while (node != nullptr) {
            iterator(node->value);
            node = node->next;
        }
        delete node;
    }
}