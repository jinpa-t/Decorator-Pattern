
class Whip : public CondimentDecorator {
    Beverage *beverage;
    
    public:
    Whip(Beverage *beverage) {
        this->beverage = beverage;
    }

    std::string getDescription() {
        return beverage->getDescription() + ", Whip";
    }

    double cost() {
        return 0.10 + beverage->cost();
    }
};
