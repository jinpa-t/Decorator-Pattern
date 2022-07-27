class Soy : public CondimentDecorator {
    Beverage *beverage;
    
    public:
    Soy(Beverage *beverage) {
        this->beverage = beverage;
    }

    std::string getDescription() {
        return beverage->getDescription() + ", Soy";
    }

    double cost() {
        return 0.15 + beverage->cost();
    }
};
