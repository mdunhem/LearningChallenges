//
//  Converter.cpp
//  LearningChallenges
//
//  Created by Sven on 5/9/15.
//  Copyright (c) 2015 Mikael Dunhem. All rights reserved.
//

#include "Converter.h"

namespace ConvertDecimalToBinary {
    
    std::string Converter::convert(int numberToConvert) {
        while (numberToConvert > 0) {
            binaryOutput.insert(0, std::to_string(numberToConvert % 2));
            numberToConvert /= 2;
        }
        
        return binaryOutput;
    }
}
