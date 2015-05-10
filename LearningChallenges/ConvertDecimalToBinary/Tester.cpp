//
//  Tester.cpp
//  LearningChallenges
//
//  Created by Sven on 5/10/15.
//  Copyright (c) 2015 Mikael Dunhem. All rights reserved.
//

#include "Tester.h"
#include "Converter.h"

namespace ConvertDecimalToBinary {
    void Tester::run() {
        int input;
        Converter *converter = new Converter();
        
        std::cout << "Converts a decimal number to binary.\n\n";
        while (true) {
            std::cout << "Enter number to convert (only integers): ";
            std::cin >> input;
            std::cout << converter->convert(input) << std::endl;
            std::cout << "Quit (y)? ";
            std::string runAgain;
            std::cin >> runAgain;
            if (runAgain == "y") {
                break;
            }
        }
    }
}
