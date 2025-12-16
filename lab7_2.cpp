#include <iostream>
#include <string>
#include <sstream>

int calculateGear(const std::string& studentID) {
    if (studentID.length() >= 2) {
        std::string twoDigits = studentID.substr(0, 2);
        
        int year;
        std::stringstream ss(twoDigits);
        ss >> year;

        return year - 12;
    }
    return 0;
}

int main() {
    std::string name;
    std::string studentID;
    std::string movie;
    std::string date;
    std::string finalMessage;
    int gear;

    std::cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    std::cout << "?????: ";
    std::getline(std::cin, name); 
    
    std::cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    
    std::cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    
    std::cout << name << ": ";
    std::cin >> studentID;
    
    gear = calculateGear(studentID); 
    std::cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";
    
    std::cout << "Fahsai: Let's go to the cinema together!!!\n";

    std::cin.ignore(); 
    
    std::cout << "Fahsai: What movie do you want to watch?\n";
    std::cout << name << ": ";
    std::getline(std::cin, movie);
    
    std::cout << "Fahsai: So....which day are you free to go with me?\n";
    std::cout << name << ": ";
    std::getline(std::cin, date);

    std::cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching\n";
    std::cout << movie << " with you.\n";
    
    std::cout << name << ": ";
    std::getline(std::cin, finalMessage);
    
    std::cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/\n";
    
    return 0;
}
