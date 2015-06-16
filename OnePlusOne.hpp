/*
"A header-only library for figuring out if two numbers equal 1 + 1"
Copyright (C) 2015  waratte

This file is part of OnePlusOne.

OnePlusOne is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

OnePlusOne is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with OnePlusOne.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ONEPLUSONE.HPP
#define ONEPLUSONE.HPP

namespace OnePlusOne {
        
    bool isEqualToOnePlusOneWhenAdded( long long int a, long long int b ) {
    
        return (a + b) == (1 + 1);
    
    }
    
    bool isEqualToOnePlusOneWhenSubtracted( long long int a, long long int b ) {
    
        return (a - b) == (1 + 1);
    
    }
    
    bool isEqualToOnePlusOneWhenMultiplied( long long int a, long long int b ) {
    
        return (a * b) == (1 + 1);
    
    }
    
    bool isEqualToOnePlusOneWhenDivided( long long int a, long long int b ) {
    
        return (a / b) == (1 + 1);
    
    }

}

#endif
