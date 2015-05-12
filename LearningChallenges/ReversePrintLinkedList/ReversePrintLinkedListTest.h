//
//  ReversePrintLinkedListTest.h
//  LearningChallenges
//
//  Created by Sven on 5/10/15.
//  Copyright (c) 2015 Mikael Dunhem. All rights reserved.
//

#ifndef __LearningChallenges__ReversePrintLinkedListTest__
#define __LearningChallenges__ReversePrintLinkedListTest__

#include <stdio.h>
#include <iostream>

namespace ReversePrintLinkedList {
    class ReversePrintLinkedListTest {
        
    public:
        void run();
        // Needs to be static in order to be used in the LinkedList iterator
        static void iterateLinkedList(int value);
    };
}

#endif /* defined(__LearningChallenges__ReversePrintLinkedListTes__) */
