class Espresso : public Beverage {
    public:
    Espresso() {
        description = "Espresso";
    }
    
    double cost() {
        return 1.99;
    }    
};
