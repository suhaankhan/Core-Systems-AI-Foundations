#include <iostream>
#include <string>

int countChar(std::string s, char target) {
    int counter = 0;

    for (int i = 0; i < s.length(); i++) {
        if (target == s[i]) {
            counter++;
        }
    }
    std::cout << "Number of times '" << target << "' appeared in '" << s << "': " << counter << std::endl;
    return counter;
}

int main() {
    std::string text = R"(Advertising has us chasing cars and clothes, working jobs we hate so we can buy shit we don't need. 
    We're the middle children of history, man. No purpose or place. We have no Great War. No Great Depression. 
    Our Great War's a spiritual war... our Great Depression is our lives.)";
    char seek;
    std::cout << "Enter the character: ";
    std::cin >> seek;

    int result = countChar(text, seek);

    std::cout << "The character '" << seek << "' appears " << result << " times." << std::endl;
    
    return 0;
}