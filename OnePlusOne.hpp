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
