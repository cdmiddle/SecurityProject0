//
//  main.cpp
//  SecurityProject0
//
//  Created by Court Middleton on 9/12/19.
//  Copyright © 2019 Court Middleton. All rights reserved.
//

#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Please enter a message on the same line as this text";
    string message;
    getline(cin, message);

    for (int i  = 0; i < message.length(); i++)
    {
        if (islower(message[i]))
        {
            int result = 109 - message[i];
            message[i] = char(110 + result);
        }
        
    }
    cout << message << endl;
    
            
            
    return 0;
}
