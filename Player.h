class Player {
public:
    std::string name, color;

    Player() {
        Player("P1", "RED");
    }

    Player(std::string name, std::string color) {
        this->name = name;
        this->color = color;
    }

    void changeNameAndColor(std::string name, std::string color) {
        this->name = name;
        this->color = color;
    }
};