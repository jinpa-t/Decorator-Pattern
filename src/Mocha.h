class Mocha : public CondimentDecorator {
    Beverage *beverage;
    
    public:
    Mocha(Beverage *beverage) {
        this->beverage = beverage;
    }

    std::string getDescription() {
        return beverage->getDescription() + ", Mocha";
    }

    double cost() {
        return 0.20 + beverage->cost();
    }
};