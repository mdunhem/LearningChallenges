//
//  Converter.h
//  LearningChallenges
//
//  Created by Sven on 5/9/15.
//  Copyright (c) 2015 Mikael Dunhem. All rights reserved.
//

#ifndef __LearningChallenges__Converter__
#define __LearningChallenges__Converter__

#include <stdio.h>
#include <iostream>

namespace ConvertDecimalToBinary {
    class Converter {
        std::string binaryOutput;
        
    public:
        std::string convert(int numberToConvert);
    };
}


#endif /* defined(__LearningChallenges__Converter__) */
