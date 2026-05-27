#include <iostream>

class GameSettings {
public:
    enum Difficulty{
    EASY = 0, NORMAL, HARD
    };

private:
    Difficulty m_CurrentDifficulty;

public:
    void SetDifficulty(Difficulty Level) {
        m_CurrentDifficulty = Level;

        std::cout << "Current Difficulty: " << m_CurrentDifficulty << std::endl;
    }
};

int main() {
    GameSettings Settings;
    Settings.SetDifficulty(GameSettings::HARD);

    return 0;
}